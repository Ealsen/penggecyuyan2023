#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
///*
//typedef ������������
//*/
//typedef unsigned int uint;
//
///*
//�ṹ�����ͱ���
//*/
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	// uibt => unsigned int
//	struct Node n;
//	Node n2;
//	/*
//	typedef struct Node
//	{
//		int data;
//		struct Node* next;
//	}Node;
//		=>
//	Node
//	*/
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//}

// viod ����Ҫ�κη���

// static ���Ըı�ֲ������Ĵ洢λ�������
// Ϊȫ�ֱ���(���������ӳ�)
// extern �����ⲿ����


//extern int g_val; //�����ⲿ����
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

// static ���κ���

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//};

// register - �Ĵ���
/*
�Ĵ������Ĵ���(���ɵ�cpu����)�����ٻ���(cache)��
�ڴ桢Ӳ��
*/

//int main()
//{
//	register int num = 3;//����:3��ŵ��Ĵ���
//
//	return 0;
//}


// define �����ʶ������
//#define NUM 100

//#define �����
//�����в����ģ�������������
//��:����滻
//#define ADD(x,y) ((x)+(y))
////       ����     ����
//
//int add(int x,int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	int d = add(a, b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

// ָ��
//�ڴ浥Ԫ
//���-����ַ-����ַҲ����Ϊָ��

//int main()
//{
//	int a = 10;
//	//&a; //ȡ��ַ������
//	int* p = &a; //ָ�����p�����(ָ��)��ַ�ı���
//	// int* �Ǹ����ͣ�*˵��p��ָ�����
//	//ǰ���int˵��ָ��Ķ�����int����
//	printf("%p\n", p); //��ӡa�ĵ�ַ
//	return 0;
//}


//int main()
//{
//	//char ch = 'w';
//	//int* pc = &ch;
//	//printf("%p\n", pc);
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n",a);
//	//*p �����ò���������˼����ͨ��p�д�
//	//�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p��
//	//��pָ��Ķ���
//	return 0;
//}

//int main()
//{
//	// x64
//	//������ʲô���͵�ָ�룬�����ڴ���
//	// ָ�����
//	// ָ�������������
//	// �ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ��
//	// ��ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λ�����ϵĵ�ַ:32bitλ-4byte,
//	//����ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ:64bitλ- 8byte
//	//����ָ������Ĵ�С��8���ֽ�
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}




////�ṹ��
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	//printf("%s %d %s %s\n",(*ps).name,
//	//	(*ps).age,(*ps).sex,(*ps).tele);
//	printf("%s %d %s %s\n", ps->name,
//		ps->age,ps->sex,ps->tele);
//	//-> ������  �÷����ṹ��ָ�����->��Ա��
//}
//
//int main()
//{
//	struct Stu zhangsan= {"zhangsan",20,"nan","1951650361"};
//	//printf("%s %d %s %s\n", zhangsan.name,zhangsan.age,zhangsan.sex,zhangsan.tele);
//	// . ������   �÷����ṹ�����.��Ա��
//	print(&zhangsan);
//	return 0;
//}

