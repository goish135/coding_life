#include<stdio.h>

int main()
{
	int n;
	int tc = 1;
	while(scanf("%d",&n)==1&&n!=0)
	{
		printf("Case %d:",tc);
		int A[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) 
			{
				scanf("%d",&A[i][j]);
				//printf("%d",A[i][j]);
			}
			//printf("\n");
		}
		int sum = 0;
		int test = 0;
		int m = 0;
		for(int z=0,z1=n;z<(n+1)/2-1&&z1>=1;z++,z1--)
		{
			sum = 0;
			for(int k=z;k<z1;k++)
			sum=sum+A[m][k];
			//printf("sum:%d\n",sum);
			
			/*
			for(int m=1;m<n-1;m++)
			{
				for(int k=0;k<n;k++)
				sum=sum+A[m][k];
			}
			*/
			for(int w=z+1;w<z1-1;w++)
			{
				int s = A[w][z];
				//printf("s:%d\n",s);
				int e = A[w][z1-1];
				sum = sum + s + e;
				//printf("e:%d\n",e);
			
			}
			//printf("ss:%d\n",sum);
			
			for(int k=z;k<z1;k++)
			sum=sum+A[n-m-1][k];
			printf(" %d",sum);
			m++;
			
		}
		//printf("n:%d\n",n);
		if(n%2!=0)
		{
			int mid = (n-1)/2;
			printf(" %d\n",A[mid][mid]);
		}
		// 10 5 6
		else
		{
			int mid = (n-1)/2;
			int total=0;
			total = A[mid][mid]+A[mid][mid+1];
			total+= A[mid+1][mid]+A[mid+1][mid+1];
			printf(" %d\n",total);
		}	
		tc++;
	}
		//printf("$%d\n$\n",A[n-1/2][n-1/2]);
	return 0;
}
