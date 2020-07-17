#include <stdio.h>
#include <math.h>
int main(){

    int k;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");

    for(int a=0;a<5;a++){
    	scanf("%d",&k);
    	if(k == 0){
    		break;
		}
		switch (a){
			case 1 :
				printf("prince = 3.00\n");
				break;
			case 2 :
				printf("prince = 2.50\n");
				break;
			case 3 :
				printf("prince = 4.10\n");
				break;
			case 4 :
				printf("prince = 10.20\n");
				break;
			default :
				printf("prince = 0.00\n");
				break;
		}
		
	}
    return 0;
}
