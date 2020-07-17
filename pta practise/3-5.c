#include <stdio.h>
#include <math.h>
int main(){
    int y,ys,d;
    d = 0;
    scanf("%d",&y);
    if(y >= 2000 && y <= 2100){
    	for(int i = 2001; i <= y;i++ ){
    		if(i % 400 == 0){
    			printf("%d\n",i);
				d++;
			}
			
			else if (i%4==0 && i%100 !=0){
				if(i==y){
					printf("%d",i);
				}
				else{
				
				printf("%d\n",i);
				d++;
				}
			}
		}
		if(d == 0){
			printf("None");
		}
	}
	else{
		printf("Invalid year!");
	}
    return 0;
}
