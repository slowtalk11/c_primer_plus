#include <stdio.h>
int main(){
	const float p1 = 0.53;
	const float p2 = 0.58;
    int n ;
    float cost;
    scanf("%d",&n);
    if(n < 0 ){
    	printf("Invalid Value!");
	}
    else if(n <= 50){
    	cost = n * p1;
    	printf("cost = %.2f",cost);
	}
	else if(n > 50){
		cost = 50 * p1 + (n - 50 ) * p2;
		printf("cost = %.2f",cost);
		}


	return 0;
}
//�����Ż����ڶ���if��ΪǶ�ס�������һ��printf��ʹ�á� 
#include <stdio.h>
int main(){
	const float p1 = 0.53;
	const float p2 = 0.58;
    int n ;
    float cost;
    scanf("%d",&n);
	if(n >= 0 ){
    	if(n <= 50){
    		cost = n * p1;
    		printf("cost = %.2f",cost);
		}
		else {
			cost = 50 * p1 + (n - 50 ) * p2;
			
		}
		printf("cost = %.2f",cost);
    else {
		printf("Invalid Value!");
	}
	return 0 ;
}
		
		
		
