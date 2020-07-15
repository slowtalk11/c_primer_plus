#include <stdio.h>
#include <math.h>
int fact(int n);
int fact(int n){
	int s = 1;
	for(int i = 1 ;i < n +1 ;i++){
		s = s*i;
	}
	return s;
	
}
int main(){
    int n,sum;
    scanf("%d",&n);
	sum = 0;
    
    for(int i = 1 ; i < n + 1;i++){
    	sum = sum + fact(i);
	}
	printf("%d",sum);
    return 0;
}

