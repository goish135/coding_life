#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,int> str;
	int i=0,in;
	int j=0;//for case
	int flag = 0;
	while(++j){
		char ch;
		char c;
		i = 0;
		flag = 0;
		while(scanf("%c",&ch)==1){
			//c= getchar();
			if(ch=='\n') break;
			str[i] = ch -'0';
			//printf("str[%d]:%d\n",i,str[i]);
			i++;
			flag = 1;
		}
		//printf("\n");
		if(flag!=1) {
			//printf("have\n");
			break;
		}	
		int q;
		scanf("%d",&q);
/*---------------------------------------------------*/		
		printf("Case %d:\n",j);
		while(q--){
			int s,e;
			int sum=0;
			scanf("%d %d",&s,&e);
			if(s>e) {
				int temp = e;
				e = s ;
				s = temp;
			}
			for(int k=s;k<=e;k++){
				sum = sum + str[k];
			}
			//printf("sum:%d\n",sum);
			int check = e - s + 1;
			//printf("check:%d\n",check);
			if(sum==0||sum==check) printf("Yes\n");
			else printf("No\n");
		}
		char test;
		test = getchar();
		//printf("test:%d\n",test);
	}			
	return 0;
}	
				
			
				
	
