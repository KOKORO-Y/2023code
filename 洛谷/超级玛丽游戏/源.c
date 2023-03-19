#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() //镂空三角形
{
    int n;
    char ch;
    while (scanf("%c", &ch) != EOF) {
        if (ch == '@')
        {
            break;
        }
        scanf("%d", &n);
        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= n - i; j++) {
                printf(" ");
            }
            for (int j = n - i + 1; j <= n + i - 1; j++) {
                if (j == n - i + 1 || j == n + i - 1) {
                    printf("%c", ch);
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
      
        for (int m = 1; m <= 2 * n - 1; m++) {
            printf("%c", ch);
        }
        printf("\n");
        printf("\n");
        getchar();

    }return 0;
}

//int main()//明明的随机数
//{
//    int n, i;
//    int t, a[1001] = { 0 };
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &t);
//        a[t] = 1;
//     
//    }
//    for (int i = 1; i <= 1001; i++)
//    {
//        if (a[i] == 1)
//        {
//            sum++;
//        }
//
//    }
//    printf("%d\n", sum);
//    for (i = 1; i < 1000; i++)
//    {
//        if (a[i] == 1)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//int main()//校门外的树
//{
//	int l = 0, road = 0;
//	int shu[10001], a = 0, b = 0;
//	int i = 0, count = 0, j = 0;
//	scanf("%d%d", &l, &road);
//	for (i = 0; i <= l; i++)
//	{
//		shu[i] = 0;
//	}
//	for (j = 0; j < road; j++)
//	{
//		scanf("%d%d", &a, &b);
//		for(int j = a; j <= b; j++)
//		{
//			shu[j] = 1;
//		}
//	}
//	for (i = 0; i <= l; i++)
//	{
//		if (shu[i] == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	
//	return 0;
//}

//int main()//摘苹果
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
//	scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
//	int reach = 0, height = 30;
//	scanf("%d", &reach);
//	int count = 0;
//	if (a <= reach || a <= reach + height)
//	{
//		count++;
//	}
//	if (b <= reach || b <= reach + height)
//	{
//		count++;
//	}
//	if (c <= reach || c <= reach + height)
//	{
//		count++;
//	}
//	if (d <= reach || d <= reach + height)
//	{
//		count++;
//	}
//	if (e <= reach || e <= reach + height)
//	{
//		count++;
//	}
//	if (f <= reach || f <= reach + height)
//	{
//		count++;
//	}
//	if (g <= reach || g <= reach + height)
//	{
//		count++;
//	}
//	if (h <= reach || h <= reach + height)
//	{
//		count++;
//	}
//	if (i <= reach || i <= reach + height)
//	{
//		count++;
//	}
//	if (j <= reach || j <= reach + height)
//	{
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()//级数求和
//{
//	int k = 0;
//	scanf("%d", &k);
//	double  j = 1.0;
//	int i = 0;
//	double sum = 0;
//	for (i = 1;; i++)
//	{
//		sum += (j / i);
//
//		if (sum > k)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()//a+b的问题
//{
//	int a, b;
//	scanf("%d%d", &a,&b);
//	printf("%d\n", a + b);
//	return 0;
//}

//int main()//超级玛丽游戏
//{
//	printf("                ********\n");
//	printf("               ************\n");
//	printf("               ####....#.\n");
//	printf("             #..###.....##....\n");
//	printf("             ###.......######              ###            ###\n");
//	printf("                ...........               #...#          #...#\n");
//	printf("               ##*#######                 #.#.#          #.#.#\n");
//	printf("            ####*******######             #.#.#          #.#.#\n");
//	printf("           ...#***.****.*###....          #...#          #...#\n");
//	printf("           ....**********##.....           ###            ###\n");
//	printf("           ....****    *****....\n");
//	printf("             ####        ####\n");
//	printf("           ######        ######\n");
//	printf("##############################################################\n");
//	printf("#...#......#.##...#......#.##...#......#.##------------------#\n");
//	printf("###########################################------------------#\n");
//	printf("#..#....#....##..#....#....##..#....#....#####################\n");
//	printf("##########################################    #----------#\n");
//	printf("#.....#......##.....#......##.....#......#    #----------#\n");
//	printf("##########################################    #----------#\n");
//	printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n");
//	printf("##########################################    ############\n");
//	return 0;
//}