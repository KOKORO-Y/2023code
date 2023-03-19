//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 50010;
//int p[N], d[N];  //d[i]一开始存的是i到父节点的距离，最后存的是第i个点到根节点的距离
//
//int find(int x) {    //路径压缩 + x到根节点的距离
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
//    int res = 0;    //假话的数量
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
//                {   //x和y属于一个集合中了,但是模3的结果不同，就是假话
//                    res++;
//                }
//                else if (px != py) 
//                {   //x和y不属于一个集合，就把x并到y的集合
//                    p[px] = py;
//                    d[px] = d[y] - d[x];
//                }
//            }
//            else 
//            {   //x吃y,x模3比y模3大1
//                if (px == py && (d[x] - d[y] - 1) % 3)   res++; //在一个集合中，但不满足x吃y关系
//                else if (px != py) 
//                {   //不在一个集合中
//                    p[px] = py;
//                    d[px] = d[y] - d[x] + 1;
//                }
//            }
//        }
//    }
//    cout << res;
//    return 0;
//}