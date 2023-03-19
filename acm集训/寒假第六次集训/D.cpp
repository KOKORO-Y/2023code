#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
long long int arr1[1145140] = { 0 };
long long int arr2[1145140] = { 0 };
long long int arr3[1145140] = { 0 };
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int k = 0;
		cin >> k;
		for (int i = 0; i < k; i++)
		{
			cin >> arr1[i];
		}
		arr2[0] = arr1[0] | 0;
		arr3[0] = 0;
		for (int i = 1; i < k; i++)
		{
			arr2[i] = arr1[i] | arr2[i - 1];
			arr3[i] = arr2[i] ^ arr1[i];
		}
		for (int i = 0; i < k; i++)
		{
			cout << arr3[i] << ' ';
		}
		cout << endl;
	}

	return 0;
}

