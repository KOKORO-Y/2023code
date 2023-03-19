#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	long long int m = 0;
	cin >> m;
	long long int ans = 0;
	if (m >= 1297)
	{
		ans = m * 10 + 826;
	}
	else if (m < 649)
	{
		long long int t = m;
		if (m >= 198)
		{
			ans += (1980 + 128);
			t -= 198;
		}
		if (m >= 88)
		{
			ans += (880 + 58);
			t -= 88;
		}
		if (m >= 28)
		{
			ans += (280 + 28);
			t -= 28;

		}
		if (m >= 6)
		{
			ans += (60 + 18);
			t -= 6;
		}
		if (m >= 1)
		{
			ans += (10 + 8);
			t -= 1;
		}
		if (t)
		{
			ans += (t * 10);
		}
	}
	else if (m >=649 && m < 1296)
	{
		long long int t = m;
		if (m >= 328)
		{
			ans += (3280 + 198);
			t -= 328;
		}
		if (m >= 198)
		{
			ans += (1980 + 128);
			t -= 198;
		}
		if (m >= 88)
		{
			ans += (880 + 58);
			t -= 88;
		}
		if (m >= 28)
		{
			ans += (280 + 28);
			t -= 28;

		}
		if (m >= 6)
		{
			ans += (60 + 18);
			t -= 6;
		}
		if (m >= 1)
		{
			ans += (10 + 8);
			t -= 1;
		}
		if (t)
		{
			ans += (t * 10);
		}
	}
	else if (m == 1296)
	{
		long long int t = m;
		if (m >= 648)
		{
			ans += (6480 + 388);
			t -= 648;
		}
		if (m >= 328)
		{
			ans += (3280 + 198);
			t -= 328;
		}
		if (m >= 198)
		{
			ans += (1980 + 128);
			t -= 198;
		}
		if (m >= 88)
		{
			ans += (880 + 58);
			t -= 88;
		}
		if (m >= 28)
		{
			ans += (280 + 28);
			t -= 28;

		}
		if (m >= 6)
		{
			ans += (60 + 18);
			t -= 6;
		}
		if (m >= 1)
		{
			ans += (10 + 8);
			t -= 1;
		}
		if (t)
		{
			ans += (t * 10);
		}
	}
	cout << ans;
	return 0;
}