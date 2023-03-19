#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

#include <iostream>

using namespace std;

int main()
{
	/*cout << "Hello World!" << endl;
	cout << "你好，中国!" << endl;
	bool b1 = true;
	bool b2 = 0;

	cout << b1 << endl;
	cout << b2 << endl;*/


	//forreach循环
	int arr[5] = { 1,2,3,4,5 };
	for (auto i: arr)
	{
		cout << i << ' ';
	}


	return 0;
}