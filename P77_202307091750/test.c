#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>



int main1()
{
	// ָ��
	int a = 10; // a int ���� ռ 4�ֽ�
	int* pa = &a;
	//*pa ��ָ����� ������ŵ�ַ
	*pa = 20;
	printf("%d\n", a);

	return 0;
}





int main2()
{
	int n = 10;
	char* pc = (char*)&n;
	int* pi = &n;

	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	printf("%p\n", pi);
	printf("%p\n", pi + 1);
	return  0;
}
/*�ܽ᣺ָ������;�����ָ����ǰ
���������һ���ж�󣨾��룩��*/




int main3()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	*pi = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	return 0;
}








/*3. Ұָ��
��� Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
3.1 Ұָ�����
1. ָ��δ��ʼ��*/



int main4()
{
	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
	*p = 20;// �Ƿ�����
	return 0;
}






/*2. ָ��Խ�����
*/




int main5()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
		*(p++) = i;
	}
	return 0;
}



/*3. ָ��ָ��Ŀռ��ͷ�
������ڶ�̬�ڴ濪��
��ʱ�򽲽⣬������Լ���ʾһ�¡�*/




/*3.2 ��ι��Ұָ��
1. ָ���ʼ��
2. С��ָ��Խ��
3. ָ��ָ��ռ��ͷż�ʹ��NULL
4. ���ⷵ�ؾֲ������ĵ�ַ
5. ָ��ʹ��֮ǰ�����Ч��*/



int main6()
{
	int* p = NULL;
	//....
	int a = 10;
	p = &a;
	if (p != NULL)
	{
		*p = 20;
	}
	return 0;
}





/*ָ��+- ����
ָ��-ָ��
ָ��Ĺ�ϵ����*/


#define N_VALUES 5
int main7()
{
	float values[N_VALUES];
	float* vp;
	//ָ��+-������ָ��Ĺ�ϵ����
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}
	return 0;

}




int my_strlen(char* s)
{
	char* p = s;
	while (*p != '\0')
		p++;
	return p - s;
}


