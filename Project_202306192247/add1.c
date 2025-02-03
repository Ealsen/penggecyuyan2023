#define _CRT_SECURE_NO_WARNINGS
// 全局变量 具有外部链接属性
int g_val = 2022;
//static修饰全局变量的时候就会变成内部
//链接属性其它源文件就不能使用到这个全局变量了

// 函数 具有外部链接属性
// static修饰函数的时候就会变成内部
// 其它源文件就不能使用到这个全局变量了
int Add(int x, int y)
{
	return x + y;
}