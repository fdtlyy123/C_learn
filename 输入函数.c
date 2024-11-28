#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//例题：使用getchar()函数输入一个小写字母，输出对应的的大写字母及码值

int main()
{
	char c1, c2;   //定义字符变量
	printf("请输入一个小写字母:\n"); //输入提示信息
	c1 = getchar();  //输入一个小写字母并将其赋给变量c1
	c2 = c1 - 32;   //将小写字母的asc码值减去32，得到对应大写字母的asc码值
	printf("转换后的字母：%c,%d\n", c2, c2);  //输出对应的的大写字母及asc码值

	return 0;
}