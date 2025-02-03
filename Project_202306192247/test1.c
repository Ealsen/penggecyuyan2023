#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
///*
//typedef 类型重新命名
//*/
//typedef unsigned int uint;
//
///*
//结构体类型变量
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

// viod 不需要任何返回

// static 可以改变局部变量的存储位置让其变
// 为全局变量(生命周期延长)
// extern 声明外部符号


//extern int g_val; //链接外部属性
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

// static 修饰函数

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

// register - 寄存器
/*
寄存器：寄存器(集成到cpu上面)、高速缓存(cache)、
内存、硬盘
*/

//int main()
//{
//	register int num = 3;//建议:3存放到寄存中
//
//	return 0;
//}


// define 定义标识符常量
//#define NUM 100

//#define 定义宏
//宏是有参数的，参数是无类型
//宏:完成替换
//#define ADD(x,y) ((x)+(y))
////       宏名     宏体
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

// 指针
//内存单元
//编号-》地址-》地址也被称为指针

//int main()
//{
//	int a = 10;
//	//&a; //取地址操作符
//	int* p = &a; //指针变量p，存放(指针)地址的变量
//	// int* 是个类型，*说明p是指针变量
//	//前面的int说明指向的对象是int类型
//	printf("%p\n", p); //打印a的地址
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
//	//*p 解引用操作符，意思就是通过p中存
//	//放的地址，找到p所指向的对象，*p就
//	//是p指向的对象
//	return 0;
//}

//int main()
//{
//	// x64
//	//不管是什么类型的指针，都是在创建
//	// 指针变量
//	// 指针变量是用来存
//	// 放地址的
//	//指针变量的大小取决于一个
//	// 地址存放的时候需要大多空间
//	//32位机器上的地址:32bit位-4byte,
//	//所以指针变量的大小是4个字节
//	//64位机器上的地址:64bit位- 8byte
//	//所以指针变量的大小是8个字节
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}




////结构体
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
//	//-> 操作符  用法：结构体指针变量->成员名
//}
//
//int main()
//{
//	struct Stu zhangsan= {"zhangsan",20,"nan","1951650361"};
//	//printf("%s %d %s %s\n", zhangsan.name,zhangsan.age,zhangsan.sex,zhangsan.tele);
//	// . 操作符   用法：结构体对象.成员名
//	print(&zhangsan);
//	return 0;
//}

