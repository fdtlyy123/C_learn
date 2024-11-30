#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//数组-一组相同类型的元素的集合
	//10个整形1-10存起来
	//数组是用下标来访问的 arr[0]表示访问第一个数字
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//char ch[5] = {'a','b','c'}//不完全初始化，剩余的默认为0
	
	return 0;
}