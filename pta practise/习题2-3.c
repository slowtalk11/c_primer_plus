#include <stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int s1 = 0;
	double s2 = 0.0;
	for(int i=0;i <n+1;i++){
		s1 = s1 + (m+i)*(m+i);
		s2 = s2 + 1.0 /(m + i );
	}
	printf("sum = %.6f",s1+s2);
	return 0;
}
		
