#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//在线oj
//	//很多互联网公司笔试是在线oj
//	//1.io型：所有代码自己完成实现
//	//2.接口型：只需要完成一个函数
//
//	return 0;
//}

//int main()
//{
//	printf("Name	Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack	18	man\n");
//	return 0;
//}

//int main()
//{
//	printf("\n");
//	return 0;
//}

/*
思路：
1. 给一个循环从1遍历到100，拿到每个数据后进行一下操作
2.  a. 通过%的方式取当前数据的个位，检测个位数据是否为9
		 如果是，给计数器加1
	b. 通过/的方式取当前数据的十位，检测十位数据是否是9，
		  如果是，给计数器加1
  循环一直继续，直到所有的数据检测完，所有9的个数已经统计在count计数中。
*/


//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	//'0'-字符0 ASCII值是48
//	//'\0' -字符 -ASCII值是0
//	//EOF - end of file 文件结束的标志 值是-1
//	char arr111[] = { 'b','i','t' };
//	printf("%d\n",strlen(arr111)); //随机值
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 123,26,26,262,12912,626,1256 };
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 7 / 2;
//	int b = 7 % 2; //取模两端必须是整数
//	float c = 7/ 2.0;
//	printf("a=%d,b=%d,c=%.1f\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	if (!flag) //!取反
//	{
//		printf("hello\n");
//	}
//	return 0;
//}

//sizeof是单目操作符

//int main()
//{
//	int arr11[2] = { 0 ,1};
//	printf("%d\n", sizeof(arr11)); // 计算整个数组的大小（字节）
//	printf("%d\n", sizeof(arr11[0])); //计算数组中角标为0的大小（字节）
//	return 0;
//}

// a++先使用后+，++a先+后使用
// a--、--a同理

//(int) a 强制类型转换

//&&逻辑与、||逻辑或者

// 条件操作符 exp1 ? exp2 :exp3

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int r = a > b ? a : b;
//	printf("%d\n",r);
//	return 0;
//}

// 逗号表达式 ：从左向右依次计算，
//整个表达式的结果是最后一个表达式

//int main()
//{
//	int a = 10; 
//	int b = 20; 
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("d=%d\n",d);
//	return 0;
//}

// arr[10]; '[]'下标操作符 arr和10是操作数

//'()'函数调用操作符

int add(int x,int y)
{
	return x + y;
}

int main()
{
	int c = add(1,2);
	printf("%d\n", c);
	return 0;
}