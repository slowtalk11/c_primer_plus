#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	double s = 0.0;
	for(int i=0;i <n;i++){
		s = s + pow(-1,i) * (i+1.0) / (i*2 + 1); 
	}
	printf("%.3f",s);
	return 0;
}
		
