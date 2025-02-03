#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

BIT-7-程序环境和预处理
版权© 比特就业课
本章重点：
程序的翻译环境
程序的执行环境
详解：C语言程序的编译+链接
预定义符号介绍
预处理指令 #define
宏和函数的对比
预处理操作符#和##的介绍
命令定义
预处理指令 #include
预处理指令 #undef
条件编译
正文开始© 比特就业课
1. 程序的翻译环境和执行环境
在ANSI C的任何一种实现中，存在两个不同的环境。
第1种是翻译环境，在这个环境中源代码被转换为可执行的机器指令。
第2种是执行环境，它用于实际执行代码。
2. 详解编译+链接
2.1 翻译环境
组成一个程序的每个源文件通过编译过程分别转换成目标代码（object code）。
每个目标文件由链接器（linker）捆绑在一起，形成一个单一而完整的可执行程序。
链接器同时也会引入标准C函数库中任何被该程序所用到的函数，而且它可以搜索程序员个人
的程序库，将其需要的函数也链接到程序中







2.2 编译本身也分为几个阶段



看代码：
sum.c
test.c
int g_val = 2016;
void print(const char *str)
{
 printf("%s\n", str);
}
#include <stdio.h>
int main()
{
 extern void print(char *str);
 extern int g_val;
 printf("%d\n", g_val);
 print("hello bit.\n");
 return 0;
}





如何查看编译期间的每一步发生了什么呢？
test.c
1. 预处理 选项 gcc -E test.c -o test.i
预处理完成之后就停下来，预处理之后产生的结果都放在test.i文件中。
2. 编译 选项 gcc -S test.c
编译完成之后就停下来，结果保存在test.s中。
3. 汇编 gcc -c test.c
汇编完成之后就停下来，结果保存在test.o中。
VIM学习资料
简明VIM练级攻略：
https://coolshell.cn/articles/5426.html
给程序员的VIM速查卡
https://coolshell.cn/articles/5479.html


2.3 运行环境
程序执行的过程：
1. 程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，程序
的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
2. 程序的执行便开始。接着便调用main函数。

3. 开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回
地址。程序同时也可以使用静态（static）内存，存储于静态内存中的变量在程序的整个执行过程
一直保留他们的值。
4. 终止程序。正常终止main函数；也有可能是意外终止。
注：
介绍一本书《程序员的自我修养》
3. 预处理详解
3.1 预定义符号
这些预定义符号都是语言内置的。
举个栗子：
3.2 #define
3.2.1 #define 定义标识符
举个栗子：
提问：
在define定义标识符的时候，要不要在最后加上 ; ?
比如：
__FILE__      //进行编译的源文件
__LINE__     //文件当前的行号
__DATE__    //文件被编译的日期
__TIME__    //文件被编译的时间
__STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义
printf("file:%s line:%d\n", __FILE__, __LINE__);


语法：
 #define name stuff
#define MAX 1000
#define reg register          //为 register这个关键字，创建一个简短的名字
#define do_forever for(;;)     //用更形象的符号来替换一种实现
#define CASE break;case        //在写case语句的时候自动把 break写上。
// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
#define DEBUG_PRINT printf("file:%s\tline:%d\t \
						  date:%s\ttime:%s\n" ,\
__FILE__,__LINE__ ,       \
__DATE__,__TIME__ )




*/


/*
详情看

【C语言程序设计从入门到进阶【比特鹏哥c语言2023完整版视频教程P165】（c语言基础入门c语言软件安装C语言指针c语言考研C语言专升本C语言期末计算机二级C语言c语言】 https://www.bilibili.com/video/BV1Vm4y1r7jY/?p=165&share_source=copy_web&vd_source=506c6172c9a6ec2f01c92b361b61386f
*/





/*
P167

【C语言程序设计从入门到进阶【比特鹏哥c语言2023完整版视频教程】（c语言基础入门c语言软件安装C语言指针c语言考研C语言专升本C语言期末计算机二级C语言c语言】 https://www.bilibili.com/video/BV1Vm4y1r7jY/?p=167&share_source=copy_web&vd_source=506c6172c9a6ec2f01c92b361b61386f

*/

int main()
{

	return 0;
}