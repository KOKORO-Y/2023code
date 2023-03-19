#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		long long int step = 0;
		long long int j = 1, k = 1;
		for (long long int i = 3; i <= n; i += 2)
		{
			step += (i * i - j * j) * k;
			j += 2;
			k++;
		}
		cout << step << endl;
	}

	return 0;
}

