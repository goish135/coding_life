#include<stdio.h>
#include<string.h>
int main(){
	int tc;
	scanf("%d",&tc);
	getchar();
	for(int i=1;i<=tc;i++){
		int d;
		char p[2],pp[2];
		scanf("%s%s%d",&p,&pp,&d);
		//printf("%s$%s$%d$\n",p,pp,d);//scanf不吃空白//for test 
		int A[d*d]={0};
		int sum = d*d;
		int temp;
		for(int j = 0; j < d*d; j++){
            scanf("%d", &A[j]);
            //printf("%d",A[j]);//test
    	}
    	//printf("\n");//test
		int flag=1;
		if((d*d)%2!=0){
			int center=(d*d)/2;
			for(int m=0;m<center;m++){
				if(A[m]!=A[(d*d)-1-m]||A[m]<0) flag=0;
			}
		}
		else{
			int center = (d*d)/2-1;
		 	for(int m=0;m<=center;m++){
				if(A[m]!=A[(d*d)-1-m]||A[m]<0)
				{ 
					flag=0;
					break;	
				}
			}
		}
		if(flag==1) printf("Test #%d: Symmetric.\n",i);
		else printf("Test #%d: Non-symmetric.\n",i);
		
	}
	return 0;
}			 	
