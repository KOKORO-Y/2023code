#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char a[114514] = { 0 };
	char b[114514] = { 0 };
	int aa = 0, bb = 0;
	cin >> a >> aa >> b >> bb;
	int lena = strlen(a);
	int lenb = strlen(b);
	long long int a1 = 0, ca = 1, b1 = 0, cb = 1;
	for (int i = 0; i < lena; i++)
	{
		if ((a[i] - '0') == aa)
		{
			a1 += aa * ca;
			ca *= 10;
		}
	}
	for (int i = 0; i < lenb; i++)
	{
		if ((b[i] - '0') == bb)
		{
			b1 += bb * cb;
			cb *= 10;
		}
	}
	cout << (a1 + b1) << endl;

	return 0;
}

