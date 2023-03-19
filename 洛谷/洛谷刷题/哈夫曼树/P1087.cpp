#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
int sum0[1145], sum1[1145];
char str[11451] = { 0 };
int n = 0;
struct Node
{
	char data;
	Node* left, * right;
};
Node* root = (Node*)malloc(sizeof(Node));
void Init(int num)
{
	int flag1 = 0, flag2 = 0;
	for (int i = 1; i <= num; i++)
	{
		if (str[i] == '1')
		{
			flag1 = 1;
		}
		if (str[i] == '0')
		{
			flag2 = 1;
		}
		if (flag1 == 1 && flag2 == 1)
		{
			break;
		}
	}
	if (flag1 && flag2)
	{
		root->data = 'F';
	}
	else if (flag1 == 0 && flag2 == 1)
	{
		root->data = 'B';
	}
	else if (flag1 == 1 && flag2 == 0)
	{
		root->data = 'I';
	}
	root->left = NULL;
	root->right = NULL;
}

void createTree(Node* root, int left, int right)
{
	if (root == NULL)
	{
		return;
	}
	int mid = left + right >> 1;
	if (sum0[mid] - sum0[left - 1] != 0 && sum1[mid] - sum1[left - 1] != 0)
	{
		root->left = (Node*)malloc(sizeof(Node));
		root->left->data = 'F';
		root->left->left = NULL;
		root->left->right = NULL;
	}
	else if (sum0[mid] - sum0[left - 1] == 0 && sum1[mid] - sum1[left - 1] != 0)
	{
		root->left = (Node*)malloc(sizeof(Node));
		root->left->data = 'I';
		root->left->left = NULL;
		root->left->right = NULL;
	}
	else if (sum0[mid] - sum0[left - 1] != 0 && sum1[mid] - sum1[left - 1] == 0)
	{
		root->left = (Node*)malloc(sizeof(Node));
		root->left->data = 'B';
		root->left->left = NULL;
		root->left->right = NULL;
	}
	if (sum0[right] - sum0[mid] != 0 && sum1[right] - sum1[mid] != 0)
	{
		root->right = (Node*)malloc(sizeof(Node));
		root->right->data = 'F';
		root->right->left = NULL;
		root->right->right = NULL;
	}
	else if (sum0[right] - sum0[mid] != 0 && sum1[right] - sum1[mid] == 0)
	{
		root->right = (Node*)malloc(sizeof(Node));
		root->right->data = 'B';
		root->right->left = NULL;
		root->right->right = NULL;
	}
	else if (sum0[right] - sum0[mid] == 0 && sum1[right] - sum1[mid] != 0)
	{
		root->right = (Node*)malloc(sizeof(Node));
		root->right->data = 'I';
		root->right->left = NULL;
		root->right->right = NULL;
	}
	if (mid == right || left == mid)
	{
		return;
	}
	createTree(root->left, left, mid);
	createTree(root->right, mid + 1, right);

}

void printf_tree(Node* root)
{
	if (root->left != NULL)
	{
		printf_tree(root->left);
	}
	if (root->right != NULL)
	{
		printf_tree(root->right);
	}
	printf("%c", root->data);
}
int main()
{
	cin >> n;
	scanf("%s", str + 1);
	int num = pow(2, n);
	int left = 1, right = num;
	Init(num);
	for (int i = 1; i <= num; i++)
	{
		if (str[i] == '0')
		{
			sum0[i] = sum0[i - 1] + 1;
			sum1[i] = sum1[i - 1];
		}
		else
		{
			sum1[i] = sum1[i - 1] + 1;
			sum0[i] = sum0[i - 1];
		}
	}
	createTree(root, left, right);
	printf_tree(root);
	return 0;
}