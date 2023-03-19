#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    int x5, y5, x6, y6;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    cin >> x5 >> y5 >> x6 >> y6;

    int flag = 1;
    if (x3 <= x1 && y3 <= y1 && x4 >= x2 && y4 >= y2)
    {
        flag = 0;
    }
    if (x5 <= x1 && y5 <= y1 && x6 >= x2 && y6 >= y2)
    {
        flag = 0;
    }

    if (y4 <= y6)
    {
        if (y6 >= y2 && y5 <= y2 && y4 >= y5 && y3 <= y1)
        {
            if (x3 <= x1 && x4 >= x2 && x5 <= x1 && x6 >= x2)
            {
                flag = 0;
            }
        }
    }
    if (y4 > y6)
    {
        if (y4 >= y2 && y3 <= y2 && y6 >= y3 && y5 <= y1)
        {
            if (x3 <= x1 && x4 >= x2 && x5 <= x1 && x6 >= x2)
            {
                flag = 0;
            }
        }
    }

    if (x4 >= x6)
    {
        if (x4 >= x2 && x3 <= x2 && x6 >= x3 && x5 <= x1)
        {
            if (y4 >= y2 && y3 <= y1 && y6 >= y2 && y5 <= y1)
            {
                flag = 0;
            }
        }
    }
    if (x4 < x6)
    {
        if (x6 >= x2 && x5 <= x2 && x4 >= x5 && x3 <= x1)
        {
            if (y4 >= y2 && y3 <= y1 && y6 >= y2 && y5 <= y1)
            {
                flag = 0;
            }
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
	return 0;
}

