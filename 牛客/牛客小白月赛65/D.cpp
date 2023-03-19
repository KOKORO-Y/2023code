#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		long long int a = 0, b = 0;
		cin >> a >> b;
		int r = (min(a, b)) % 3;
		if (r)
		{
			if (a == b && r == 1)
			{
				puts("niumei");
			}
			else
			{
				puts("niuniu");
			}
		}
		else
		{
			puts("niumei");
		}
	}
	return 0;
}

