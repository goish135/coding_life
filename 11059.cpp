#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

int main()
{
	//freopen("11509.in.txt","r",stdin);
	//freopen("11509.out.txt","w",stdout);
	
	int n ;
	int ce = 1; 
	while(scanf("%d",&n)!=EOF)
	{
		int A[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}
		
		long long int ans=0;
		long long int temp;
		for(int i=0;i<n;i++)
		{
			temp = A[i];
			if(temp>ans)
			{
				ans = temp;
			}
			
			for(int j=i+1;j<n;j++)
			{
				temp = temp*A[j];
				if(temp>ans)
				{
					ans = temp;
				}
			}
	
		}
		printf("Case #%d: The maximum product is %lld.\n\n",ce++,ans);
	}
	return 0;	
} 
