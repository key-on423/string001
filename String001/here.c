#include <stdio.h>
#include <string.h>
#define n 10
//设计一个函数，从输入中获取n个字符（包括空白，制表符，换行符），把结果存储在一个数组里，它的地址被传递为第一个参数
void get_s(char* st);
//int getnum(void);
int main()
{
	printf("请输入any words:\n");
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
//	printf("请输入限制值n:");
//	while( (scanf("%d",&n) )!= 1)
//	{
//		while (ch= getchar() != '\n')
//			putchar(ch);
//		printf("不是一个数字，再试一遍\n");
//	}
//	return n;
//}