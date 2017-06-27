#include<stdio.h>
int main()
{
	int in;
	int A[100]={0};
	while(scanf("%d",&in)&&in!=0)
	{
		int c =0;
		int sum=0;
		//printf("in:%d\n",in);
		for(int i=in;i;i/=2)
		{
			A[c]=i%2;
			//printf("A[%d]:%d\n",c,A[c]);
			sum+=A[c];
			c++;//length
		}
		printf("The parity of ");
		for(int j=c-1;j>=0;j--)
		{
			printf("%d",A[j]);
		}
		printf(" is %d (mod 2).\n",sum);
	}
	return 0;
}		
			
		
		
