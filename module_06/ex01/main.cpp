//
// Created by mtriston on 26.01.2021.
//

#include "serialization.hpp"

void* serialize(void) {
	static const char* abc = ALPHABET;
	Data *raw;

	raw = new Data();
	raw->s1.resize(9);
	raw->s2.resize(9);
	raw->n = std::rand();
	for (int i = 0; i < STR_LEN; ++i) {
		raw->s1[i] = abc[std::rand() % ALPHABET_LENGHT];
		raw->s2[i] = abc[std::rand() % ALPHABET_LENGHT];
	}
	raw->s1[STR_LEN] = '\0';
	raw->s2[STR_LEN] = '\0';

	std::cout << "___Serialize___" << std::endl;
	std::cout << "s1: " << raw->s1 << std::endl;
	std::cout << "n: " << raw->n << std::endl;
	std::cout << "s2: " << raw->s2 << std::endl;
	/* 72 bytes on Linux because sizeof(std::string) = 32 bytes */
	std::cout << "size of raw: " << sizeof(*raw) << std::endl;
	return (raw);
}

Data* deserialize(void* raw) { return (reinterpret_cast<Data*>(raw)); }


int main()
{
	std::srand(time(0));

	void* raw = serialize();
	Data* data = deserialize(raw);
	std::cout << "___Deserialize___" << std::endl;
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;

	delete data;
	return (0);
}
