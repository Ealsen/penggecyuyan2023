#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��֧���if
int main()
{
	/*if (5 == 5)
	{
		printf("hehe\n");
	}*/

	//int age = 10;
	//if (age >= 18)
		//printf("����\n");
	//else
		//printf("δ����\n");

	//int age = 32;
	//if (age < 18)
	//{
	//	printf("����\n");
	//}
	//else if (age >= 18 && age < 27)
	//{
	//	printf("����\n");
	//}
	//else if (age >= 27 && age < 40)
	//{
	//	printf("׳��\n");
	//}
	//else if (age >= 40 && age <50)
	//{
	//	printf("����\n");
	//}


	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//	//-----
	//	if (b == 2)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	//	//------


	/*int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
		{
			printf("hehe\n");
		}
	}
	else
	{
		printf("haha\n");
	}*/

	//// ���1-100֮�������
	//for (int i = 1; i <= 100 ; i++)
	//{
	//	if (i % 2 != 0)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	

	////��ӡ����
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//default:
	//	printf("��Чֵ\n");
	//	break;
	//case 1:
	//	printf("����1\n");
	//	break;
	//case 2:
	//	printf("����2\n");
	//	break;
	//case 3:
	//	printf("����3\n");
	//	break;
	//case 4:
	//	printf("����4\n");
	//	break;
	//case 5:
	//	printf("����5\n");
	//	break;
	//case 6:
	//	printf("����6\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	//}






	//int n = 1;	//int m = 2;
	//switch (n)
	//{
	//case 1:
	//	m++;
	//case 2:
	//	n++;
	//case 3:
	//	switch (n)
	//	{//switch����Ƕ��ʹ��
	//	case 1:
	//		n++;
	//	case 2:
	//		m++;
	//		n++;
	//		break;
	//	}
	//case 4:
	//	m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d, n = %d\n", m, n);





// ѭ�����

////��ӡ1~10������
//int i = 1;
//while (i <= 10)
//{
//	printf("%d ", i);
//	i++;
//}



//���������������뻺������������
	//int ch = 0;
	//while ((ch = getchar()) != (-1))
	//	putchar(ch);

//char passwd[30] = { 0 };
//printf("Enter your password\n");
//scanf("%s", &passwd);
//printf("YES or NO(Y/N)\n");
////getchar();//��ʱ��ȡ'\n'
//int ch = 0;
//
//// ��������'\n'
//while (ch = getchar() != '\n')
//{
//	;
//}
//
//int ret = getchar();
//if (ret == 'Y')
//{
//	printf("YES\n");
//	printf("your password is:\n");
//	printf("%s\n", passwd);
//}
//else
//{
//	printf("NO\n");
//}



char ch = '\0';
while ((ch = getchar()) != EOF)
{
	if (ch < '0' || ch > '9')
		continue;
	putchar(ch);
}


	return 0;
}