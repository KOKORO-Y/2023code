#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include <algorithm>
#include <cstring>
#include <math.h>
using namespace std;
void fun1(int k);

void toXX00(int arr[],int j)
{
	fun1(arr[0]);
	printf("%d", arr[1]);
	printf("\n");
}
void fun1(int k)
{
	if (k > 26)
	{
		fun1((k - 1) / 26);
	}
	
	k = (k - 1) % 26;
	printf("%c", (k + 'A'));
}
void toX0X0(int arr[], char str2[], int j)
{
	printf("R%d", arr[0]);
	int len = strlen(str2);
	int sum = 0;
	int jin = 26;
	for (int i = 0; i < len; i++)
	{ 
		sum += (str2[i] - 'A' +1 ) * pow(26, i);
	}
	printf("C%d", sum);
	printf("\n");
}
int main()
{
	
	int t = 0;
	cin >> t;
	while (t--)
	{
		char str1[114] = { 0 };
		char str2[114] = { 0 };
		int arr1[114] = { 0 };
		cin >> str1;
		int len = strlen(str1);
		int j = 0, k = 0, mup = 1, count = 0;
		for (int i = len - 1; i >= 0; i--)
		{
			if (str1[i] >= '0' && str1[i] <= '9')
			{
				arr1[j] += (str1[i] - '0') * mup;
				mup *= 10;
			}
			else if (str1[i] >= 'A' && str1[i] <= 'Z')
			{
				str2[k] = str1[i];
				k++;
				j++;
				mup = 1;
			}
		}
		for (int i = 0; i < 114514; i++)
		{
			if (arr1[i] != 0)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (count == 2)
		{
			toXX00(arr1, j);
		}
		else
		{
			toX0X0(arr1, str2, j);
		}
	}
	return 0;
}