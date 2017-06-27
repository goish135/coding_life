#include<stdio.h>
#include<string.h>
int main()
{
	int n,f;
	char v[31];
	//int cal[31]={0};
	int tc=1;
	while(scanf("%d %d",&n,&f)&&(n||f))
	{
		int cal[31]={0};
		while(n--)
		{
			scanf("%s",&v);
			int len = strlen(v);
			for(int i=0;i<len;i++)
			{
				cal[len-1-i]+=(v[i]-'0');
			}//倒著放 
		}
		//for(int j=0;j<31;j++) printf("%d ",cal[j]);
		//printf("\n");
		
		for(int j=0;j<31;j++)
		{
			cal[j+1]=cal[j]/10+cal[j+1];
			cal[j]=cal[j]%10;	
		} //處理進位 
		//for(int k=0;k<31;k++) printf("%d ",cal[k]);
		printf("Bill #%d costs ",tc);
		tc++;
		int k;
		for(k=30;k>=0&&cal[k]==0;k--) continue;
		for(int m=k;m>=0;m--) printf("%d",cal[m]);
		
		printf(": each friend should pay ");
		for(int n=k;n>=0;n--)
		{
			cal[n-1]=cal[n]%f*10+cal[n-1];
			cal[n]=cal[n]/f; 	
		}//大數除以小數 
		int z;
		for(z=30;z>=0&&cal[z]==0;z--) continue;
		for(int z1=z;z1>=0;z1--) printf("%d",cal[z1]);
		printf("\n\n");
	}
	return 0;
} 
