/*
2 --tc
3 --'3'instructions
LEFT
RIGHT
SAME AS 2
5
LEFT
SAME AS 1
SAME AS 2
SAME AS 1
SAME AS 4
//
1
-5
*/
#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>

#include<stdlib.h>
using namespace std;
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int ins;
		scanf("%d",&ins);
		getchar();
		vector<string> myV;
		string str;
		for(int i=0;i<ins;i++)
		{
			//cin>>str;
			getline(cin,str);
			myV.push_back(str);//imp.
			//cout<<myV[i]<<endl;--test
			//cout<<str<<endl;//
		}
		//處理一下 (微調):將same指令變成 RIGHT or LEFT
		for(int j=1;j<ins;j++)
		{
			string s1 = myV[j].substr(0,7);
			string s2;
			if(s1=="SAME AS")
			{
				s2=myV[j].substr(8);
				//char ch = s2[0];//error ex:10 -> 1 	
				int index = atoi(s2.c_str());
				//cout<<index;--test
				myV[j] = myV[index-1];
				//cout<<myV[j]<<endl;
				//system("pause");
			}	
			//cout<<j+1<<myV[j]<<endl;
			
		}
		//數線移動
		int origin = 0;
		for(int k=0;k<ins;k++)
		{
			if(myV[k]=="RIGHT")
			{
				origin++;	
			}
			else if(myV[k]=="LEFT")
			{
				origin--;	
			} 
		}
		cout<<origin<<endl;
			
	}	
	return 0;
}
