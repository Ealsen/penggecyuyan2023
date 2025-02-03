#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* enum Sele
{
	YES,
	NO
}; */

// 定义俩数相加的函数add
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	/* //c语言注释风格
	int Sele = YES;
	if (Sele != YES)
	{
		printf("0\n");
	}
	else
	{
		printf("1\n");
	}
	printf("hello\n"); */

	/* 	//创建指针变量p并赋值NULL
		int* p = NULL;
		 */
		 // c++注释风格
		 // 注释可以梳理思路、解释复杂代码


		 // 选择语句和循环语句 if&switch
		 /* 最近开始摸索着学习c语言，在编译程序的时候会遇到下面的提示错误
		 C:\run.c(41) : error C2143: syntax error : missing ';' before 'type'
		 解决办法如下：将一个代码块中的声明放在该代码块的最前面。
		 也就是说，在该编译环境下的.c文件中一个代码块中函数的声明必须要放在最前面。 */
		 /* 	int input = 0; //函数的声明必须要放在最前面
			 printf("加入比特\n");
			 printf("好好学习(1/0)?\n");
			 scanf("%d", &input);
			 if (input == 1)
			 {
				 printf("好offer\n");
			 }
			 else
			 {
				 printf("买红薯\n");
			 } */

		// 循环语句
		//2w有效代码的积累
	/*int line = 0;
	printf("加入比特\n");
	while (line<20000)
	{
		printf("写代码:%d\n",line);
		line++;
	}
	if (line >= 20000)
	{
		printf("好offer\n");
	}
	else
	{
		printf("继续加油\n");
	}*/

	// c语言是结构化的程序设计语言
	// 循序结构、选择结构、循环结构

	////函数
	////求两个任意整数的和
	//int n1 = 0;
	//int n2 = 0;
	//// 输入
	//scanf("%d %d", &n1, &n2);
	//// 求和
	////int sum = n1 + n2;
	//int sum = Add(n1, n2);
	//// 输出
	//printf("%d\n", sum);

	//// 数组
	//int arr1[10] = {10,11,12,13,14,15,16,17,18,19};
	//printf("%d\n", arr1[8]); //打印数组第8个元素
	////打印数组的所有元素
	//for (int i = 0; i <= 9; i++)
	//{
	//	if (i == 0)
	//	{
	//		printf("start ");
	//	}
	//	printf("%d ", arr1[i]);
	//	if (i == 9)
	//	{
	//		printf("end\n");
	//	}
	//}
	int qw = 0;
	int wq = 0;
	scanf("%d %d", &qw, &wq);
	if (qw>wq)
	{
		printf("%d\n", qw);
	}
	else
	{
		printf("%d\n",wq);
	}
	return 0;
}