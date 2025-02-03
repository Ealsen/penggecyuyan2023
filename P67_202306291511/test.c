#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1()
{
	/* 操作符
	1. 除了 % 操作符之外，其他的几个操作符可以
	作用于整数和浮点数。
2. 对于 / 操作符如果两个操作数都为整数，执行整
数除法。而只要有浮点数执行的就是浮点数除法。
3. % 操作符的两个操作数必须为整数。返回的是
整除之后的余数。*/

	/*<< 左移操作符
>> 右移操作符
    移位的是二进制位
注：移位操作符的操作数只能是整数。
警告：
对于移位运算符，不要移动负数位，这个是标准未定义的。
例如：

*/
	int a = -7;
	int b = a << 1;
	printf("%d\n", b);

	return 0;
}






int main2()
{
	/*& //按位与
| //按位或
^ //按位异或
注：他们的操作数必须是整数。*/
	
	int a = 3;  //4字节 8比特位   32位
	int b = -5;
	int c = a & b;

	printf("%d\n", c);

	return 0;
}




int main3()
{
	int a = 3;  //4字节 8比特位   32位
	int b = -5;
	int c = a | b;

	printf("%d\n", c);

	return 0;
	return 0;
}








int main4()
{
	int num1 = 1;
	int num2 = 2;
	num1& num2;
	num1 | num2;
	num1^ num2;
	return 0;
}









int main5()
{
	// 不用临时变量交换两个数的值
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}









int main6()
{
	int num = -1;
	int i = 0;
	int count = 0;//计数
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}







int main7()
{
	/*
!           逻辑反操作
-           负值
+           正值
&           取地址
sizeof      操作数的类型长度（以字节为单位）
~           对一个数的二进制按位取反
--          前置、后置--
++          前置、后置++
*           间接访问操作符(解引用操作符)
(类型)       强制类型转换
*/

	int a = -10;
	int* p = NULL;
	printf("%d\n", !2);
	printf("%d\n", !0);
	a = -a;
	p = &a;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);//这样写行不行？
	//printf("%d\n", sizeof int);//这样写行不行？


	return 0;
}












void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)
}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}
