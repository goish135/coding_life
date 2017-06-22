#include<stdio.h>
int main(){
	//int A[32]={0},B[32]={0},C[32]={0};
	int a,b;
	while(scanf("%d %d",&a,&b)==2&&a!=0&&b!=0)
	{
		int A[32]={0},B[32]={0},C[32]={0};
		//ten to two
		int i=31,j=31;
		for(int k1=a;k1;k1/=2)
		{
			A[i]=k1%2;
			i--;
		}
		for(int k2=b;k2;k2/=2)
		{
			B[j]=k2%2;
			j--;
		}
		
		/*for(int z=0;z<32;z++) 
		{
			printf("%d",A[z]);
		}
		printf("\n");
		for(int z1=0;z1<32;z1++)
		{
			printf("%d",B[z1]);
		}
		printf("\n");*/
		//int C[32]={0};
		for(int z=31;z>=0;z--) 
		{
			C[z] = A[z] + B[z]; 
			if(C[z]==2) C[z]=0; 
		}
		
		/*for(int z1=0;z1<32;z1++) printf("%d",C[z1]);
		printf("\n");*/
		int alpha = 1;
		int ans = 0;
		for(int z1=31;z1>=0;z1--)
		{
			ans=C[z1]*alpha+ans;
			alpha = alpha*2;
		}
		printf("%d\n",ans);
	}
	
}



// 4 6 => 2
// 0100 + 0110 = 0010
