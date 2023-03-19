//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct zhiyinnitaimei
//{
//    double j;
//    double c;
//    double d;
//}kkk[1011];
//
//bool cmp(zhiyinnitaimei a, zhiyinnitaimei b)
//{
//    return a.d > b.d;
//}
//
//int main()
//{
//    int m, n;
//    while (cin >> m >> n && m != -1 && n != -1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%lf%lf", &kkk[i].j, &kkk[i].c);
//            kkk[i].d = kkk[i].j / kkk[i].c;
//        }
//        sort(kkk, kkk + n, cmp);
//        double ans = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (m > kkk[i].c)
//            {
//                ans += kkk[i].j;
//                m -= kkk[i].c;
//            }
//            else
//            {
//                ans += (kkk[i].d * m);
//                break;
//            }
//        }
//        printf("%.3lf\n", ans);
//    }
//    return 0;
//}
