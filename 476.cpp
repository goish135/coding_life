// uva 476
#include<stdio.h>
#define max 1000
//double pp[max][max]; // max case runtime error 
int main()
{
	freopen("476.in.txt","r",stdin);
	freopen("476.out.txt","w",stdout);
	
	char ch ;
	double a,b,c,d;
	double p[20][100];
	int c1=0;
	ch = getchar();
	//printf("ch:%c\n",ch); 
	while(1)
	{
		//printf("%c\n",ch);
		scanf("%lf %lf %lf %lf",&p[c1][0],&p[c1][1],&p[c1][2],&p[c1][3]); // 0 2 +> x , 1 3 +> y	
		//printf("%lf %lf %lf %lf\n",p[c1][0],p[c1][1],p[c1][2],p[c1][3]);
		c1++;
		getchar();
		ch=getchar();
		if(ch=='*') break;
	}
	int c2=1; // 
	double p1,p2;
	//double pp[100][100]; // array size cannot be too big 1000(X)
	while(scanf("%lf %lf",&p1,&p2)==2)
	{
		if(p1==9999.9&&p2==9999.9) break;
		//pp[c2][0] = p1,pp[c2][1]=p2;
		int mk = 0;
		for(int j=0;j<c1;j++)
		{
			if(p1>p[j][0]&&p1<p[j][2]&&p2<p[j][1]&&p2>p[j][3])
			{
				printf("Point %d is contained in figure %d\n",c2,j+1);
				mk = 1;
			}
		}
		if(mk==0) printf("Point %d is not contained in any figure\n",c2);
		c2++;
		//printf(">>> %lf %lf\n",p1,p2);
	}
	//printf("c2:%d",c2);
	//printf("total:%d\n",c1);
	// 0 2 +> x , 1 3 +> y	
	/*
	for(int i=0;i<c2;i++)  
	{
		int mk = 0;
		for(int j=0;j<c1;j++)
		{
			if(pp[i][0]>p[j][0]&&pp[i][0]<p[j][2]&&pp[i][1]<p[j][1]&&pp[i][1]>p[j][3])
			{
				printf("Point %d is contained in figure %d\n",i+1,j+1);
				mk = 1;
			}
		}
		if(mk==0) printf("Point %d is not contained in any figure\n",i+1);
	}
	*/
	return 0;
} 
