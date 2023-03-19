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
// ��Ҫ˼·��(x + 1)^2 = x^2 + 2x + 1
// ͬ���ĵĵ��� (x + 10^i) = x^2 + 2*(10^i)*x + 10^(2i)
// ���ǿ���ѭ��ÿ������0.1��ֱ�����磬ȷ����һ��С��λ
// ÿ������0.01����ȷ���ڶ���С��λ
// ÿ������10^(-n)��ȷ����nλС��
// */
//
// /**
//  * @brief ��һ������������������
//  * @param x ������
//  * @return ��������������
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
// @brief ��x����������countλС��
// @param x ������
// @param count ����С��λ��
// @return ����һ��vector<int>������������һλΪ�������֣�������С������
// */
//vector<int> mySqrt(int x, int count) {
//    vector<int> v1(count + 1), v2((count + 1) * 2); // v1����x^1, v2����x^2������1λ��С��nλ
//
//    v1[0] = getSqrtInteger(x);   // ��ʼ��
//    v2[0] = v1[0] * v1[0];
//
//    for (int i = 1; i <= count; ++i) {
//        do {
//            vector<int> temp = v2; // ��ʱ�ȱ���v2�Ľ������ֹ���x����һ��10^(-i)����
//            v2[2 * i]++;   // x����10^(-i), x^2����10^(-2i)
//            int t = 0, s = 0, j;
//            for (j = 2 * i; j >= i; --j) {  // ��һ�����ø߾��ȼӷ����ۼ�x^ + 2x����
//                s = v2[j] + 2 * v1[j - i] + t;  // v1[j - i]������ǿ��i��λ����ͬ�ڳ��ԣ�10^-i)
//                v2[j] = s % 10;
//                t = s / 10;
//            }
//            while (t && j > 0) { // ��λ����
//                s = v2[j] + t;
//                v2[j] = s % 10;
//                t = s / 10;
//                --j;
//            }
//            v2[j] += t;
//            if (v2[0] >= x) {  // ������磬���˵�ԭ����v2
//                v2 = temp;
//                break;
//            }
//            else {  // ���� x��������10^(-i)��
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
//    //cin >> x >> count;   // ��x���ţ�����nλ��
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
