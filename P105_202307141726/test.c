#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int main1()
{
	char* p = "abcdef";//��a�ĵ�ַ��ֵ��p
	char arr[] = "abcdef";//���ַ����Ž�����
	//*p = 'w'; // �����ַ��������޸ģ�
	//��*pǰ��const���﷨����
	printf("%s\n", p);
	return 0;
}



int main2()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
	{
		printf("p1 == p2\n");//
	}
	else
	{
		printf("p1 != p2\n");
	}

	if (arr1 == arr2)
	{
		printf("arr1 == arr2\n");
	}
	else
	{
		printf("arr1 != arr2\n");//
	}

	return 0;
}







int main3()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 1,2,3,4,5 };

	int* parr[3] = { arr1,arr2,arr3 };

	int i = 0;
	for (i = 0; i <3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", *(parr[i] + j));
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}





int main()
{
	int arr[10] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr= %p\n", &arr);
	printf("arr+1 = %p\n", arr + 1);
	printf("&arr+1= %p\n", &arr + 1);


	/*ʵ���ϣ� &arr ��ʾ��������ĵ�ַ��
	������������Ԫ�صĵ�ַ����ϸϸ���һ�£�
������ &arr �������ǣ� int(*)[10] ��
��һ������ָ������
����ĵ�ַ+1��������������Ĵ�С��
���� &arr+1 ����� &arr �Ĳ�ֵ��40.*/
	return 0;
}