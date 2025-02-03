#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>






#include "add.h"

int main1()
{
	// 函数的声明和定义
	// 创建静态库

	// 导入静态库
	//#pragma comment( lib, "add.lib")

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d\n", sum);

	return 0;
}







void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main2()
{
	//函数的递归
	/*程序调用自身的编程技巧称为
	递归(recursion)。
	递归做为一种算法在程序设计语言中
	广泛应用。一个过程或函数在其定义
	或说明中有直接或间接调用自身的
	一种方法，它通常把一个大型复杂的
	问题层层转化为一个与原问题相似的
	规模较小的问题来求解，递归策略
	只需少量的程序就可描述出解题过程
	所需要的多次重复计算，大大地减少
	了程序的代码量。
	递归的主要思考方式在于 : 把大事
	化小*/




	/*接受一个整型值（无符号），
	按照顺序打印它的每一位。*/



	int num = 1234;
	print(num);
	return 0;
}











int Strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + Strlen(str + 1);
}

int main()
{
	// 编写函数不允许创建临时变量，
	// 求字符串的长度

	// 递推 => 递推 && 回归

	char* p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	return 0;
}
