#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
void tnnd()
{
	int arr[200001] = { 0 };
	int n = 0;
	int k = 0;
	int a = -1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		arr[k]++;
		if (arr[k] >= 3)
		{
			a = k;
		}
	}
	cout << a << endl;
}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		tnnd();
	}
	return 0;
}

