#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	const double pi = 2*acos(0);
	int n;
	scanf("%d",&n);
	char a[10],b[10],c,bb;
	while(n--)
	{
		scanf("%s%c",&a,&c);
		if(c=='\n') 
		{
			//printf("%s$\n",a);
			int len = strlen(a);
			int beta = 1;
			double as1=0; 
			for(int i=len-1;i>=0;i--)
			{
				as1 = as1 + (a[i]-'0')*beta;
				beta = beta*10;
			} 
			//printf("as1:%d\n",as1); --convert suc.
			double aa = (as1*as1/8)*pi;
			printf("%.4lf\n",aa);
		}
		else 
		{
			scanf("%s",&b);
			//printf("%s %s$\n",a,b);
			int l1=strlen(a);
			int l2=strlen(b);
			double sum1 = 0;
			double sum2 = 0;
			int beta = 1;
			for(int i=l1-1;i>=0;i--)
			{
				sum1 = sum1 + (a[i]-'0')*beta;
				beta = beta*10;
			} 
			int alpha = 1;
			for(int j=l2-1;j>=0;j--)
			{
				sum2 = sum2 + (b[j]-'0')*alpha;
				alpha = alpha*10;
			}
			
			double ans = ((sum1+sum2)*(sum1+sum2)-(sum1*sum1)-(sum2*sum2))*pi;
			printf("%.4lf\n",ans);
		}
	}
	return 0;
}
