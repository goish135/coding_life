#include<stdio.h>
#include<math.h>
const double pi = 2*acos(0);
int main()
{
	int tc;
	scanf("%d",&tc);
	double d,l;
	while(tc--){
	scanf("%lf %lf",&d,&l);
	
		double a = l/2;
		double c = d/2;
		double b = sqrt(a*a-c*c);
		double ans = pi*a*b;
		printf("%.3lf\n",ans);
	}
	return 0;
}
