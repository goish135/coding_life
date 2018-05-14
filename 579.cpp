// uva 579
// 12 hr (360) >> 1 hr (30) == 60 min (30) >> 1 min (0.5)
// 30*h+0.5*m 
// ------------------------------------------------------
// 1 hr (360) 1 min (6)
// 6*m

#include<stdio.h>
int main()
{
	//freopen("579.in.txt","r",stdin);
	//freopen("579.out.txt","w",stdout);
	
	double H,M;
	while(scanf("%lf:%2lf",&H,&M)==2)
	{
		if(H==0&&M==0) break;
		//printf("%lf:%.2lf\n",H,M);
		double a,b;
		a = 30*H+0.5*M;
		b = 6*M;
		double rt;
		if(a>b)
		{
			rt = a-b;
		}
		else
		{
			rt = b-a;
		}
		
		if(rt>180) rt = 360-rt;
		printf("%.3lf\n",rt);
	}
	return 0;
}
 
