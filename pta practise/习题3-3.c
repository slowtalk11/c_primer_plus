#include <stdio.h>
int main(){
    int n,a,sum,c,num;
    sum = 0;
    num = 0;
	float s ;
    scanf("%d",&n);
    if(n == 0){
    	s = 0;
    	num = 0;
	}
    else {
		for(int i=0;i < n;i++){
	    	scanf("%d",&a);
    		sum = sum + a;
			if(a >= 60){
				num = num + 1;
			}
		}
		s =1.0* sum / n;
	}
	
	printf("average = %.1f\n",s);
	printf("count = %d",num);
    return 0;
}

