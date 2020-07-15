#include <stdio.h>
#include <math.h>
double fact(n);
double fact(n){
	double x;
	x = 1;
	for(int i = n ;i > 0 ; i--){
		x = x * i;
	}
	return x;
}
int main(){
    int m,n ;
    double c;
    c = 0;
    scanf("%d %d",&m,&n);
    c = fact(n) / (fact(m)*fact(n-m)) ;
	printf("result = %.0f" ,c);
    return 0;
}

