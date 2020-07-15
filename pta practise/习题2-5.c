#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
	double s;
    s = 0.0;
    
    for(int i = 1 ; i < n + 1;i++){
    	s = s + sqrt(i);
	}
	printf("sum = %.2f",s);
    return 0;
}

