////#define _CRT_SECURE_NO_WARNINGS 1
////#include <iostream>
////#include <cmath>
////
////using namespace std;
////
////int main()
////{
////	long double x0 = 0, y0 = 0, x1 = 0, y1 = 0;
////	long double a = 0;
////	int t = 0;
////	cin >> t;
////	while (t--)
////	{
////		long double v1, v2;
////		cin >> x1 >> y1 >> a;
////		v1 = sqrt((2.000000000000000000 * a * (fabs(x1 - x0))));
////		v2 = sqrt((2.000000000000000000 * 10.0000000000000000000 * (fabs(y1 - y0))));
////		if (sqrt((v1 * v1) + (v2 * v2)) > 1000.0000000000000)
////		{
////			cout << -1 << endl;
////		}
////		else
////		{
////			printf("%.18lf %.18lf\n", v1, v2);
////		}
////	}
////
////	return 0;
////}
////
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
///*
// 主要思路：(x + 1)^2 = x^2 + 2x + 1
// 同样的的道理 (x + 10^i) = x^2 + 2*(10^i)*x + 10^(2i)
// 于是可以循环每次增加0.1，直到超界，确定第一个小数位
// 每次增加0.01，，确定第二个小数位
// 每次增加10^(-n)，确定第n位小数
// */
//
// /**
//  * @brief 求一个数开方的正数部分
//  * @param x 待计算
//  * @return 开方的正数部分
//  */
//int getSqrtInteger(int x) {
//    for (int i = x / 2; i >= 1; --i) {
//        if (i * i <= x) {
//            return i;
//        }
//    }
//    return x;
//}
//
///**
// @brief 对x开方，保留count位小数
// @param x 待计算
// @param count 保留小数位数
// @return 返回一个vector<int>类型向量，第一位为整数部分，其他事小数部分
// */
//vector<int> mySqrt(int x, int count) {
//    vector<int> v1(count + 1), v2((count + 1) * 2); // v1保存x^1, v2保存x^2，整数1位，小数n位
//
//    v1[0] = getSqrtInteger(x);   // 初始化
//    v2[0] = v1[0] * v1[0];
//
//    for (int i = 1; i <= count; ++i) {
//        do {
//            vector<int> temp = v2; // 暂时先保存v2的结果，防止这次x增加一个10^(-i)超界
//            v2[2 * i]++;   // x增加10^(-i), x^2增加10^(-2i)
//            int t = 0, s = 0, j;
//            for (j = 2 * i; j >= i; --j) {  // 这一部分用高精度加法，累加x^ + 2x部分
//                s = v2[j] + 2 * v1[j - i] + t;  // v1[j - i]，就是强行i降位，等同于乘以（10^-i)
//                v2[j] = s % 10;
//                t = s / 10;
//            }
//            while (t && j > 0) { // 进位问题
//                s = v2[j] + t;
//                v2[j] = s % 10;
//                t = s / 10;
//                --j;
//            }
//            v2[j] += t;
//            if (v2[0] >= x) {  // 如果超界，回退到原来的v2
//                v2 = temp;
//                break;
//            }
//            else {  // 否则 x可以增加10^(-i)次
//                v1[i]++;
//            }
//        } while (1);
//    }
//    return v1;
//}
//
//int main() {
//
//    long double x0 = 0, y0 = 0, x1 = 0, y1 = 0;
//	long double a = 0;
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		long double v12, v22;
//		cin >> x1 >> y1 >> a;
//		v12 = (2.000000000000000000 * a * (fabs(x1 - x0)));
//		v22 = (2.000000000000000000 * 10.0000000000000000000 * (fabs(y1 - y0)));
//        if (sqrt((sqrt(v12) * sqrt(v12)) + (sqrt(v22) * sqrt(v22))) > 1000.0000000000000)
//        {
//            cout << -1 << endl;
//        }
//        else
//        {
//            int count = 18;
//            vector<int> v1 = mySqrt(v12, count);
//            for (int i = 0; i < v1.size(); ++i) {
//                cout << v1[i];
//                if (i == 0) {
//                    putchar('.');
//                }
//                else if (i == v1.size() - 1) {
//                    putchar(' ');
//                }
//            }
//            vector<int> v2 = mySqrt(v22, count);
//            for (int i = 0; i < v2.size(); ++i) {
//                cout << v2[i];
//                if (i == 0) {
//                    putchar('.');
//                }
//                else if (i == v2.size() - 1) {
//                    putchar(' ');
//                }
//            }
//            printf("\n");
//        }
//	}
//    //int x, count = 18;
//
//    //cin >> x >> count;   // 对x开放，保留n位数
//
//    //vector<int> v1 = mySqrt(x, count);
//    //for (int i = 0; i < v1.size(); ++i) {
//    //    cout << v1[i];
//    //    if (i == 0) {
//    //        putchar('.');
//    //    }
//    //    else if (i == v1.size() - 1) {
//    //        putchar('\n');
//    //    }
//    //}
//    return 0;
//}
//
