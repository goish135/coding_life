#include<stdio.h>
int main(){
	int tc;
	scanf("%d",&tc);
	int n;//number
	while(tc--){
		scanf("%d",&n);
		int b1=0;
		//10 to 2
		for(int i=n;i!=0;i/=2)//ex 265 132 66 33 16 8 4 2 1
		{
			b1+=i%2;//1+0+0+0+1+0+0+0+0+1
		}
		//printf("b1:%d\n",b1);
		int b2=0;
		// 16 to 2
		//printf("n:%d\n",n);
		for(int j=n;j!=0;j/=10) 
		{
			int m=j%10;
			for(int k=m;k!=0;k/=2)
			{
				b2+=k%2;
			}
		}
		printf("%d %d\n",b1,b2); 
	}
	
	return 0;
} 
