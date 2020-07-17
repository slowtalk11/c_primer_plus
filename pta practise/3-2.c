#include <stdio.h>
#include <math.h>
int main(){

    int a,b;
	float c;
    scanf("%d %d",&a,&b);
    c = ((float)a-b) / b *100;
	if(c >=  50){
		printf("Exceed %.0f%%. License Revoked",c);
    }
    else if (c >= 10){
    	printf("Exceed %.0f%%. Ticket 200",c);
	}
	else {
		printf("OK");
	}
    return 0;
}
