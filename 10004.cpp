// uva10004
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<queue>

int main()
{
	//freopen("10004.in.txt","r",stdin);
	//freopen("10004.out.txt","w",stdout);
	int n,e;
	int edge[201][201];
	
	while(scanf("%d",&n)&&n!=0)
	{
		scanf("%d",&e);
		memset(edge,0,sizeof(edge));
		
		while(e--)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			edge[a][b] = 1;
			edge[b][a] = 1;
		}
		int g[n+1];
		memset(g,0,sizeof(g));
		g[0] = 1; // 1: drawed
		std::queue<int> Q;
		
		int visi[201];
		memset(visi,0,sizeof(visi));
		
		int mk;
	
		    Q.push(0);
			visi[0] = 1;
						

				while(!Q.empty())
				{
					int val = Q.front();
					//printf("val:%d\n",val);
					Q.pop();
					for(int j=0;j<n;j++)
					{
						mk = 0;
						if(edge[val][j]==1 && g[val]*g[j]==1) // the same color > out
						{	 
							printf("NOT BICOLORABLE.\n");
							mk = 1;
							break;
						}
						if(edge[val][j]==1&&!visi[j])
						{
							g[j] = g[val]*(-1);
							Q.push(j);
							visi[j]=1;
						}
					
					}
					
				
					if(mk==1) break;
				}
				if(mk==0) printf("BICOLORABLE.\n");
			
	}
	return 0;
}
