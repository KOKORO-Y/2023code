#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>

typedef struct Doublelist  //˫������
{
	int element;
	Doublelist* next;
	Doublelist* front;
}Dblist;

Doublelist* InitList(Dblist* head)  //ͷ����ʼ��
{
	head = (Dblist*)malloc(sizeof(Dblist));
	if (head == NULL)
	{
		printf("malloc error\n");
	}
	else
	{
		head->element = -10086;
		head->next = head;
		head->front = head;
		return head;
	}
}

void head_insert(Dblist* head, int key)  //ͷ�庯��
{
	Dblist* new_node = (Dblist*)malloc(sizeof(Dblist));
	new_node->next = head->next;
	new_node->front = head;
	new_node->element = key;
	head->next->front = new_node;
	head->next = new_node;
	
}

Doublelist* find(Dblist* head, int key)  //���Һ��� ���ش����ҽ���ǰһ��ָ��
{
	Dblist* temp = head->next;
	Dblist* temp2 = head;
	while (temp != head)
	{
		if (temp->element == key)
		{
			return temp2;
		}
		temp = temp->next;
		temp2 = temp2->next;
	}
	return NULL;
}

void end_insert(Dblist* head, int key)  //β��庯��
{
	Dblist* new_node = (Dblist*)malloc(sizeof(Dblist));
	Dblist* temp = head;
	while (temp->next != head)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	new_node->front = temp;
	new_node->element = key;
	temp->next = new_node;
}

void element_front_insert(Dblist* head, int key1, int key2)  //��ָ��Ԫ��key1ǰ����key2
{
	Dblist* temp = find(head, key1);
	if (temp == NULL)
	{
		printf("�Ҳ�����ӦԪ��%d\n", key1);
	}
	else
	{
		Dblist* new_node = (Dblist*)malloc(sizeof(Dblist));
		new_node->next = temp->next;
		new_node->front = temp;
		new_node->element = key2;
		temp->next->front = new_node;
		temp->next = new_node;
	}
}

void delete_node(Dblist* head, int key)  //ɾ������
{
	//Dblist* temp = head;
	Dblist* dead_front = find(head, key);
	if (dead_front == NULL)
	{
		printf("�Ҳ�����ɾ��Ԫ��%d\n", key);
	}
	else
	{
		Dblist* dead = dead_front->next;  //�洢��ɾ�����
		dead_front->next = dead_front->next->next;
		dead_front->next->front = dead->front;
		free(dead);
	}

}

void print(Dblist* head)  //��ӡ����
{
	Dblist* temp = head->next;
	while (temp != head)
	{
		printf("%d ", temp->element);
		temp = temp->next;
	}
	/*while (1)
	{
		printf("%d ", temp->element);
		temp = temp->next;
		system("pause");
	}*/
	printf("\n");
}

int main()
{
	Dblist* head = (Dblist*)malloc(sizeof(Dblist));
	head = InitList(head);
	head_insert(head, 1919810);
	head_insert(head, 114514);
	print(head);
	end_insert(head, 6);
	end_insert(head, 9);
	print(head);
	element_front_insert(head, 9, 114);
	print(head);
	delete_node(head, 666);
	delete_node(head, 114);
	print(head);

	return 0;
}