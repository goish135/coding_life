#include<stdio.h>
int main()
{
	int n;
	int tc=1;
	int sum;
	while(scanf("%d",&n)==1)
	{
		sum = (1+n)*n/2;
		int B[100];
		int A[n];
		for(int i=0;i<n;i++)	scanf("%d",&A[i]);
		//sort
		/*for(int m=0;m<n;m++)
		{
			for(int m1=m+1;m1<n;m1++)
			{
				if(A[m1]<A[m])
				{
					int temp = A[m];
					A[m]=A[m1];
					A[m1] = temp;
				}
			}
		}*/
		int flag =1;			
		for(int m=0;m<n;m++)
			for(int m1=m+1;m1<n;m1++)
				if(A[m]>A[m1]) flag = 0; 				
					
		int count = 0;
		for(int j=0;j<n&&flag;j++)
		{
			for(int k=j;k<n;k++)
			{
				B[count] = A[j]+A[k];
				//printf("B:%d\n",B[count]);
				count++;
			}
			
		}			
		//int flag =1;
		//judge
		for(int z=0;z<count&&flag;z++)
		{
			for(int z1=z+1;z1<count;z1++)
			{
				if(B[z]==B[z1]) {flag =0;break;}
			}
			if(flag==0) break;
		}
		if(flag==1) printf("Case #%d: It is a B2-Sequence.\n\n",tc);
		else printf("Case #%d: It is not a B2-Sequence.\n\n",tc);						
		tc++;
	}
	return 0;
}			
		
		
	
