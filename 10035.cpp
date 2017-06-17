#include<stdio.h>
#include<string.h>//strlen//.h
int main(){
	char A[10];
	char B[10];
	char temp[10];
	while(scanf("%s %s",&A,&B)){
		if(strcmp(A,"0")==0&&strcmp(B,"0")==0) break;//not sure//can stop--OK
		int a=strlen(A);
		int b=strlen(B);
		int carry = 0;
		int mark=0;
		int domain=0;
		//printf("%d %d\n",a,b);
		//int test=A[0];
		//int test1=A[0]-'0';
		//printf("%d %d\n",test,test1);
		if(a>b){
			int d = a-b;//d:how many bit distance
			for(int i=0;i<d;i++)//ex d=1
	        { temp[i]='0'; }//
	        int k=0;
	        for(int j=d;j<a;j++){ 
	        	temp[j]=B[k];
	        	k++;	
	        }
	        domain=1;
	        //printf("1\n");
	    }
	    if(a<b){
	    	int d = b-a;//d:how many bit distance
			for(int i=0;i<d;i++)//ex d=1
	        { temp[i]='0'; }//-'0'
	        int k=0;
	        for(int j=d;j<b;j++){ 
	        	temp[j]=A[k];
	        	k++;	
	        }  
	        domain=2;  	
		}
		//for(int m=0;m<a;m++){ printf("%c",temp[m]);}
		//printf("\n");
		
		
		
		if(domain==1){
			for(int i=a-1;i>=0;i--){//length
				if((A[i]-'0'+temp[i]-'0'+mark)>=10) {carry++;mark=1;}//char to int
				else mark=0;
			}
		}
		else if(domain==2){
			for(int i=b-1;i>=0;i--){//length
				if((temp[i]-'0'+B[i]-'0'+mark)>=10) {carry++;mark=1;}//char to int
				else mark=0;
			}
		}
		else {
				for(int i=b-1;i>=0;i--){//length//a-1 also OK
					if((A[i]-'0'+B[i]-'0'+mark)>=10) {carry++;mark=1;}//char to int
					else mark=0;
				}
		}	
		if(carry==0) printf("No carry operation.\n");
		else if(carry==1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n",carry);
	}
	return 0;
}		
		
