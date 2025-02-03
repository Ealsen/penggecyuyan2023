#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*

BIT-8-实用调试技巧
什么是bug？
调试是什么？有多重要？
debug和release的介绍。
windows环境调试介绍。
一些调试的实例。
如何写出好（易于调试）的代码。
编程常见的错误。


调试是什么？有多重要？
所有发生的事情都一定有迹可循，如果问心无愧，就不需要掩盖也就没有迹象了，如果问心有愧，
就必然需要掩盖，那就一定会有迹象，迹象越多就越容易顺藤而上，这就是推理的途径。
顺着这条途径顺流而下就是犯罪，逆流而上，就是真相。
一名优秀的程序员是一名出色的侦探。
每一次调试都是尝试破案的过程


2.1 调试是什么？
调试（英语：Debugging / Debug），又称除错，是发现和减少计算机程序或电子仪器设备中程序
错误的一个过程。
2.2 调试的基本步骤
发现程序错误的存在
以隔离、消除等方式对错误进行定位
确定错误产生的原因
提出纠正错误的解决办法
对程序错误予以改正，重新测试
2.3 Debug和Release的介绍。
Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。
Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优
的，以便用户很好地使用。

优秀的代码：
1. 代码运行正常
2. bug很少
3. 效率高
4. 可读性高
5. 可维护性高
6. 注释清晰
7. 文档齐全
常见的coding技巧：
1. 使用assert
2. 尽量使用const
3. 养成良好的编码风格
4. 添加必要的注释
5. 避免编码的陷阱。

*/


/***
*char *strcpy(dst, src) - copy one string over another
*
*Purpose:
*       Copies the string src into the spot specified by
*       dest; assumes enough room.
*
*Entry:
*       char * dst - string over which "src" is to be copied
*       const char * src - string to be copied over "dst"
*
*Exit:
*       The address of "dst"
*
*Exceptions:
*******************************************************************************/
char* strcpy(char* dst, const char* src)
{
	char* cp = dst;
	assert(dst && src);

	while (*cp++ = *src++)
		;     /* Copy src over dst */
	return(dst);
}


/*
注意：
1. 分析参数的设计（命名，类型），返回值类型的设计
2. 这里讲解野指针，空指针的危害。
3. assert的使用，这里介绍assert的作用
4. 参数部分 const 的使用，这里讲解const修饰指针的作用
*/






int main1()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}

	printf("\n");


	return 0;
}



/*结论：
const修饰指针变量的时候：
1. const如果放在*的左边，修饰的是指针指向的内容，保证指针指向的内容不能通过指针来改
变。但是指针变量本身的内容可变。
2. const如果放在*的右边，修饰的是指针变量本身，保证了指针变量的内容不能修改，但是指
针指向的内容，可以通过指针改变。
注:
介绍《高质量C/C++编程》一书中最后章节试卷中有关 strcpy 模拟实现的题目。*/






/*
7. 编程常见的错误
7.1 编译型错误
直接看错误提示信息（双击），解决问题。或者凭借经验就可以搞定。相对来说简单。
7.2 链接型错误
看错误提示信息，主要在代码中找到错误信息中的标识符，然后定位问题所在。一般是标识符名不
存在或者拼写错误。
7.3 运行时错误
借助调试，逐步定位问题。最难搞。
温馨提示：
做一个有心人，积累排错经验。
讲解重点：
介绍每种错误怎么产生，出现之后如何解决。
本章完。
#include <stdio.h>
int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL);
	while(*str)//判断字符串是否结束
   {
		count++;
		str++;
   }
	return count;
}
int main()
{
	const char* p = "abcdef";
	//测试
	int len = my_strlen(p);
	printf("len = %d\n", len);
	return 0;
}

*/