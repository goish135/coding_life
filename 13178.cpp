// Q13178 
#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc); 
	while(tc--)
	{
		int n;
		scanf("%d",&n);	
		if(n%3==1) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}

