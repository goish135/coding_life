#include<stdio.h>
#include<string.h>//getchar
const int table[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
int main(){
	int flag=0;
	char c1,c2;
	int record=0,count=0,tc=0,mark=0;//for �s��⦸�X�{�����P�@�Ʀr���r��
	while(c1=getchar()){
		flag=0;
		count=0;
		int found=0;
		/*if(c1=='\n'){
		    
		    //if(c%2==0) {
		    	//c++;
		    	//continue;
		    //}	
			printf("\n");//1��output���|���@��'\n'
			flag=1;
			record=0;
			count=1;
			
		}*/
		for(int i=0;i<26;i++){
			if(i==(c1-65)){//�٭n�A�[����
				if((table[i]!=record||record==0)&&table[i]!=0) {
					mark=1;
					printf("%d",table[i]);
				}	
				record = table[i];
				found=1;
				break;
			}
			//found=0;
		}	
		//printf("\n");
			if(c1=='\n'){
			tc++;
			//printf("tc:%d",tc);
		    
		    /*if(c%2==0) {
		    	c++;
		    	continue;
		    }*/	
			printf("\n");//1��output���|���@��'\n'
			mark=0;
			flag=1;
			record=0;
			count=1;
			
		}
		
			
		//count++;			
		//printf("%c",c1);//test
		int n=c1;
		//printf("\n%d\n",flag);
		//if(found==1) printf("\n");
		//if(n==-1&&count!=1) printf("\n");
		//if(tc==0) printf("\n");
		
		if(n==-1) {
			//if(count==1)
			//if(c1=='\n'&&count!=1) printf("\n");
			if(mark==1) printf("\n");
			break;
		}	
		//if(n==-1&&c1!='\n') printf("\n");
		//if(flag!=1) printf("%d %c",c1,c1);//test
		//int n=c1;
		//if(n==-1) break;
		
		
	}
	return 0;
}			
		
	
	
