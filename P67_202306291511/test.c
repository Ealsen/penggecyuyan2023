#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1()
{
	/* ������
	1. ���� % ������֮�⣬�����ļ�������������
	�����������͸�������
2. ���� / ���������������������Ϊ������ִ����
����������ֻҪ�и�����ִ�еľ��Ǹ�����������
3. % ����������������������Ϊ���������ص���
����֮���������*/

	/*<< ���Ʋ�����
>> ���Ʋ�����
    ��λ���Ƕ�����λ
ע����λ�������Ĳ�����ֻ����������
���棺
������λ���������Ҫ�ƶ�����λ������Ǳ�׼δ����ġ�
���磺

*/
	int a = -7;
	int b = a << 1;
	printf("%d\n", b);

	return 0;
}






int main2()
{
	/*& //��λ��
| //��λ��
^ //��λ���
ע�����ǵĲ�����������������*/
	
	int a = 3;  //4�ֽ� 8����λ   32λ
	int b = -5;
	int c = a & b;

	printf("%d\n", c);

	return 0;
}




int main3()
{
	int a = 3;  //4�ֽ� 8����λ   32λ
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
	// ������ʱ����������������ֵ
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
	int count = 0;//����
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("��������1�ĸ��� = %d\n", count);
	return 0;
}







int main7()
{
	/*
!           �߼�������
-           ��ֵ
+           ��ֵ
&           ȡ��ַ
sizeof      �����������ͳ��ȣ����ֽ�Ϊ��λ��
~           ��һ�����Ķ����ư�λȡ��
--          ǰ�á�����--
++          ǰ�á�����++
*           ��ӷ��ʲ�����(�����ò�����)
(����)       ǿ������ת��
*/

	int a = -10;
	int* p = NULL;
	printf("%d\n", !2);
	printf("%d\n", !0);
	a = -a;
	p = &a;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);//����д�в��У�
	//printf("%d\n", sizeof int);//����д�в��У�


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
