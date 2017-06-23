#include<stdio.h>
#include<string.h>
int main(){
	char in[100];
	int A[100];
	while(scanf("%s",&in)==1&&in[0]!='-'){
		
		if(in[0]=='0'&&in[1]=='x')//hex
		{
			int len = strlen(in);
			int beta = 1;
			int ans = 0;
			for(int i=len-1;i>=2;i--)
			{
				ans=(in[i]-'0')*beta+ans;
				beta=beta*16;
			}
			printf("%d\n",ans);	
		}
		
		else //ten
		{
			int l = strlen(in);
			//char to number
			int alpha = 1;
			int as = 0;
			for(int k=l-1;k>=0;k--)
			{
				as = as+(in[k]-'0')*alpha;
				alpha = alpha*10;
			}
			//printf("%d\n",as);
			int s = 0;
			for(int j=as;j;j/=16)//
			{
				A[s]=j%16;
				//printf("--%d\n",A[s]);
				s++; //length
			}
			//print
			printf("0x");
			for(int m = s-1;m>=0;m--)		
			{
				if(A[m]==10) printf("A");
				else if(A[m]==11) printf("B");
				else if(A[m]==12) printf("C");
				else if(A[m]==13) printf("D");
				else if(A[m]==14) printf("E");
				else if(A[m]==15) printf("F");
				else printf("%d",A[m]);
			}
			printf("\n");
		}		
	}
	return 0;
}	
	
