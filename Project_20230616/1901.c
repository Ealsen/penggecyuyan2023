#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//����oj
//	//�ܶ໥������˾����������oj
//	//1.io�ͣ����д����Լ����ʵ��
//	//2.�ӿ��ͣ�ֻ��Ҫ���һ������
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
˼·��
1. ��һ��ѭ����1������100���õ�ÿ�����ݺ����һ�²���
2.  a. ͨ��%�ķ�ʽȡ��ǰ���ݵĸ�λ������λ�����Ƿ�Ϊ9
		 ����ǣ�����������1
	b. ͨ��/�ķ�ʽȡ��ǰ���ݵ�ʮλ�����ʮλ�����Ƿ���9��
		  ����ǣ�����������1
  ѭ��һֱ������ֱ�����е����ݼ���꣬����9�ĸ����Ѿ�ͳ����count�����С�
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
//	//'0'-�ַ�0 ASCIIֵ��48
//	//'\0' -�ַ� -ASCIIֵ��0
//	//EOF - end of file �ļ������ı�־ ֵ��-1
//	char arr111[] = { 'b','i','t' };
//	printf("%d\n",strlen(arr111)); //���ֵ
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
//	int b = 7 % 2; //ȡģ���˱���������
//	float c = 7/ 2.0;
//	printf("a=%d,b=%d,c=%.1f\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	if (!flag) //!ȡ��
//	{
//		printf("hello\n");
//	}
//	return 0;
//}

//sizeof�ǵ�Ŀ������

//int main()
//{
//	int arr11[2] = { 0 ,1};
//	printf("%d\n", sizeof(arr11)); // ������������Ĵ�С���ֽڣ�
//	printf("%d\n", sizeof(arr11[0])); //���������нǱ�Ϊ0�Ĵ�С���ֽڣ�
//	return 0;
//}

// a++��ʹ�ú�+��++a��+��ʹ��
// a--��--aͬ��

//(int) a ǿ������ת��

//&&�߼��롢||�߼�����

// ���������� exp1 ? exp2 :exp3

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int r = a > b ? a : b;
//	printf("%d\n",r);
//	return 0;
//}

// ���ű��ʽ �������������μ��㣬
//�������ʽ�Ľ�������һ�����ʽ

//int main()
//{
//	int a = 10; 
//	int b = 20; 
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("d=%d\n",d);
//	return 0;
//}

// arr[10]; '[]'�±������ arr��10�ǲ�����

//'()'�������ò�����

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