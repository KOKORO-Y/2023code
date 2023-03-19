//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//#include <istream>
//using namespace std;
//
//int main()
//{
//    string str, res = "";
//    getline(cin, str);
//    for (int i = 0; i < str.size(); i++) 
//    {
//        int total = 0;
//        if (str[i] != '6') 
//        {
//            res += str[i];
//        }
//        else 
//        {
//            total = 1;
//            while (++i < str.size() && str[i] == '6')
//            {
//                total++;
//            }
//            if (total <= 3)
//            {
//                while (total--) res += "6";
//            }
//            else if (total > 3 && total <= 9)
//            {
//                res += "9";
//            }
//            else
//            {
//                res += "27";
//            }
//            i--;
//        }
//    }
//    cout << res << endl;
//	return 0;
//}
//
////char str[514][114];
////int main()
////{
////	int i = 0;
////	for (i = 0;; i++)
////	{
////		scanf("%s", str[i]);
////		char ch = getchar();
////		if (ch == '\n')
////		{
////			break;
////		}
////	}
////	for (int j = 0; j <= i; j++)
////	{
////		if (str[j][0] == '6')
////		{
////			int len = strlen(str[j]);
////			if (len > 3 && len <= 9)
////			{
////				str[j][0] = '9';
////				str[j][1] = '\0';
////			}
////			if (len > 9)
////			{
////				str[j][0] = '2';
////				str[j][1] = '7';
////				str[j][2] = '\0';
////			}
////		}
////	}
////	for (int j = 0; j <= i; j++)
////	{
////		if (j < i)
////		{
////			printf("%s ", str[j]);
////		}
////		else if (j == i)
////		{
////			printf("%s", str[j]);
////		}
////	}
////
////	return 0;
////}
//
