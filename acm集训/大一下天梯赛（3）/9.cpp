//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int cnt[114514], independence[114514];
//bool repeat[114514];
//
//bool is_prime(int x)
//{
//    if (x < 2) return false;
//    for (int i = 2; i * i <= x; i++)
//    {
//        if (x % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//int push(int x)
//{
//    int res = 0;
//    while (x)
//    {
//        int y = x % 10;
//        res += (y * y);
//        x /= 10;
//    }
//    return res;
//}
//
//int main()
//{
//    int l = 0, r = 0;
//    cin >> l >> r;
//
//    for (int i = l; i <= r; i++)
//    {
//        memset(repeat, 0, sizeof(repeat));
//        int count = 0;
//        int a = i;
//        cnt[a]++;
//        while (!repeat[a])
//        {
//            repeat[a] = true;
//            a = push(a);
//            count++;
//            cnt[a]++;
//            if (a == 1)
//            {
//                repeat[1] = true;
//                break;
//            }
//        }
//        if (repeat[1] == true)
//        {
//            if (is_prime(i))
//            {
//                independence[i] = count * 2;
//            }
//            else
//            {
//                independence[i] = count;
//            }
//        }
//    }
//    int flag = 0;
//    for (int i = l; i <= r; i++)
//    {
//        if (cnt[i] == 1 && independence[i] != 0)
//        {
//            flag = 1;
//            cout << i << ' ' << independence[i] << endl;
//        }
//    }
//    if (flag == 0)
//    {
//        cout << "SAD\n";
//    }
//    return 0;
//}
//
