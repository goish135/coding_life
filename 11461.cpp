#include<stdio.h>
#include<math.h>
int main() 
{
	int a,b;
	while(scanf("%d %d",&a,&b)==2)
	{
		int sum = 0;
		int a1;
		double a2;
		if(a==0&&b==0) break;
		for(int i=a;i<=b;i++)
		{
			a1 = sqrt(i);
			a2 = sqrt(i);
			if(a1==a2) sum++; 
		}
		printf("%d\n",sum);
	}
	return 0;
}
