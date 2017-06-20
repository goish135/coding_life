#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double xg,yg,xd,yd;
	while(scanf("%d %lf %lf %lf %lf",&n,&xg,&yg,&xd,&yd)==5){
		int flag = 0;
		while(n--){
			double dx,dy;
			scanf("%lf %lf",&dx,&dy);
			double a1,b1,A1,B1;
			a1=dx-xg; A1=dx-xd;
			b1=dy-yg; B1=dy-yd;
			double c1,c2;
			c1 = sqrt(a1*a1+b1*b1);
			c2 = sqrt(A1*A1+B1*B1)/2;
			
			if(c1<c2&&flag!=1){
				printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",dx,dy);
				flag = 1;
			}
		}
		if(flag==0) printf("The gopher cannot escape.\n");
	}
	return 0;
}				
				
			
			
			
			
			
			
	
