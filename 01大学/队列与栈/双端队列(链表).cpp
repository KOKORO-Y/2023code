//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Deque
//{
//	int element;
//	Deque* pre;
//	Deque* next;
//}deque;
//
//deque* middle;
//deque* left;
//deque* right;
//
//void Initdeque()
//{
//	middle = (deque*)malloc(sizeof(Deque));
//	left = middle;
//	right = middle;
//	middle->next = NULL;
//	middle->pre = NULL;
//}
//
//void left_push(int key)  //��� ����ָ��
//{
//	deque* new_node = (deque*)malloc(sizeof(Deque));
//	new_node->element = key;
//	new_node->next = right->next;
//	new_node->pre = right;
//	right->next = new_node;
//	right = right->next;
//}
//
//void left_pop()
//{
//	//��ɾ �����ָ�벻���м���Ϊ�����ɾ�γ�ջ �����ָ�����м���Ϊ�Ҳ���ɾ�γɶ���
//	if (right != middle)
//	{
//		deque* temp = right;
//		right = right->pre;
//		right->next = NULL;
//		free(temp);
//	}
//	else
//	{
//		deque* temp = right->pre;
//		right->pre = right->pre->pre;
//		right->pre->next = right;
//		free(temp);
//	}
//}
//
//void right_push(int key)  //�Ҳ� ����ָ��
//{
//	deque* new_node = (deque*)malloc(sizeof(Deque));
//	new_node->element = key;
//	new_node->next = left;
//	new_node->pre = left->pre;
//	left->pre = new_node;
//	left = left->pre;
//}
//
//void right_pop()
//{
//	//��ɾ �����ָ�벻���м���Ϊ�Ҳ���ɾ�γ�ջ �����ָ�����м���Ϊ�����ɾ�γɶ���
//	if (left != middle)
//	{
//		deque* temp = left;
//		left = left->next;
//		left->pre = NULL;
//		free(temp);
//	}
//	else
//	{
//		deque* temp = left->next;
//		left->next = left->next->next;
//		left->next->pre = left;
//		free(temp);
//	}
//}
//
//void print_deque()  //��ӡ����
//{
//	if (left == middle)
//	{
//		deque* temp = left->next;
//		while (temp != NULL)
//		{
//			printf("%d ", temp->element);
//			temp = temp->next;
//		}
//		printf("\n");
//	}
//	else
//	{
//		deque* temp = right->pre;
//		while (temp != NULL)
//		{
//			printf("%d ", temp->element);
//			temp = temp->pre;
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	Initdeque();
//	right_push(1);
//	right_push(2);
//	right_push(3);
//	right_push(4);
//	right_push(5);
//	print_deque();
//	left_pop();
//	print_deque();
//
//	return 0;
//}