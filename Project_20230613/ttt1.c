#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����ⲿ����a

//extern int a;

//void test()
//{
//	printf("a=>%d\n", a);
//}

// �����ʶ������
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
//	// b = 30; �����������޸�
//	int c = MAX;
//	printf("%d\n",c);
//	
//	printf("%s\n", STR);
//	system("pause");
//	return 0;
//}

// ö�ٳ���
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//// ö�ٳ���
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	// ���泣��
//	3.14;
//	// ʹ��ö�ٳ���
//	enum Color aa = RED;
//	enum Sex ab = MALE;
//	return 0;
//}

//

int main()
{
	printf("abc\n");//��\��ת���ַ� 
	printf("abcdef\0ghijkl\n");//"\0"�ַ���������ʶ��
	printf("\n");
	printf("(are you ok??)\n");//����ĸ�ʡ�??\����Щ����������������ַ������ɡ�]��
	printf("\(are you ok\?\?\)\n");//��ֹ��??\������������ĸ��
	printf("%c\n",'\''); //��ӡһ��������
	printf("\"\n");//��ӡһ��˫����
	printf("abcdef\\0ghijkl\n"); //��\\0��
	printf("c:\\user\\Ealsen\\Desktop\n"); //��ӡ·��
	//printf("\n");
	//printf("0\t1\n");//��\t��ˮƽ�Ʊ��
	//printf("\n");
	////printf("\a\n");//��\a��windwos������
	//printf("\n");
	//printf("123123\r321"); //��\r���س��� ��/ddd��1~3��8��������,��/xdd��2��16��������
	printf("%c\n", '\130');
	printf("%c\n", '\x063');
	printf("%d", strlen("abcd t"));
	return 0;
}