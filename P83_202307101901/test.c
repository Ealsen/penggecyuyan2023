#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




/* 结构体 */

//例如描述一个学生：
typedef struct Stu
{
	char name[20];//名字
	int age;//年龄
	char sex[5];//性别
	char id[20];//学号
}Stu;//分号不能丢





////人
//struct peo
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}p1,p2; //p1,p2是两个全局的结构体变量
//
//
//




struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int hight;
};



struct St
{
	struct Peo p;
	int num;
	float f;
};

void print1(struct Peo sp)
{
	printf("%s %s %s %d\n", sp.name, sp.tele, sp.sex, sp.hight);
}

void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name,sp->tele ,sp->sex, sp->hight);
}


int main1()
{
	/*BIT - 7 - 结构体
		结构体类型的声明
		结构体初始化
		结构体成员访问
		结构体传参*/

	//结构是一些值的集合，这些值称为成员变量。
	//结构的每个成员可以是不同类型的变量。

	// 结构体变量创建
	struct Peo p1 = { "张三","19502707900","男",180 };
	struct St s = { { "lisa","19502707800","女",166 },100,3.14f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.hight);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.hight, s.num, s.f);
	
	print1(p1);

	print2(&p1);
	
	return 0;
}






/* 结构体传参 */

struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print3(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print4(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main2()
{
	print3(s);  //传结构体
	print4(&s); //传地址
	return 0;
}

/*上面的 print3 和 print4 函数哪个好些？
答案是：首选print4函数。
原因：
函数传参的时候，参数是需要压栈的。
如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销
比较大，所以会导致性能的
下降。
结论：
结构体传参的时候，要传结构体的地址。*/