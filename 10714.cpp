#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int len,a;
		scanf("%d %d",&len,&a);
		int A[a];
		for(int i=0;i<a;i++) scanf("%d",&A[i]);
		/*-------------------------------------*/
		int max = 0;
		for(int j=0;j<a;j++){
			if(len-A[j]>max){
				max = len - A[j];
			}
		}
		for(int k=0;k<a;k++){
			if(A[k]>max){
				max = A[k];
			}
		}
		/*-------------------------------------*/
		//printf("max:%d\n",max);
		/*for(int z = 0;z<a;z++){
			for(int z1 =z+1;z1<a;z1++)
				if(A[z]>A[z1]) {
					int temp = A[z];
					A[z] = A[z1];
					A[z1] = temp;
				}
		}*/
		int half = len / 2;
		int M =0;
		for(int z = 0;z<a;z++){
			if(A[z]<half){
				if(A[z]>M) M=A[z];
			}
			else {
				if(len-A[z]>M) M = len-A[z];
			}
		}		 	
							
		printf("%d %d\n",M,max);
		
	}
	return 0;
}						
