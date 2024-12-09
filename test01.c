//C语言代码中一定要有main函数
//主函数

//printf是一个库函数
//专门用来打印数据的

//std - 标准
//i - input
//o -outpput

//#include <stdio.h>
//int main()
//{
//	printf("hello\n");
//	return 0;
//}

//数据类型
//char 字符数据类型 |short 短整型 |int 整型 |long 长整型 |long long 更长的整型 |
//float 单精度浮点数 | double 双精度浮点数
//#include <stdio.h>;
//int main()
//{
//	//printf("%d\n",100);  //%d表示以整型的格式打印100
//	//printf("%zu\n",sizeof（）);  //%zu表示打印一个sizeof返回的无法整形
//
//	printf("%zu\n", sizeof(char));//sizeof表示谁的大小，返回的是char这个数据类型在内存中所占的大小  //1
//	printf("%zu\n", sizeof(short));//2
//	printf("%zu\n", sizeof(int));//4
//	printf("%zu\n", sizeof(long));//4
//	printf("%zu\n", sizeof(long long));//8
//	printf("%zu\n", sizeof(float));//4
//	printf("%zu\n", sizeof(double));//8
//	//输出的结果可以看到每个数据类型都包含着几个字节byte ,1个byte=8个bit
//	return 0;
//}
//int main()
//{
//	int age = 20; //表示向内存申请了int大小的空间把20放进去
//	return 0;
//}
//
int a = 10;