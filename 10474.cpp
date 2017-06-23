#include<stdio.h>
int main(){
	int n,q;
	int c = 1;
	while(scanf("%d %d",&n,&q)==2&&n!=0&&q!=0)
	{
		//printf("%d %d\n",n,q);
		int A[n]={0};
		for(int i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}
		/*---------------------------------*/
		//sort
		for(int z1=0;z1<n;z1++)
		{
			for(int z2=z1+1;z2<n;z2++)
			{
				if(A[z1]>A[z2])
				{
					int temp = A[z1];
					A[z1] = A[z2];
					A[z2] = temp;
				}
			}		
		}	
		/*---------------------------------*/
		printf("CASE# %d:\n",c);
		while(q--){
			int in;
			scanf("%d",&in);
			int flag = 0;
			for(int j=0;j<n;j++)
			{
				if(in==A[j]) { printf("%d found at %d\n",in,j+1); flag = 1; break; }
			}
			if(flag==0) printf("%d not found\n",in);
		}
		c++;	
	}
	return 0;
}			
			
