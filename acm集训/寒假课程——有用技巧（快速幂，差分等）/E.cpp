#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
typedef long long ll;
const int N = 1e6 + 10, INF = 0x3f3f3f3f;
ll n, m, k, a[N], l[N], r[N], d[N], res = 0;
ll b[N], c[N];

int main() 
{

    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    int x = 0, y = 0;
    while (k--) 
    {
        cin >> x >> y;
        b[x]++, b[y + 1]--;
    }
    for (int i = 1; i <= m; i++)
    {
        b[i] += b[i - 1];
    }
    for (int i = 1; i <= m; i++) 
    {
        c[l[i]] += d[i] * b[i];
        c[r[i] + 1] -= d[i] * b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        c[i] += c[i - 1], a[i] += c[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " \n"[i == n];
    }
    return 0;
}