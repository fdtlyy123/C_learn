#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//����-һ����ͬ���͵�Ԫ�صļ���
	//10������1-10������
	//���������±������ʵ� arr[0]��ʾ���ʵ�һ������
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//char ch[5] = {'a','b','c'}//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
	
	return 0;
}