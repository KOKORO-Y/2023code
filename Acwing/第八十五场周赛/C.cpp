#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map>

using namespace std;
int arr[114514] = { 0 };
int main()
{
	int n = 0, m = 0;
	int a = 0, b = 0;
	cin >> n >> m;
	while (m--)
	{
		cin >> a >> b;
		arr[a] = b;
	}
	int sum = 1;
	for (int j = 2; j <= n; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			if (arr[i] == j)
			{
				sum *= 2;
				break;
			}
		}
	}
	cout << sum << endl;
	return 0;
}

