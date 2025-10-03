
#include <iostream>
#include <cstdlib>
#include <cstring>

int main(int arg, char** av)
{
	std::cout << ">> ";
	char in[100];
	fgets(in, 100, stdin);
	in[strlen(in) - 1] = '\0';
	char*ctx = nullptr;
	char*endptr = nullptr;
	const char* a = strtok_s(in, " ", &ctx);
	const char* b = strtok_s(nullptr, " ", &ctx);
	const char* c = strtok_s(nullptr, " ", &ctx);
	const double var = std::strtod(a, &endptr);
	const double var0 = std::strtod(c, &endptr);
	std::cout << a << " " << b << " " << c << " = ";
 	switch (*b) {
		case 43:
			std::cout << var + var0;
			break;
		case 45:
			std::cout << var - var0;
			break;
		case 42:
			std::cout << var * var0;
			break;
		case 47:
			std::cout << var / var0;
			break;
		default: ;
    }
	return 0;
}