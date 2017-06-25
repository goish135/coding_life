#include<stdio.h>
int main(){
	int tc;
	scanf("%d",&tc);
	for(int i=1;i<=tc;i++){
		int s,e,sum=0;
		scanf("%d",&s);
		scanf("%d",&e);
		if(s%2==0) s = s+1;
		for(int j=s;j<=e;j+=2)
			sum = sum + j;
		printf("Case %d: %d\n",i,sum);
	}
	return 0;
}				
