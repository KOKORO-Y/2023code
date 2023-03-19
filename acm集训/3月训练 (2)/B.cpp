//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
//const int N = 410;
//
//char s[N][N];
//int n;
//
//void print()
//{
//    for (int i = 1; i <= n; i++) 
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            cout << s[i][j];
//        }
//        cout << endl;
//    }
//}
//
//void solve()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> s[i] + 1;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            if (a == 0 && s[i][j] == '*')
//            {
//                a = i;
//                b = j;
//            }
//            else if (c == 0 && s[i][j] == '*')
//            {
//                c = i;
//                d = j;
//            }
//        }
//    }
//    if (a == c) 
//    {
//        if (a > 1) 
//        {
//            s[a - 1][b] = '*';
//            s[c - 1][d] = '*';
//        }
//        else 
//        {
//            s[a + 1][b] = '*';
//            s[c + 1][d] = '*';
//        }
//        print();
//        return;
//    }
//    if (b == d) 
//    {
//        if (b > 1) 
//        {
//            s[a][b - 1] = '*';
//            s[c][d - 1] = '*';
//        }
//        else 
//        {
//            s[a][b + 1] = '*';
//            s[c][d + 1] = '*';
//        }
//        print();
//        return;
//    }
//    s[a][d] = '*';
//    s[c][b] = '*';
//    print();
//    return;
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        solve();
//    }
//    return 0;
//}