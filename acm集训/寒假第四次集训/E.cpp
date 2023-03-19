#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0, a[4] = { 0 }, b[4] = { 0 };
    scanf("%d", &n);
    for (int i = 1; i <= 3; ++i)
        cin >> a[i];
    for (int i = 1; i <= 3; ++i)
        cin >> b[i];
    int minn = max({ 0, a[1] - b[1] - b[3], a[2] - b[2] - b[1], a[3] - b[3] - b[2] });
    int maxx = min(a[1], b[2]) + min(a[2], b[3]) + min(a[3], b[1]);
    cout << minn << ' ' << maxx;
  
	return 0;
}

