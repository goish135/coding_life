#include<stdio.h>
#include<string.h>
int main()
{
	int tc;
	char str[1000];
	scanf("%d",&tc);
	while(tc--)
	{
		getchar();//¦Y'\n'
		scanf("%s",&str);
		int len = strlen(str);
		int n;
		scanf("%d",&n);
		int A[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
			//printf("%d\n",A[i]);
		}
		//printf("%s\n",str);
		//¨ú¾l¼Æ
		int flag = 1;
		for(int m=0;m<n;m++)
		{   
			int r = 0;//reminder
			flag = 1;
			for(int j=0;j<len;j++)//imp.
			{
				r = (r*10+(str[j]-'0'))%A[m];
			} 
			if(r!=0){flag = 0;break;} 
		}
		if(flag==1) printf("%s - Wonderful.\n",str); 
		else printf("%s - Simple.\n",str);
	}
	return 0;
} 
