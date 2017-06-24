#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x1,y1,x2,y2;
	int tc = 1;
	while(n--){
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	//{
		int step = 0;
		while(x1!=x2||y1!=y2)
		{
			if(y1==0)
			{
				int temp_x = x1;
				x1 = 0;
				y1 = (temp_x + y1) + 1;
				step++;
			}
			else {x1++;y1--;step++;}		
		}
		printf("Case %d: %d\n",tc,step);
		tc++;	
	//}
	}
	return 0;	
} 
