#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <numeric>

using namespace std;
long long int gcd(long long int a, long long int b)
{
	long long int z = a % b;
	while (z)
	{
		a = b;
		b = z;
		z = a % b;
	}
	return b;
}
long long int youbing(long long int bing, long long int renshu)
{
	return bing * renshu / (gcd(bing, renshu));
}
int main()
{
	int g = 0;
	long long int arr[114514] = { 0 };
	int j = 0;
	long long int bing = 1;
	int renshu = 0;
	cin >> g;
	while (g--)
	{
		cin >> j;
		renshu = j + renshu;
		bing=youbing(bing, renshu);
	}
	cout << bing;
	return 0;
}

