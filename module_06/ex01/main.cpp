//
// Created by mtriston on 26.01.2021.
//

#include "serialization.hpp"

static void randomString(std::string &str) {

	for (int i = 0; i < 8; ++i) {
		if (std::rand() % 2)
			str[i] = std::rand() % 26 + 'a';
		else
			str[i] = std::rand() % 10 + '0';
	}
}

static void *serialize(void) {

	int size = sizeof(std::string) * 2 + sizeof(int);
	char *raw = new char[size];
	int n = std::rand();
	std::string str(8, 0);

	randomString(str);
	std::cout << "s1: " << str << std::endl;
	*reinterpret_cast<std::string*>(raw) = str;

	std::cout << "n: " << n << std::endl;
	*reinterpret_cast<int*>(raw + sizeof(std::string)) = n;

	randomString(str);
	std::cout << "s2: " << str << std::endl;
	*reinterpret_cast<std::string*>(raw + sizeof(std::string) + sizeof(int)) = str;

	std::cout << "size of raw: " << size << std::endl;
	return (raw);
}

static Data *deserialize(void* raw) {

	Data *data;
	char *tmp;

	tmp = static_cast<char *>(raw);
	data = new Data();
	data->s1 = *reinterpret_cast<std::string*>(tmp);
	data->n = *reinterpret_cast<int *>(tmp + sizeof(std::string));
	data->s2 = *reinterpret_cast<std::string*>(tmp + sizeof(std::string) + sizeof(int));
	return (data);
}

int main() {

	void *raw;
	Data *data;

	std::srand(time(0));
	std::cout << "___Serialize___" << std::endl;
	raw = serialize();
	std::cout << "___Deserialize___" << std::endl;
	data = deserialize(raw);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;

	delete [] static_cast<char*>(raw);
	delete data;
	return (0);
}
