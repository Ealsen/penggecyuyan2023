#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 声明外部变量a

//extern int a;

//void test()
//{
//	printf("a=>%d\n", a);
//}

// 定义标识符常量
//#define MAX 1000
//#define STR "nihao"
//int main()
//{
//	//test();
//	//printf("a==>%d\n", a);
//	//{
//	//	printf("a===>%d\n", a);
//	//}
//	const int b = 200;
//	printf("%d\n", b);
//	// b = 30; 常变量不可修改
//	int c = MAX;
//	printf("%d\n",c);
//	
//	printf("%s\n", STR);
//	system("pause");
//	return 0;
//}

// 枚举常量
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//// 枚举常量
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	// 字面常量
//	3.14;
//	// 使用枚举常量
//	enum Color aa = RED;
//	enum Sex ab = MALE;
//	return 0;
//}

//

int main()
{
	printf("abc\n");//“\”转义字符 
	printf("abcdef\0ghijkl\n");//"\0"字符串结束标识符
	printf("\n");
	printf("(are you ok??)\n");//三字母词“??\”有些编译器会把这三个字符解析成“]”
	printf("\(are you ok\?\?\)\n");//防止“??\”被当成三字母词
	printf("%c\n",'\''); //打印一个单引号
	printf("\"\n");//打印一个双引号
	printf("abcdef\\0ghijkl\n"); //“\\0”
	printf("c:\\user\\Ealsen\\Desktop\n"); //打印路径
	//printf("\n");
	//printf("0\t1\n");//“\t”水平制表符
	//printf("\n");
	////printf("\a\n");//“\a”windwos报警声
	//printf("\n");
	//printf("123123\r321"); //“\r”回车符 “/ddd”1~3个8进制数字,“/xdd”2个16进制数字
	printf("%c\n", '\130');
	printf("%c\n", '\x063');
	printf("%d", strlen("abcd t"));
	return 0;
}