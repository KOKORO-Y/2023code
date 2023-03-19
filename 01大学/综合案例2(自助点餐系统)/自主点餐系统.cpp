#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
string arrmenu[19] = { "火锅","回锅肉","宫保鸡丁","夫妻肺片","毛血旺" ,"麻婆豆腐","东坡肘子","水煮牛肉","龙抄手","钟水饺","串串香"
															,"肥肠粉","担担面","可乐","雪碧","脉动","果缤纷","果粒橙","营养快线" };
char c;
int cnt[19] = { 0 }, input, price[19] = { 30,20,15,45,21,34,22,23,31,16,18,19,11,9,13,10,9,8,6 };
int total = 0, fp = 0;

void print_menu()
{
	cout << "-------------------自助点餐系统-------------------" << endl;
	cout << "菜单：" << endl;
	cout << "1火锅 2回锅肉 3宫保鸡丁 4夫妻肺片 5毛血旺 6麻婆豆腐 7东坡肘子 8水煮牛肉" << endl;
	cout << "9龙抄手 10钟水饺 11串串香 12肥肠粉 13担担面" << endl;
	cout << "14可乐 15雪碧 16脉动 17果缤纷 18果粒橙 19营养快线" << endl;
	cout << "套餐A(优惠10)：火锅 回锅肉 东坡肘子，任选其一" << endl;
	cout << "龙抄手 钟水饺 串串香，任选其一" << endl;
	cout << "可乐 雪碧，任选其一" << endl;
	cout << "套餐B（优惠12）：火锅 回锅肉 东坡肘子 水煮牛肉，任选其一" << endl;
	cout << "肥肠粉 担担面，任选其一" << endl;
	cout << "脉动 果缤纷 果粒橙，任选其一" << endl;
	cout << "本店消费满100元，可加1元，换购一种饮料" << endl;
}

void calculate_bill()
{
	total = 0;
	for (int i = 0; i < 19; i++)
	{
		if (cnt[i] != 0) {
			cout << arrmenu[i] << price[i] << "元,数量：" << cnt[i] << " 小计:" << cnt[i] * price[i] << endl;
			total += cnt[i] * price[i];
		}
	}
	cout << "总计：" << total - fp << "元,优惠" << fp << "元" << endl;
}

void order_system()
{
	while (1)
	{
		cout << "A单点  B套餐  C结账" << endl;
		cin >> c;
		if (c == 'A')
		{
			cout << "输入编号点餐,输入0结束点餐" << endl;
			while (true)
			{
				cin >> input;
				if (input == 0) {
					break;
				}
				switch (input) {
				case 1:
					cnt[0]++;
					break;
				case 2:
					cnt[1]++;
					break;
				case 3:
					cnt[2]++;
					break;
				case 4:
					cnt[3]++;
					break;
				case 5:
					cnt[4]++;
					break;
				case 6:
					cnt[5]++;
					break;
				case 7:
					cnt[6]++;
					break;
				case 8:
					cnt[7]++;
					break;
				case 9:
					cnt[8]++;
					break;
				case 10:
					cnt[9]++;
					break;
				case 11:
					cnt[10]++;
					break;
				case 12:
					cnt[11]++;
					break;
				case 13:
					cnt[12]++;
					break;
				case 14:
					cnt[13]++;
					break;
				case 15:
					cnt[14]++;
					break;
				case 16:
					cnt[15]++;
					break;
				case 17:
					cnt[16]++;
					break;
				case 18:
					cnt[17]++;
					break;
				case 19:
					cnt[18]++;
					break;
				}
			}
			calculate_bill();
		}
		else if (c == 'B')
		{
			mark:
			cout << "套餐A  套餐B （输入字母确认）" << endl;
			cin >> c;
			if (c == 'A') 
			{
				fp += 10;
				cout << "1火锅 2回锅肉 7东坡肘子" << endl;
				cin >> input;
				switch (input) 
				{
				case 1:
					cnt[0]++;
					break;
				case 2:
					cnt[1]++;
					break;
				case 7:
					cnt[6]++;
					break;
				}
				cout << "9龙抄手 10钟水饺 11串串香" << endl;
				cin >> input;
				switch (input) 
				{
				case 9:
					cnt[8]++;
					break;
				case 10:
					cnt[9]++;
					break;
				case 11:
					cnt[10]++;
					break;
				}
				cout << "14可乐 15雪碧" << endl;
				cin >> input;
				switch (input) 
				{
				case 14:
					cnt[13]++;
					break;
				case 15:
					cnt[14]++;
					break;

				}
			}
			else if (c == 'B') 
			{
				fp += 12;
				cout << "1火锅 2回锅肉 7东坡肘子 8水煮牛肉" << endl;
				cin >> input;
				switch (input) {
				case 1:
					cnt[0]++;
					break;
				case 2:
					cnt[1]++;
					break;
				case 7:
					cnt[6]++;
					break;
				case 8:
					cnt[7]++;
					break;
				}
				cout << "12肥肠粉 13担担面" << endl;
				cin >> input;
				switch (input) {
				case 12:
					cnt[11]++;
					break;
				case 13:
					cnt[12]++;
					break;
				}
				cout << "16脉动 17果缤纷 18果粒橙" << endl;
				cin >> input;
				switch (input) {
				case 16:
					cnt[15]++;
					break;
				case 17:
					cnt[16]++;
					break;
				case 18:
					cnt[17]++;
					break;

				}
			}
			else
			{
				cout << "请输入正确的字母！！！" << endl;
				goto mark;
			}
			calculate_bill();

		}
		else if (c == 'C')
		{
			if (total >= 100) 
			{
				cout << "消费满100元，是否加1元换购(Y/N)" << endl;

				cin >> c;
				if (c == 'Y') 
				{
					cout << "14可乐 15雪碧 16脉动" << endl;
					cin >> input;
					total += 1;

					switch (input)
					{
					case 14:
						fp += price[13] - 1;
						break;
					case 15:
						fp += price[14] - 1;
						break;
					case 16:
						fp += price[15] - 1;
						break;
					}
				}

				cout << "您已支付" << total << "元，优惠" << fp << "元" << endl;
				cout << "-----------------欢迎下次光临----------------" << endl;
			}
			break;
		}
		else
		{
			cout << "请输入正确的大写字母!!" << endl;
		}
	}
}

int main()
{
	print_menu();
	order_system();
	
	return 0;
}

