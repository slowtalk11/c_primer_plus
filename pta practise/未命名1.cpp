#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
double fact(int n)//求阶乘
{
	double pro = 1;//应为0！=1,1！=1，这里pro的初始值设为1,是为了处理传入0的情况
	for (int i = n; i > 0; i--)
	{
		pro = pro*i;
	}
	return pro;
}
int main()
{
	int m, n;
	double result = 0;
	scanf("%d %d", &m, &n);
	result = fact(n) / (fact(m)*fact(n - m));
	printf("result = %.0f\n", result);//%。0f指定输出时不要小数部分
	system("pause");
	return 0;

}
