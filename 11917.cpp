/*3
3
compiler 4
cplusplus 1
java 8
5
compiler
2
algorithm 3
math 9
4
math
2
java 8
ai 3
6
calculus
//
Case 1: Yesss
Case 2: Late
Case 3: Do your own homework!
*/
#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;
int main()
{
	int tc;
	scanf("%d",&tc);
	for(int c=1;c<=tc;c++) //case
	{
		int s;
		scanf("%d",&s);
		int tmp = s;
		map<string,int> myMap;
		map<string,int>::iterator iter; 
		char sub[100];
		int d;
		while(s--)
		{
			scanf("%s %d",&sub,&d);
			myMap.insert(pair<string,int>(sub,d));	
		}
		
		//for(iter = myMap.begin();iter!=myMap.end();iter++)
			//cout<<iter->first<<" "<<iter->second<<endl;
			
		int dd;
		char subb[100];
		scanf("%d",&dd);
		scanf("%s",&subb);
		int flag = 0;
		for(iter = myMap.begin();iter!=myMap.end();iter++)
		{
			if(subb==iter->first) //comfortable with
			{
				if(iter->second<=dd) printf("Case %d: Yesss\n",c); //'=' ­è¦n°µ§¹
				else if(iter->second<=(dd+5)) printf("Case %d: Late\n",c);
				else printf("Case %d: Do your own homework!\n",c);
				flag = 1;
				break; 
			}
		}
		if(flag==0) printf("Case %d: Do your own homework!\n",c);		
	}
	return 0;
}
