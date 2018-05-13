// Q13216 // 檔名錯誤
#include<stdio.h>
#include<string.h>
/*
long long int ans(long long int num)
{
	long long int x = (66*66) % 100;
	if(num==2)
	{
		return x;
	}
	else
	{
		for(long long int i=1;i<=(num-2);i++)
		{
			x = (x*66)%100;
		}
		return x;
	}
}
*/
/*
n
0:1
1:66
----
2:56
3:96
4:36
5:76
6:16
.
.
.
*/
int main()
{
	//freopen("13216.in.txt","r",stdin);
	//freopen("13216.out.txt","w",stdout);
	
	int tc;
	scanf("%d",&tc);
	
	while(tc--)
	{
		// long long int n; not enough to save
		
		// scanf("%lld",&n);
		char num[1000+1];
		scanf("%s",&num);
		int len = strlen(num);
		char r = num[len-1];
		int rnum = r-'0';
		
		if(len==1&&rnum==0) printf("1\n");
		else if(len==1&&rnum==1) printf("66\n");
		else
		{
			//long long int as = ans(n);
			//printf("%lld\n",as);
			if(rnum==1) rnum = 11;
			if(rnum==0) rnum = 10;
			
			int tp = (rnum-1)%5;
			if(tp==1) printf("56\n");
			else if(tp==2) printf("96\n");
			else if(tp==3) printf("36\n");
			else if(tp==4) printf("76\n");
			else if(tp==0) printf("16\n");
		}
	}
	return 0;
}
