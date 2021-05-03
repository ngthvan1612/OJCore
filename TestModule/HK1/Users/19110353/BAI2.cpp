#include <iostream>
#include <string.h>
#include <cstdlib>

#define MAX 100
using namespace std;

int main()
{
	char hex1_string[MAX];
	gets(hex1_string);
	unsigned long hex1_value = strtoul(hex1_string,0,16);
	char hex2_string[MAX];
	gets(hex2_string);
	unsigned long hex2_value = strtoul(hex2_string,0,16);;
	unsigned long kq = hex1_value + hex2_value;
	cout<<kq;
	return 0;
}
