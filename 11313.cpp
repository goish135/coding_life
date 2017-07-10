/*
3
3 2
4 3
4 4
*/
#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int tc;
	int p,g;
	int ans=0;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&p,&g);
		ans =0;
		int flag =0;
		for(int i=p;i;)
		{
			int temp=i%g;
			//if(temp==0) {printf("bye\n");break;}
			if(i%g==0&&i==g) {break;}
			if(i<g) {
				//printf("%d$\n",i);
				flag=1;break;
			}
			i/=g;
			//if(i==0) {printf("%d$\n",i);}
			//system("pause");
			ans = ans +i;
			//printf("%dAC\n",ans);
			//if(i%g==0) {printf("%d^^\n",i);break;}
			i+=temp;
			//printf("%dXD\n",i);
			//system("pause");
			
		}
		if(flag==0) printf("%d\n",ans+1);
		else printf("cannot do this\n");
	}
	return 0;
}
