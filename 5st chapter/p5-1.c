#include <stdio.h>
#define mins 60 
int main(void){
	int min,minin,hour;
	minin = 60;
	while(minin > 0){
		scanf("%d",&minin);
		if(minin > 0){
			hour = minin / 60;
			min = minin % 60;
			printf("time is %d:%d",hour,min);
		}
	}
	return 0;
}
