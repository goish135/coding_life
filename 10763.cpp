#include<stdio.h>
#include<string.h>
#include<algorithm> 
#include<stdlib.h>
#define max 500000

using namespace std;

int A[max];
int B[max];

int main()
{
	//freopen("10763.in.txt","r",stdin);
	//freopen("10763.out.txt","w",stdout);
	
	
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		
		
		int f,t;
		int cnt = 0;
		for(int k=0;k<n;k++)
		{
			scanf("%d %d",&f,&t);
		    A[k] = f;
			B[k] = t;	
		}
		
		sort(A,A+n);
		sort(B,B+n);
		int i;
		for(i=0;i<n;i++)
		{
			
			if(A[i]!=B[i]) 
			{
				break;
			}
		}
		if(i==n) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;	
} 
