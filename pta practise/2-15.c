#include <stdio.h>
#include <math.h>
int main(){
    int n ,i ;
    scanf("%d",&n);
    for(i = 0;i < n + 1; i++){
    	printf("pow(3,%d) = %.0f\n",i,pow(3,i));
    }
    return 0;
}
