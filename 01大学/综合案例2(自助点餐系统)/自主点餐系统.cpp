#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
string arrmenu[19] = { "���","�ع���","��������","���޷�Ƭ","ëѪ��" ,"���Ŷ���","��������","ˮ��ţ��","������","��ˮ��","������"
															,"�ʳ���","������","����","ѩ��","����","���ͷ�","������","Ӫ������" };
char c;
int cnt[19] = { 0 }, input, price[19] = { 30,20,15,45,21,34,22,23,31,16,18,19,11,9,13,10,9,8,6 };
int total = 0, fp = 0;

void print_menu()
{
	cout << "-------------------�������ϵͳ-------------------" << endl;
	cout << "�˵���" << endl;
	cout << "1��� 2�ع��� 3�������� 4���޷�Ƭ 5ëѪ�� 6���Ŷ��� 7�������� 8ˮ��ţ��" << endl;
	cout << "9������ 10��ˮ�� 11������ 12�ʳ��� 13������" << endl;
	cout << "14���� 15ѩ�� 16���� 17���ͷ� 18������ 19Ӫ������" << endl;
	cout << "�ײ�A(�Ż�10)����� �ع��� �������ӣ���ѡ��һ" << endl;
	cout << "������ ��ˮ�� �����㣬��ѡ��һ" << endl;
	cout << "���� ѩ�̣���ѡ��һ" << endl;
	cout << "�ײ�B���Ż�12������� �ع��� �������� ˮ��ţ�⣬��ѡ��һ" << endl;
	cout << "�ʳ��� �����棬��ѡ��һ" << endl;
	cout << "���� ���ͷ� �����ȣ���ѡ��һ" << endl;
	cout << "����������100Ԫ���ɼ�1Ԫ������һ������" << endl;
}

void calculate_bill()
{
	total = 0;
	for (int i = 0; i < 19; i++)
	{
		if (cnt[i] != 0) {
			cout << arrmenu[i] << price[i] << "Ԫ,������" << cnt[i] << " С��:" << cnt[i] * price[i] << endl;
			total += cnt[i] * price[i];
		}
	}
	cout << "�ܼƣ�" << total - fp << "Ԫ,�Ż�" << fp << "Ԫ" << endl;
}

void order_system()
{
	while (1)
	{
		cout << "A����  B�ײ�  C����" << endl;
		cin >> c;
		if (c == 'A')
		{
			cout << "�����ŵ��,����0�������" << endl;
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
			cout << "�ײ�A  �ײ�B ��������ĸȷ�ϣ�" << endl;
			cin >> c;
			if (c == 'A') 
			{
				fp += 10;
				cout << "1��� 2�ع��� 7��������" << endl;
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
				cout << "9������ 10��ˮ�� 11������" << endl;
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
				cout << "14���� 15ѩ��" << endl;
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
				cout << "1��� 2�ع��� 7�������� 8ˮ��ţ��" << endl;
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
				cout << "12�ʳ��� 13������" << endl;
				cin >> input;
				switch (input) {
				case 12:
					cnt[11]++;
					break;
				case 13:
					cnt[12]++;
					break;
				}
				cout << "16���� 17���ͷ� 18������" << endl;
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
				cout << "��������ȷ����ĸ������" << endl;
				goto mark;
			}
			calculate_bill();

		}
		else if (c == 'C')
		{
			if (total >= 100) 
			{
				cout << "������100Ԫ���Ƿ��1Ԫ����(Y/N)" << endl;

				cin >> c;
				if (c == 'Y') 
				{
					cout << "14���� 15ѩ�� 16����" << endl;
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

				cout << "����֧��" << total << "Ԫ���Ż�" << fp << "Ԫ" << endl;
				cout << "-----------------��ӭ�´ι���----------------" << endl;
			}
			break;
		}
		else
		{
			cout << "��������ȷ�Ĵ�д��ĸ!!" << endl;
		}
	}
}

int main()
{
	print_menu();
	order_system();
	
	return 0;
}

