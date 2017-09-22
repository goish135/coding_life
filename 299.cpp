// uva299:
/*
3
1 3 2
4
4 3 2 1
2
2 1
=======
1
6
1 
*/
#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n;
		scanf("%d",&n);
		int train[n];
		for(int i=0;i<n;i++)
		{
			int box;
			scanf("%d",&box);
			train[i]=box;	
		}
		//處理 bubble
		int swap=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(train[i]>train[j])
				{
					//swap
					swap++;
					int temp = train[i]; //搬動車廂 
					train[i] = train[j];
					train[j] = temp;	
				}			
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",swap);
	}	
	return 0;
} 
