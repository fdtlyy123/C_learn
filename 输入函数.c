#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���⣺ʹ��getchar()��������һ��Сд��ĸ�������Ӧ�ĵĴ�д��ĸ����ֵ

int main()
{
	char c1, c2;   //�����ַ�����
	printf("������һ��Сд��ĸ:\n"); //������ʾ��Ϣ
	c1 = getchar();  //����һ��Сд��ĸ�����丳������c1
	c2 = c1 - 32;   //��Сд��ĸ��asc��ֵ��ȥ32���õ���Ӧ��д��ĸ��asc��ֵ
	printf("ת�������ĸ��%c,%d\n", c2, c2);  //�����Ӧ�ĵĴ�д��ĸ��asc��ֵ

	return 0;
}