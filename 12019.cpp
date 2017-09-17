/*
8
1 6
2 28
4 5
5 26
8 1
11 1
12 25
12 31
//
Thursday
Monday
Tuesday
Thursday
Monday
Tuesday
Sunday
Saturday
*/
#include<stdio.h>
int main()
{
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char week[7][10]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int m,d;
		scanf("%d %d",&m,&d);
		int hd = 0;
		for(int i=1;i<m;i++)
		{
			hd+=day[i];	
		}
		hd+=d;
		printf("%s\n",week[hd%7]);
	}
	return 0;
}







































