#include<stdio.h>
int main(){
	int n,k;
	while(scanf("%d %d",&n,&k)==2){
		int temp=n,sum = n;//temp=41 k=4 sum=41
		int fn,temp2;
		while(temp){//100
			if((temp/k)==0) break;
			fn=temp%4;//0
			sum = sum + temp/k;//100+25
			temp = (temp/k)+fn;
		}
		
		printf("%d\n",sum);
	}
	return 0;
}		
			
