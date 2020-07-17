#include <stdio.h>
#include <math.h>
int main(){
	float km,price,pricem;
	int prices,waitt; 
	scanf("%f %d",&km,&waitt);
	if(waitt >= 5){
		prices = waitt / 5 *2 ;
	}
	else{
		prices = 0;
	}
//	printf("%d %d",waitt,prices);
	if(km <= 3){
		price = 10;
	}
	else if (km >3 && km <= 10){
		price = 10 + (km - 3)*2;
	}
	else if (km > 10 ){
		price = 10 + 7*2+ (km - 10)*3;
	}
		pricem = price + prices;
		printf("%.f",pricem);
    return 0;
}
