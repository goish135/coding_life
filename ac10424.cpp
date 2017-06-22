#include<stdio.h>
#include<string.h>
int main(){
	char A[20],B[20];
	while(scanf("%s%s",&A,&B)==2){
		//scanf("%s",&B);--try
		//printf("%c %c\n",A[4],B[5]);//--test
		int len = strlen(A);
		//printf("%d\n",len);
		int sum1 = 0;
		for(int i=0;i<len;i++){
			if(A[i]>='a'&&A[i]<='z')
				{sum1 = sum1 + A[i]-96;}
			else if(A[i]>='A'&&A[i]<='Z')
				{sum1 = sum1 + A[i]-64;}
			//printf("a:%d\n",A[i]-'a');//--test
			//printf("A:%d\n",A[i]-'A'); 		
		}
		//printf("\n");
		int l = strlen(B);
		int sum2 = 0;
		for(int j=0;j<l;j++){
			if(B[j]>='a'&&B[j]<='z')
				sum2 = sum2 + (B[j]-'a'+1);
			else if(B[j]>='A'&&B[j]<='Z')
				sum2 = sum2 + (B[j]-'A'+1);	
		} 
		//printf("sum1:%d sum2:%d\n",sum1,sum2);
		while(sum1>=10){
			int s = 0;
			for(int t1=sum1;t1;t1/=10)//inside loop
			{
				s = s + (t1%10);
			}
			//printf("s:%d\n");
			sum1 = s;
		}
		//printf("%d\n",sum1);
		while(sum2>=10){
			int s = 0;
			for(int t1=sum2;t1;t1/=10)//inside loop
			{
				s = s + (t1%10);
			}
			//printf("s:%d\n");
			sum2 = s;
		}
		//printf("sum1:%d sum2:%d\n",sum1,sum2);
		double ans;
		char ch ='%';
		if(sum1>=sum2){
			 ans = (sum2*100.0)/sum1;
			 printf("%.2lf ",ans);
			 printf("%c\n",ch);
		}
		else {
			ans = (sum1*100.0)/sum2;
			 printf("%.2lf ",ans);
			 printf("%c\n",ch);
		}
		
	}
	return 0;
} 

