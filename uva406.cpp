// uva 406 : Prime Cuts
#include<stdio.h>
#include<math.h> 
#define max 1000
bool A[max+1];
int rd[max+1];

void es()
{
	for(int i=2;i<=max;i++)
	{
		A[i] = true;
	}
	
	A[1] = true ; // notice 
	
	for(int j=2;j<=sqrt(max);j++)
	{
		if(A[j])
		{
			for(int k=j*j;k<=max;k+=j)
			{
				A[k] = false;	
			} 
		}
	}
}

int main()
{
	//freopen("406.in.txt","r",stdin);
	//freopen("406.out.txt","w",stdout);
	
	es();
	int n,c; // K: number of prime
	while(scanf("%d %d",&n,&c)==2)
	{
		
		int ct = 1 ; // 
		rd[0] = 1 ; // 
		
		for(int i=2;i<=n;i++)
		{
			if(A[i]) 
			{

				rd[ct] = i ;
				ct++;
			}
		}
 		
		int total = 0;
		if(ct%2==0)	total = 2*c; 
		else total = 2*c - 1 ;

		printf("%d %d:",n,c);
		if(total > ct) 
		{
			for(int i=0;i<ct;i++)
			{
				printf(" %d",rd[i]);
			} 
		}
		else
		{
			
			int mid,bias,from;
			
			mid = (ct-1)/2;
			bias = (total - 1) / 2;
			from = mid - bias;
		
			while(total--)
			{
				printf(" %d",rd[from++]);
			}
		}
		printf("\n\n");
	}
	return 0;	
}
