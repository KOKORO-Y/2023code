#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
#define N 200001
int n, k, ans = 1145141919, appear[N], step[N], arr[N], i, j, p;
int main()
{
    memset(step, 0, sizeof(step));
    memset(appear, 0, sizeof(appear));
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        appear[arr[i]]++;
    }
    sort(arr, arr + n);
    for (j = 0; j < n; j++)
    {
        int temp = arr[j];
        int countstep = 0;
        while (temp)
        {
            if (appear[temp] >= k)
            {
                ans = min(ans, step[temp]);
            }
            temp /= 2;
            countstep++;
            appear[temp]++;
            step[temp] += countstep;
        }
    }
    cout << ans << endl;
}

