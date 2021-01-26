//
// Created by mtriston on 26.01.2021.
//

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

#define ALPHABET "abcdifghifklmnopqrstuvwxyz"
#define ALPHABET_LENGHT 26
#define STR_LEN 8

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void* serialize(void)
{
	static const char* abc = ALPHABET;

	char* data;
	char* str;
	int* num;

	std::cout << "___Serialize___" << std::endl;

	data = new char[sizeof(char) * STR_LEN * 2 + sizeof(int)];
	str = data;

	for (int i = 0; i < STR_LEN - 1; ++i)
		str[i] = abc[std::rand() % ALPHABET_LENGHT];
	str[STR_LEN] = 0;
	std::cout << "s1: " << str << std::endl;
	str+= STR_LEN;

	num = reinterpret_cast<int*>(str);
	*num = std::rand() % 1000;
	std::cout << "num: " << *num << std::endl;
	++num;

	str = reinterpret_cast<char *>(num);
	for (int i = 0; i < STR_LEN - 1; ++i)
		str[i] = abc[std::rand() % ALPHABET_LENGHT];
	str[STR_LEN] = 0;
	std::cout << "s1: " << str << std::endl;

	return (reinterpret_cast<void*>(data));
}

Data* deserialize(void* raw)
{
	Data *data = new Data();
	data->s1 = std::string(reinterpret_cast<char*>(raw), STR_LEN);
	data->n = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + STR_LEN);
	data->s2 = std::string((reinterpret_cast<char*>(raw)) + STR_LEN + sizeof(int), STR_LEN);
	return (data);
}

int main()
{
	std::srand(time(0));

	void* raw = serialize();
	Data* data = deserialize(raw);
	std::cout << "___Deserialize___" << std::endl;
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;



	delete [] reinterpret_cast<char*>(raw);
	return (0);
}