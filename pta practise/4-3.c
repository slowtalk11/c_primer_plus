#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	double n,eps,sum,x,s;
	int i = 0;
	scanf("%lf",&eps);
	x = 1.0;
	s = 0.0;
	while(x > eps){
		n = 1.0*pow(-1,i)/(3*i+1);
		x = fabs(n);
		s = s + n;
		i++;

	//	printf("%f %d %d %.6f %.6f %.6f\n",eps,i,3*i+1,n,x,s);
	
    }
	printf("sum = %.6f",s);
	return 0;
}

//第三第四无法通过 
