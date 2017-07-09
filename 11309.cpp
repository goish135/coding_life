#include<stdio.h>
#include <stdlib.h>
int main()
{
	int tc;
	int hh,mm;
	int hx=24,mx=60;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d:%d",&hh,&mm);
		{
			int flag=1;
			//printf("%d:%d\n",hh,mm);
			while(flag==1){
			mm++;
			if(mm==mx) 
			{
				hh++;
				mm=0;
				if(hh==hx)
				{	
					hh=0;   
				} 
			}
			//printf("%d:%d$\n",hh,mm);
			//system("pause");
			//judge
			//int flag =0;
			int temp;
			int str[100];
			int j=0;
			temp=hh*100+mm;
			//printf("temp:%d\n",temp);
			//system("pause");
			for(int i=temp;i;i/=10)
			{
				str[j]=i%10;
				//printf("%d$\n",str[j]);
				//system("pause");
				j++;
				//printf("j:%d\n",j);
			}	
			//printf("%d:%d$\n",hh,mm);
			
			for(int k=0;k<j;k++)
			{
				if(str[k]!=str[j-k-1]) {flag=1;break;}
				else {flag =2;}
			}
			
			if(flag==2||temp==0) { printf("%.2d:%.2d\n",hh,mm);break;}
		  } 
		}
	}
	return 0;
}
