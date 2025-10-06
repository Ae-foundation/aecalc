
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int
main(int arg, char** av)
{
	cout << ">> ";
	char in[100];
	fgets(in, 100, stdin);
	in[strlen(in) - 1] = '\0';
	char*ctx = nullptr;
	char*endptr = nullptr;
	const char* a = strtok_s(in, " ", &ctx);
	const char* b = strtok_s(nullptr, " ", &ctx);
	const char* c = strtok_s(nullptr, " ", &ctx);
	const double var = strtod(a, &endptr);
	const double var0 = strtod(c, &endptr);
	cout << a << " " << b << " " << c << " = ";
 	switch (*b) {
		case 43:
			cout << var + var0;
			break;
		case 45:
			std::cout << var - var0;
			break;
		case 42:
			cout << var * var0;
			break;
		case 47:
			cout << var / var0;
			break;
		default: ;
    }
	return 0;
}