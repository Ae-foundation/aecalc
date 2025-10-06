
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <getopt.h>
using namespace std;

static struct option longopts[]=
{
	{"help", no_argument,0,'h'}
};
const char *shortopts="h";

int
main(int arg, char**av)
{
	int argc;
	while ((argc=getopt_long(arg,av,shortopts,longopts, &argc))!=-1) {
		switch (argc) {
			case 'h':
				cout << "Type expression with tabs and press return, to see result." << endl;
			break;
			default:
			break;
		}
		return 1;
	}
	cout << ">> ";
	char in[100];
	fgets(in, 100, stdin);
	in[strlen(in) - 1] = '\0';
	char*ctx = nullptr;
	char*endptr = nullptr;
	const char*a = strtok_s(in, " ", &ctx);
	const char*b = strtok_s(nullptr, " ", &ctx);
	const char*c = strtok_s(nullptr, " ", &ctx);
	const double var = strtod(a, &endptr);
	const double var0 = strtod(c, &endptr);
	cout << a << " " << b << " " << c << " = ";
 	switch (*b) {
		case 43:
			cout << var + var0;
			break;
		case 45:
			cout << var - var0;
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