#include<stdio.h>
#include<vector>
using namespace std;
vector<long long int> myv;
int main()
{
	long long int in;

	while(scanf("%lld",&in)!=EOF&&in!=0)
	{
		myv.clear();
		
		int count = 0 ;
		long long int a;
		int b;
		for(int i=0;i<=9;i++)
		{
			if((in-i)%9==0)
			{
				b = i;
				a = (in-i)/9;			
				myv.push_back(10*a+b);
			}
		}
		for(int i=myv.size()-1;i>=0;i--)
		{
			if(i!=0)
				printf("%lld ",myv[i]);
			else
				printf("%lld",myv[i]);	
		}
		printf("\n");
	}
	return 0;
} 
 
