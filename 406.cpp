/*
21 2
18 2
18 18
100 7
//
21 2: 5 7 11

18 2: 3 5 7 11

18 18: 1 2 3 5 7 11 13 17

100 7: 13 17 19 23 29 31 37 41 43 47 53 59 61 67
*/
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	int n,c;
	while(scanf("%d %d",&n,&c)==2)
	{
		printf("%d %d:",n,c);
		vector<int> myV;
		myV.push_back(1); //肈﹚竡1借计 
		//printf("1:%d\n",myV[0]);
		for(int i=2;i<=n;i++)
		{
			int flag = 1;
			for(int j=2;j<i;j++)
			{
				if(i%j==0) 
				{
					flag = 0; //獶借计 
					break;
				} 
			}
			if(flag==1) {
				//printf("%d\n",i);
				myV.push_back(i);
			}
		}
		if(myV.size()%2==0) // K 案计 //assum: index 0 [1 2 [3] 4] 5 
		{
			int size = myV.size(); // 8
			int middle = size/2; // 8/2=3
			//int dash = (size-2)/2; //(6-2)/2=2
			//int index = middle-dash;//3-2=1 //秨﹍
			int terms = c*2;
			int index = (middle-1)-((terms-2)/2);
			if(terms<=size)
				for(int k=index,m=1;m<=terms;m++,k++)
					printf(" %d",myV[k]);
			else 
				for(int m=0;m<size;m++)
					printf(" %d",myV[m]);
			printf("\n\n"); 
		}
		else //K 计 // 0 1 2  
		{
			
			int size = myV.size();//9
			int mid = size/2;//9/2=4
			//int dash = (size-1)/2;//4
			int  terms = (c*2)-1;//2*2-1=3
			int  idx   = mid-(terms-1)/2;//(3-1)/2=1
			if(terms<size)
				for(int k=idx,m=1;m<=terms;m++,k++)
					printf(" %d",myV[k]);
			else 
				for(int m=0;m<size;m++)
					printf(" %d",myV[m]);
			printf("\n\n"); 
		}
	}
	return 0;
}







