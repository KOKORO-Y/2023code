//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 5005;
//char a[N], b[N];
//int dp[N][N];
//
//int main()
//{
//    int lena, lenb, i, j;
//    cin >> lena >> lenb;
//    scanf("%s%s", a, b);
//    memset(dp, 0, sizeof(dp));
//    //lena = strlen(a);
//    //lenb = strlen(b);
//    for (i = 1; i <= lena; i++)
//    {
//        for (j = 1; j <= lenb; j++)
//        {
//            if (a[i - 1] == b[j - 1])
//            {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//            }
//            else
//            {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//    //printf("%d\n", dp[lena][lenb]);
//    int tem = dp[lena][lenb];
//    if (tem == 0)
//    {
//        cout << 0;
//    }
//    else if (tem != 0 && tem % 2 == 0)
//    {
//        cout << 2 * tem;
//    }
//    else if (tem != 0 && tem % 2 == 1)
//    {
//        cout << (2 * tem) - 1;
//    }
//
//    return 0;
//}
//
