#include<stdio.h>
int main(){
	int a,b,c,d;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
	{
		if(a==0&&b==0&&c==0&&d==0) break;
		int sum = 0;
		if(b>a) 
		{
			//a=a+40;//40=>one cycle
			sum = sum+ (a+40-b);
		}
		else
		{
			sum = sum + (a-b);
		}
		/*------------------------*/
		if(b>c)
		{
			sum = sum + (c+40-b);
		}
		else 
		{
			sum = sum + (c-b);
		}
		/*------------------------*/
		if(d>c)
		{
			sum = sum + (c+40-d);
		}
		else
		{
			sum = sum+(c-d);
		}
		/*------------------------*/
		printf("%d\n",(sum*9)+1080);
	}
} 
