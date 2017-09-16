/*
3
8
1 4 2 2 3 5 3 4
1
9
5
1 2 3 4 5
//
Case 1: 4 2
Case 2: 0 0
Case 3: 4 0
*/
#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	for(int i=1;i<=tc;i++)
	{
		int n;
		scanf("%d",&n);
		int A[n];
		for(int k=0;k<n;k++) scanf("%d",&A[k]);
		int h=0,l=0;
		for(int j=0;j<n-1;j++)
		{
			if(A[j]>A[j+1]) l++;
			if(A[j]<A[j+1]) h++;
		}
		printf("Case %d: %d %d\n",i,h,l);
	}
	return 0;
 } 
