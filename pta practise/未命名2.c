#include<stdio.h>
int main(void)
{
  	float km,price,pricem;
	int prices,waitt; 
	scanf("%d",&waitt);
	if(waitt >= 5){
		prices = waitt / 5  ;
	}
	else{
		prices = 10;
	}
	printf("%d %d",waitt,prices);
	return 0;
}

//��ȷ���򣬲����׺�3-6��ʲô���� 
