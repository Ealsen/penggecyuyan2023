#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>



int main1()
{
	// 指针
	int a = 10; // a int 类型 占 4字节
	int* pa = &a;
	//*pa 是指针变量 用来存放地址
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
/*总结：指针的类型决定了指针向前
或者向后走一步有多大（距离）。*/




int main3()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0;   //重点在调试的过程中观察内存的变化。
	*pi = 0;   //重点在调试的过程中观察内存的变化。
	return 0;
}








/*3. 野指针
概念： 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
3.1 野指针成因
1. 指针未初始化*/



int main4()
{
	int* p;//局部变量指针未初始化，默认为随机值
	*p = 20;// 非法访问
	return 0;
}






/*2. 指针越界访问
*/




int main5()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		*(p++) = i;
	}
	return 0;
}



/*3. 指针指向的空间释放
这里放在动态内存开辟
的时候讲解，这里可以简单提示一下。*/




/*3.2 如何规避野指针
1. 指针初始化
2. 小心指针越界
3. 指针指向空间释放即使置NULL
4. 避免返回局部变量的地址
5. 指针使用之前检查有效性*/



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





/*指针+- 整数
指针-指针
指针的关系运算*/


#define N_VALUES 5
int main7()
{
	float values[N_VALUES];
	float* vp;
	//指针+-整数；指针的关系运算
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


