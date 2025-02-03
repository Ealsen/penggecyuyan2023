#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main1()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;

	printf("a=%d,b=%d,c=%d", a, b, c);
	// -1,-1,255
	return 0;
}




int main2()
{
	char a = -128;

	printf("%u\n", a);
	// %u - 无符号数    4294967168
	return 0;
}












int main3()
{
	char a = 128;
	printf("%u\n", a);
	return 0;
}








int main4()
{
	int i = -20;
	unsigned  int  j = 10;
	printf("%d\n", i + j);
	//按照补码的形式进行运算，最后格式化成为有符号整数
	return 0;
}



int main5()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}
}