/*
3
13
15
17

0 2 3
-1
0 1 4
*/
//sol:a=>b=>c 找A再找B再找C
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n;
		int a,b,c;
		scanf("%d",&n);
		int flag = 0;
		for(a=0;;a++)
		{
			if(n-a*a<0) 
			{
				printf("-1\n");
				break;
			}
			for(b=0;;b++)
			{
				int j=n-a*a-b*b;
				//printf("j:%d\n",j);
				if(j<0) break;
				//system("pause");
				int c=sqrt(j);
				double cc=sqrt(j);
				if(c==cc)//代表是完全平方數 
				{
					flag=1;
					printf("%d %d %d\n",a,b,c);
					//system("pause");
					break;	
				} 
				
			}
			if(flag==1) break;
		}	
	}
	return 0;	
} 
