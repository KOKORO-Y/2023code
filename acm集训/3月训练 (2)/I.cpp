#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int n, u, r, d, l;
bool judge(int x, int y, int z, int w)
{
	if (x + y + n - 2 < u || x + y > u) return 0;
	if (y + z + n - 2 < r || y + z > r) return 0;
	if (z + w + n - 2 < d || z + w > d) return 0;
	if (x + w + n - 2 < l || x + w > l) return 0;
	return 1;
}

bool solve()
{
	for (int x = 0; x <= 1; x++)
		for (int y = 0; y <= 1; y++)
			for (int z = 0; z <= 1; z++)
				for (int w = 0; w <= 1; w++)
					if (judge(x, y, z, w)) return 1;
	return 0;
}

int main()
{
	int T; 
	cin >> T;
	while (T--)
	{
		cin >> n >> u >> r >> d >> l;
		if (solve())
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}