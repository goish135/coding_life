//UVA11728 Alternate Task
/*
1
102
1000
24
36
17
0
//
Case 1: 1
Case 2: 101
Case 3: -1
Case 4: 23
Case 5: 22
Case 6: -1
*/
#include<stdio.h>
int main()
{
	int in;
	int tc=1;
	while(scanf("%d",&in)==1&&in!=0)
	{
			int ans;
			int tin = in;
			if(in==1) 
			{
				printf("Case %d: 1\n",tc++);
				continue;
			}
			while(--tin)
			{
				int fs = 0;
				for(int i=1;i<=tin;i++)
				{
					if(tin%i==0) //¾ã°£
					{
						fs += i; 
					} 
				}
				if(fs==in) 
				{
					ans = tin;
					break;
				}
			}
			if(tin==0) printf("Case %d: -1\n",tc++);
			else printf("Case %d: %d\n",tc++,ans);
	}
	return 0;	
}
