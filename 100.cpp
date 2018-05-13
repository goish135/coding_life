// uva100 
#include<stdio.h>
int main()
{
	//freopen("100.in.txt","r",stdin);
	//freopen("100.out.txt","w",stdout);
	
	int i,j;
	while(scanf("%d%d",&i,&j)==2)
	{
		int a,b;
		if(i>j) 
		{
			a = j;
			b = i;	
		} 
		else
		{
			a = i;
			b = j;
		}
		int max = 0,len;
		for(int k=a;k<=b;k++)
		{
			len = 0;
			int tp = k;
			//printf("%d",k); // print --step2
			len++;
			while(tp!=1)
			{
				if(tp%2==0) tp/=2;
				else tp=3*tp+1;
				len++;
				// printf("%d",k);
			}
			if(len>max) max = len;
		}
		printf("%d %d %d\n",i,j,max);
	}
	return 0;
	
}
