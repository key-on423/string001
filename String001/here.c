#include <stdio.h>
#include <string.h>
#define n 10
//���һ���������������л�ȡn���ַ��������հף��Ʊ�������з������ѽ���洢��һ����������ĵ�ַ������Ϊ��һ������
void get_s(char* st);
//int getnum(void);
int main()
{
	printf("������any words:\n");
	char arr[100];
	get_s(arr, n);
	fputs(arr,stdout);
	printf("\nFinish!\n");
}
void get_s(char* st)
{
	fgets(st,n,stdin);

}
////int getnum(void)
//{
//	int n;
//	char ch;
//	printf("����������ֵn:");
//	while( (scanf("%d",&n) )!= 1)
//	{
//		while (ch= getchar() != '\n')
//			putchar(ch);
//		printf("����һ�����֣�����һ��\n");
//	}
//	return n;
//}