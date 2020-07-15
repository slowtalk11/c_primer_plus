#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
	float c;
    if(scanf("%d %d",&x,&y){
	}
   	
    int i = x;
    if( x <= y && y <= 100 && x >=0){
		printf("fahr celsius\n");
    	while ( i <= y){
    		c =(float)5 * (i - 32) /9;
  		  	printf("%d%6.1f\n",i,c);
			i = i + 2;
		}
		}
	else{
	printf("Invalid.");
	}

    return 0;
}
