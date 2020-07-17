#include <stdio.h>
#include <math.h>
//Ã°ÅÝÅÅÐò 
int main(){

   float a,b,c;
    scanf("%f %f",&a,&b);
    c = (a-b) / b *100;
	if(c >=  50){
		printf("Exceed %.0f%%. License Revoked",c);
    }
    else if (c >= 10){
    	printf("Exceed %.0f%%. Ticket 200",c);
	}
    return 0;
}
