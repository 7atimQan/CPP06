#include <iostream>
#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.name = "test";

	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized: " << raw << std::endl;

	Data* ptr = Serializer::deserialize(raw);
	std::cout << "Deserialized name: " << ptr->name << std::endl;

	if (ptr == &data)
		std::cout << "ptr : " << ptr << " | &data : " << &data << "\nPointers match!" << std::endl;

	return (0);
}