//#include "common.h"
#include <stdio.h>

void print(char* str);
char* input();

int main()
{
	char* str = input();
	print(str);
	print("\n");

	return 0;
}
