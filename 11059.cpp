#include<stdio.h>
int main()
{
	int in;
	int tc = 1;
	while(scanf("%d",&in)==1)
	{
		int n;
		long long int p=1;
		long long int max =0;
		int A[in];
		int i = 0;
		int temp = in;
		while(in--)
		{
			scanf("%d",&n);
			A[i]=n;
			i++;
			//p = p*n;
			//if(p>max) max=p;
		}
		for(int k=0;k<temp;k++)
		{
			p = A[k];
			//printf("p = %d\n",A[k]);
			for(int j=k+1;j<temp;j++)
			{
				p=p*A[j];
				if(p>max) max = p;
			}	
		}
		printf("Case #%d: The maximum product is %lld.\n\n",tc,max);
		tc++;
	}
	return 0;
}			
			
		
