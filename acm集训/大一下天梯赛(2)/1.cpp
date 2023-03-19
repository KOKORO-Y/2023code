//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#define ll long long int
//using namespace std;
//
//int main()
//{
//    int number[100][10][10];
//    int n, maxt = -1;
//    int nums[100];
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> nums[i];
//        maxt = max(nums[i], maxt);
//    }
//    int num = 0, lasti = -1;
//    for (int j = 0; j < maxt; j++)
//        for (int k = 0; k < 10; k++)
//            for (int i = 0; i < n; i++)
//                if (j < nums[i])
//                {
//                    if (lasti == i)
//                        num += 2;
//                    else
//                        num++;
//                    number[i][j][k] = num;
//                    lasti = i;
//                }
//    for (int i = 0; i < n; i++)
//    {
//        cout << "#" << i + 1 << endl;
//        for (int j = 0; j < nums[i]; j++)
//        {
//            for (int k = 0; k < 10; k++)
//            {
//                cout << number[i][j][k];
//                if (k != 9)
//                    cout << " ";
//            }
//            cout << endl;
//        }
//    }
//    return 0;
//}