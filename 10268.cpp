#include<stdio.h>
#include<string.h>
int main(){
	int x;
	int A[100];
	while(scanf("%d",&x)!=EOF){//EOF
		//printf("x:%d\n",x);
		int a;
		int c = 0;
		while(scanf("%d",&a)){
			A[c]=a;
			//printf("a:%d\n",a);
			c++;
			char ch = getchar();
			if(ch=='\n') break;
		}
		/*printf("Here\n");
		for(int i=0;i<c;i++){
			printf("%d ",A[i]);
		}
		printf("\n");*/
		//math//
		int init = x;
		int exp = 2;
		int sum = 0;
		
		for(int k=c-3;k>=0;k--){
			sum = sum + exp*A[k]*init;
			exp++;
			init=init*x;
		}
		
		sum = sum + A[c-2];
		printf("%d\n",sum);
	}
	return 0;
}			
