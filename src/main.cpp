#include <iostream>
#include <cstdlib>
#include <cstring>
#include <getopt.h>

static struct option longopts[]=
{
	{"help", no_argument,0,'h'}
};
const char *shortopts="h";

int
main(int arg, char**av)
{
	int argc;
	while ((argc=getopt_long(arg,av,shortopts,longopts,&argc))!=-1) {
		switch (argc) {
			case 'h':
				std::cout << "Type expression with tabs and press return, to see result." << endl;
			break;
			default:
			break;
		}
		return 1;
	}
	std::cout << ">> ";
	char in[100];
	fgets(in, 100, stdin);
	in[strlen(in) - 1] = '\0';
	char*endptr = nullptr;
	const char*a = strtok(in, " ");
	const char*b = strtok(nullptr, " ");
	const char*c = strtok(nullptr, " ");
	const double var = strtod(a, &endptr);
	const double var0 = strtod(c, &endptr);
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