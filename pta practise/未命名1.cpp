#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
double fact(int n)//��׳�
{
	double pro = 1;//ӦΪ0��=1,1��=1������pro�ĳ�ʼֵ��Ϊ1,��Ϊ�˴�����0�����
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
	printf("result = %.0f\n", result);//%��0fָ�����ʱ��ҪС������
	system("pause");
	return 0;

}
