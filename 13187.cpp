// uva 13187
#include<stdio.h>
int main()
{
	//freopen("13187.in.txt","r",stdin);
	//freopen("13187.out.txt","w",stdout);
	
	long long int tc;
	scanf("%lld",&tc);
	while(tc--)
	{
		long long int S;
		scanf("%lld",&S);
		long long int ans;
		ans = (S+1)*(S+1)-1;
		printf("%lld\n",ans);
	}
	return 0;
}
