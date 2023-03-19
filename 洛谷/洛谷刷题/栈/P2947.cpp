//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//using namespace std;
//int arr[100005], ans[100005];
//int main()
//{
//    int n = 0;
//    cin >> n;
//    stack<int> st;
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = n; i >= 1; i--)
//    {
//        while (!st.empty() && arr[st.top()] <= arr[i])
//        {
//            st.pop();
//        }
//        if (st.empty())
//        {
//            ans[i] = 0;
//        }
//        else
//        {
//            ans[i] = st.top();
//        }
//        st.push(i);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        printf("%d\n", ans[i]);
//    }
//
//    return 0;
//}
//
