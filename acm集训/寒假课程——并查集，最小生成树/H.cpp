//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 50010;
//int p[N], d[N];  //d[i]һ��ʼ�����i�����ڵ�ľ��룬������ǵ�i���㵽���ڵ�ľ���
//
//int find(int x) {    //·��ѹ�� + x�����ڵ�ľ���
//    if (p[x] != x) {
//        int t = find(p[x]);
//        d[x] += d[p[x]];
//        p[x] = t;
//    }
//    return p[x];
//}
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)   p[i] = i;
//    int res = 0;    //�ٻ�������
//    while (m--) 
//    {
//        int c; 
//        int x, y;
//        cin >> c >> x >> y;
//        if (x > n || y > n)  res++;
//        else 
//        {
//            int px = find(x), py = find(y); 
//            if (c == 1) 
//            { 
//                if (px == py && (d[x] - d[y]) % 3) 
//                {   //x��y����һ����������,����ģ3�Ľ����ͬ�����Ǽٻ�
//                    res++;
//                }
//                else if (px != py) 
//                {   //x��y������һ�����ϣ��Ͱ�x����y�ļ���
//                    p[px] = py;
//                    d[px] = d[y] - d[x];
//                }
//            }
//            else 
//            {   //x��y,xģ3��yģ3��1
//                if (px == py && (d[x] - d[y] - 1) % 3)   res++; //��һ�������У���������x��y��ϵ
//                else if (px != py) 
//                {   //����һ��������
//                    p[px] = py;
//                    d[px] = d[y] - d[x] + 1;
//                }
//            }
//        }
//    }
//    cout << res;
//    return 0;
//}