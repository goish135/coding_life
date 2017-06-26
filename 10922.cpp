#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,int> arr;
	
	char ch;
	int sum = 0;
	int i=0;
	while(scanf("%c",&ch)==1&&ch!='0')
	{
		int f1 = 0;
		if(ch=='\n'){
			//printf("sum:%d\n",sum);
			int t=1;
			int total = 0;
		if(sum%9==0) {
			while(sum!=9){
				total = 0;
				for(int k=sum;k;k/=10)
					total = total + (k%10);
				sum=total;
				t++;	
			}
			//map<int,int>::iterator iter;
			/*for(iter = arr.begin();iter!=arr.end();iter++);
				cout<<iter->second;*/
			for(int j=0;j<i;j++)
				cout<<arr[j];	
			printf(" is a multiple of 9 and has 9-degree %d.\n",t);	
		}
		else {
			for(int j=0;j<i;j++)
				cout<<arr[j];
			printf(" is not a multiple of 9.\n");
		}
			sum = 0;
			i=0;
		}
		else {
			sum = sum+(ch-'0');
			arr[i]=ch-'0';
			//cout<<arr[i];
			i++;
		}
		//
		/*int t=1;
		int total = 0;
		if(sum%9==0) {
			while(sum!=9){
				for(int k=sum;k;k/=10)
					total = total + (k%10);
				sum=total;
				t++;	
			}
			for(int z=0;z<=i;z++)
				cout<<arr[z];
			printf("is a multiple of 9 and has 9-degree %d.\n",t);	
		}
		else {
			for(int j=0;j<=i;j++)
				cout<<arr[j];
			printf("is not a multiple of 9.\n");
		}
		*/
		
	}
	return 0;
	
}

