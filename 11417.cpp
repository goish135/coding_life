#include<stdio.h>
int GCD(int I,int J)
{
	int r ;
	if(I>J)
	{
		while(J!=0)
		{
			r = I%J;
			I = J;
			J = r;
		}
		return I;	
	}
	else 
	{
		while(I!=0)
		{
			r = J%I;
			J = I;
			I = r;
		}
		return J;
	}
}
int main()
{
	int N;
	int G;
	while(scanf("%d",&N)==1&&N!=0)
	{
		G = 0;
		for(int i=1;i<N;i++)
		for(int j=i+1;j<=N;j++)
		{
			G+=GCD(i,j);
		}
		printf("%d\n",G);
	}
}
