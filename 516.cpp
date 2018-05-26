// uva 516
#include<stdio.h>
#include<math.h>
#define max 36767
#include<stdlib.h>

bool prime[max+1];
int box[max];
int total = 0;

void sieve()
{
	for(int i=2;i<max+1;i++)
	{
		prime[i] = true;
	}
	
	for(int i=2;i<=sqrt(max);i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=max;j+=i)
			{
				prime[j] = false;
			}
		}
	}
	
	for(int i=2;i<=max;i++)
	{
		if(prime[i]) box[total++] = i;
	}
} 

void solve(int n)
{
	//printf("here\n");
	int from;
	for(int i=0;i<total;i++)
	{
		if(i!=(total-1)&&(n>=box[i]&&n<box[i+1]))
		{
			// printf("box:%d\n",box[i]);
			from = i;
			//printf("from:%d\n",i);
			break;
		}	
	}
	//printf("test123\n");
	//printf(">>> %d\n",box[from]);
	int pr=0; 
	for(int j=from;j>=0;j--)
	{
		int flag= 0;
		while(n%box[j]==0)
		{	
			//printf("n:%d\n",n);
			//printf("box:%d\n",box[j]);
			//system("pause");
			pr++;
			n/=box[j];
			flag = 1;
			//printf("test\n");
			//system("pause");
		}
		if(flag==1&&n!=1)
		{
			printf("%d %d ",box[j],pr);
		}
		else if(flag==1)
		{
			printf("%d %d",box[j],pr);
		}
		pr = 0;
	}	
	printf("\n");
}

int main()
{
	//freopen("516.in.txt","r",stdin);
	//freopen("516.out.txt","w",stdout);
	
	int n,p;
	int sum = 1;
	sieve(); 
	while(scanf("%d",&n)&&n!=0)
	{
		scanf("%d",&p);
		sum*=pow(n,p);
		char ch = getchar();
		// printf("n:%d\n",n);
		// printf("ch:%c\n",ch);
		// printf("ch:%d\n",ch);
		
		if(ch==10) // output
		{
			//printf("sum:%d\n",sum);
			solve(sum-1);	
			sum = 1;	
		}
	}
	return 0;
}
