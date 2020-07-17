#include <stdio.h>
#include <math.h>
int main(){
	double x1,x2,x3,y1,y2,y3;
	double k1,k2,l,l1,l2,l3,a,x,y,p,s;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	k1 = (x1 - x2) /(y1 - y2);
//	x = x1 -x2;
//	y = y1 - y2;
	k2 = (x1 - x3) / (y1 - y3);
	
//	printf("%lf %lf %lf %lf\n",x1 - x2,y1 - y2,x1 - x3,y1 - y3);
	//	printf("%lf %lf",x,y);
//	printf("k1 = %lf ,k2 = %lf",k1,k2);


	if(k1 == k2){
		printf("Impossible");
	}
	else{
		l1 = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		l2 = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
		l3 = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
		l = l1+l2+l3;
		p = l / 2;
		s = sqrt(p*(p-l1)*(p-l2)*(p-l3));
		printf("L = %.2f, A = %.2f",l,s);
	}

	
    return 0;
}

//搞不懂， 	k1 = (x1 - x2) / (y1 - y2);始终不等于0.5，如果写了X,Y，等于0.5 
//问题解决，printf放在if里面了，判断导致显示出问题。 
