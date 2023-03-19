#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d %d", n / i, (n - (n / i)));
			break;
		}
	}
	

	return 0;
}

