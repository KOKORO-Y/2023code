#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

double esp = 1e-5;
double ball[100005];
int main()
{
	double g = 10;
	double H = 0, s1 = 0, V = 0, L = 0, K = 0;
	int n = 0;
	cin >> H >> s1 >> V >> L >> K >> n;
	for (int i = 0; i < n; i++)
	{
		ball[i] = H;
	}
	double t1 = 0, t2 = 0;
	t1 = sqrt((H - K) / 5.0);
	t2 = sqrt((H) / 5.0);
	int x1 = (s1 - t2 * V), x2 = (s1 - t1 * V + L);
	x1 = max(0, x1);
	x2 = min(n, x2);
	int ans = x2 - x1;
	cout << ans;

	return 0;
}

