#include<stdio.h>
int main(){
	int tc;
	scanf("%d",&tc);
	int a,b;
	int sum,dif;
	while(tc--){
		scanf("%d %d",&sum,&dif);
		/*
		a+b=sum
		a-b=dif
		add:)2a=sum+dif a=sum+dif/2;
		dif:)2b=sum-dif b=sum-dif/2;
		*/
		int temp1=sum+dif;
		//printf("temp1:%d\n",temp1);
		int temp2=sum-dif;
		//printf("temp2:%d\n",temp2);
		a=temp1/2;
		b=temp2/2;
		if(temp2<0) printf("impossible\n");//
		else if (temp1%2!=0||temp2%2!=0) 
			  printf("impossible\n");
		else{
			if(a>b)
				printf("%d %d\n",a,b);
			else if(a<b)
				printf("%d %d\n",b,a);
			else 
				printf("%d %d\n",a,b);
		}
	}
	return 0;
}								  
		
		
