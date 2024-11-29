#define _CRT_SECURE_NO_WARNINGS
//转义字符
#include <stdio.h>
//\? 在书写连续多个问号时使用，防止他们被解析成三字母词
//早期三字母词
//??)-- 打印出结果为]
//??(-- 打印出结果为[

//%d - 打印整形
//%c -打印字符
//%s -打印float类型的浮点数
//%1f -打印double类型的数据
//%zu -打印sizeof的返回值
int main()
{
	printf("%s\n", "(are you ok\?\?)");//打印结果(are you ok??),用了\?就不可能出现三字母词的情况了
	printf("%c\n", '\'');//\'用于表示字符常量 ’
	printf("\"");//\"用于表示一串字符内部的双引号
	printf("abc\\0def");//abc\0def // \\表示反斜杠，防止它被解释为一个转义序列符
	printf("c:\test\test.c");//结果c： est  est.c //\t表示水平制表符 打印出来是空格
	printf("c:\\test\\test.c");//结果c:\test\test.c

	printf("\a");//触发电脑的蜂鸣

	printf("abc\ndef"); //\n表示换行

	 //\ddd:ddd表示1-3个八进制里的数字，如：\130X
	printf("%c\n", '\130');//输出的结果为X，\130代表的意思是把八进制的130转为十进制的88以这个数字作为asc码值代表的这个字符，88在asc码值表里代表X
	
	 //\xdd:dd表示两个16进制数字

	printf("%c\n", '\x60');//把60这个十六进制转换为十进制，6*16+0*16的0次方=96 打印出来的结果为96所代表的asc码值
	
	printf("%d\n", strlen("qwer t"));//6
	printf("%d\n", strlen("c:\test\628\test.c"));//14 
	//\62表示一个字符，而不是\628.因为8不是八进制里面的
	return 0;
}