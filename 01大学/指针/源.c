#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	char ch1[999] = "hello";
	char ch2[6] = "sfsdf";
	char ch3[6] = "66666";
	char ch4[5] = "9999";
	char* a1[6] = { ch1,ch2,ch3,ch4 };
	char** key;
	key = a1;
	printf("%s\n", key[1]);
	return 0;
}
