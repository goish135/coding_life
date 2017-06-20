#include<stdio.h>
int main(){
	int tc;
	scanf("%d",&tc);
	int p;
	while(tc--){
		scanf("%d",&p);
		int sum = 0;
		while(p--){
			int d,a,r;
			scanf("%d %d %d",&d,&a,&r);
			sum = sum+(d*r);
		}
		printf("%d\n",sum);
	}
	return 0;
}			
