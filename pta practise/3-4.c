#include <stdio.h>
#include <math.h>
int main(){
	int num,a,b[100];
	int q=0,w=0,e=0,r=0,t=0;
	scanf("%d",&num);
	for(int i = 0;i < num;i++){
		scanf("%d",&a);
		if(a>=90){
			q++;
		}
		else if(a>=80 && a<90){
			w++;
		}
		else if(a>=70 && a<80){
			e++;
		}
		else if(a>=60 && a<90){
			r++;
		}
		else if(a<60){
			t++;
		}
		
	}
	printf("%d %d %d %d %d",q,w,e,r,t);

	
    return 0;
}
