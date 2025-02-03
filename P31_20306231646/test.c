#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 
#define PI 3.1415926


int main1()
{
	// BC13-ASCII码
	//描述
	//	BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，转换以下ASClII码为对应字符并输出他们。
	//	73,32,99, 97, 110,32,100,111,32,105,116,33
	//int a = 97;
	//printf("%c", a);
	int arr1[] = {73,32,99,97,110,32,100,111,32,105,116,33};
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	//sizeof(arr) - 计算的是致组的总大小, 单位是字节
	// sizeof(arr[0]) - 计算的是数组元素的大小


	for (int i = 0; i < sz; i++)
	{
		printf("%c", arr1[i]);
	}
	return 0;
}




int main2()
{
	/*输入一个人的出生日期（包括年月日)，将该生日中的年、月、日分别输出。
	数据范围 : 年份满足1990≤y ≤2015，月份满足1≤m ≤12，日满足1 < d≤30
		输入描述 :
	输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
		输出描述 :
	三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
		心*/

	/*通过scanf函数的%m格式控制可以指定输入域
	宽，输入数据域宽（列数 > 此宽度截取
		所需数据; 通过printf函数的% o格式控
		制符，
	输出数值时指定力面不使用的空位置自动填0。*/

	//输入数据
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%4d%2d%2d", &year, &month, &day);
	//输出
	printf("year=%4d\n", year);
	printf("month=%02d\n", month);
	printf("date=%02d\n", day);

	return 0;
}





int main3()
{

	// 学生信息的输入输出
	//描述
	//	依次输入一个学生的学号，以及3科(C语言，数学，英语)成绩，在屏幕上输出该学生的学号，3科成绩(注:输出成绩时需进行四舍五入且保留2位小数)。
	//	数据范围 : 学号满足1≤n ≤20000000，各科成绩使用百分制，且不可能出现负数
	//	输入描述 :
	//学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
	//	输出描述 :
	//学号，3科成绩，输出格式详见输出样例。
	//	示例1
	//	输入 : 17140216; 80.845, 90.55, 100.00
	//	复制
	//	输出 : The each subject score of No.17140216 is
	//	复制
	//	8o.85, 90.55, 100.0o .

	int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float eng = 0.0f;
	//输入
	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
	//输出
	printf("The each subject score of No.");
	printf("%d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
	return 0;
}



int main4()
{

	//Bc9 printf的返回值
	//	题目
	//	题解(30)
	//	讨论(71)排行
	//	简单通过率 : 27.89 % 时间限制 : 1秒空间限制 : 32M
	//	校招时部分企业笔试将禁止编程题跳出页面，为提前适应，练习时请使用在线自测，而非本地IDE。
	//	描述
	//	KiKi写了一个输出"Hello world!"的程序，BoBq老师告诉他printf函数有返回值，你能帮他写个程序输出printf("Hello world!")的返回值吗 ?
	//	输入描述 :
	//	无
	//	输出描述 : 包括两行:
	//第一行为"Hello world!"
	//	第二行为printf(""Hello world!"')调用后的返回值。

	int n = printf("Hello world!");
	printf("\n%d\n", n);
	return 0;
}

int main5()
{
	/*描述
		小乐乐获得4个最大数，请帮他编程找到最大的数。输入描述 :
	一行，4个整数，用空格分开。
		输出描述 :
	行，—个整数为输入的4个整数中最大的整数。
		示例1
		输入 : 5 8 2 5
		复制
		输出 : 8
		复制*/

	/*int a, b, c, d, t=0;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (a>b)
	{
		t = a; a = b; b = t;
	}
	if (a > c)
	{
		t = a; a = c; c = t;
	}
	if (a > d)
	{
		t = a; a = d; d = t;
	}
	if (b > c)
	{
		t = b; b = c; c = t;
	}
	if (c > d)
	{
		t = c; c = d; d = t;
	}
	printf("%d", d);*/

	// 先定义一个数组用来存储数据
	int arrs[4] = { 0 };
	// 0 1 2 3 4
	int i = 0;
	// 循环输入这几个整数
	while (i<4)
	{
		scanf("%d", &arrs[i]);
		i++;
	}
	// 假设数组内的第一个整数最大
	int max = arrs[0];
	i = 1;//数组内的整数只有4个，而除数组第一个整数外还有3个即需要循环3次
	// 循环比大小，如果数组内有数比max大就将其值赋予max
	while (i<4)
	{
		if (arrs[i]>max)
		{
			max = arrs[i];
		}
		i++;
	}
	// 打印max
	printf("%d", max);
	return 0;
}




int main6()
{


	/*描述
		给定一个球体的半径，计算其体积。其中球体体积公式为V = 4 / 3 * 3，中T = 3.1415926。
		数据范围 : 输入—个浮点值0≤n ≤15
		输入描述 :
	一行，用浮点数表示的球体的半径。
		输出描述 :
	一行，球体的体积。小数点后保留3位。*/


	double r = 0.0; // 0.0默认是double类型，float写成0.0f
	scanf("%lf", &r);
	double V = 4.0 / 3.0 * PI * pow(r, 3);
	printf("%.3f\n", V);
	// 精度问题 
	return 0;
}


int main()
{
	/*描述
		问题 : 计算BMI指数（身体质量指数)。BMI指数（即身体质量指数，简称体质指数又称体重，英文为Body Mass lndex，简称BMI)，是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。主要用于统计用途，当我们需要比较及分析一个人的体重对于不同高度的人所带来的健康影响时，BMI值是一个中立而可靠的指标。
		数据范围 : 输入的数据满足50≤n ≤180
		输入描述 :
	一行，两个整数，分别表示体重(公斤)，身高(厘米)，中间用一个空格分隔。
		输出描述 :
	—行，BMI指数（保留两位小数)。
	示例1
		输入 : 70 170输出 : 24.22
		30人举手*/

	int weight = 0;
	int high = 0;
	scanf("%d %d", &weight, &high);
	float BMI = weight / (high/100.0) / (high/100.0);
	printf("%.2f", BMI);

	return 0;
}