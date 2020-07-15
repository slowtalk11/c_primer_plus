#include <stdio.h>
#include <math.h>
int main(){
    int num,i,d;
    double sum = 0.0;
    scanf("%d",&num);
    d = 1;
    for(i = 0;i <= num - 1; i++){
    	sum = sum + pow(-1,i)*1.0/d;
    	d = d + 3; 
	}
   	printf("sum = %.3f",sum);	
    return 0;
}
