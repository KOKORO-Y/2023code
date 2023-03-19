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
//void left_push(int key)  //左插 动右指针
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
//	//左删 如果右指针不在中间则为左插左删形成栈 如果右指针在中间则为右插左删形成队列
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
//void right_push(int key)  //右插 动左指针
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
//	//右删 如果左指针不在中间则为右插右删形成栈 如果左指针在中间则为左插右删形成队列
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
//void print_deque()  //打印函数
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