#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int main()
//{
	//char 字符类型
	//'a'字符常量
	/*char ch = 'w';*/
	//字符串 “abcdef"
	//C语言中有没有字符串类型 - 没有 双引号括起来的叫字符串
	//[]里面可以写10像这样arr1[10]，表示可存储10个数据，不确定多少可以直接不写

	//注意：字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候\0是结束语，不算做字符串

	//点击调试-窗口-监视，可以看到里面有7个值，最后一个是\0,arr1[]里至少要写7才放得下
	//char arr1[] = "abcdef";//表示把这个字符串存到arr1里面去//有一个隐藏\0
	//char arr2[] = { 'a','b','c','d','e','f','\0'};//没加\0监视里只有6个值,只有主动后面加了\0打印出来的结果才只有这个字符串，否则后面将会出现一些乱码

	////printf("%s\n", arr1);//%s表示用来打印字符串//abcdef
	////printf("%s\n", arr2);//abcdef...

	//printf("%d\n", strlen(arr1));//结果为6
	//printf("%d\n", strlen(arr2));//arr2有加\0结果为6，没加结果为33甚至更多


	//int len = strlen("abc");//求字符串长度的一个函数string length 头文件string.h
	//printf("%d\n", len);
//	return 0;
//}