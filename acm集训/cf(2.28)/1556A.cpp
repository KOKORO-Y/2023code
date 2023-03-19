#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	long long int t = 0, n = 0, s = 0, ans = 0;
	cin >> t;
	while (t--)
	{
		cin >> n >> s;
		if (n == 1)
		{
			ans = s;
		}
		else if (s == 1 && n > 1)
		{
			ans = 0;
		}
		else
		{
			long long L = 0, R = s + 1;
			while (R - L > 1)
			{
				long long M = (L + R) / 2;
				long long m = (n / 2) + 1;
				if (m * M <= s)
				{
					L = M;
				}
				else
				{
					R = M;
				}
			}
			ans = L;
		}
		cout << ans << endl;
	}

	return 0;
}

