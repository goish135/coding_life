// uva 10393 
#include<stdio.h> 
#include<vector> 
#include<string> 
#include<iostream> 
#include<stdlib.h> 
#include<string.h> 
#include<set> 

using namespace std; 
const char B[11][51]={"","qaz","wsx","edc","rfvtgb","","","yhnujm","ik","ol.","p;/"};
string str; 
bool possible(string strstr)
{
	//cout << str << endl;
	
	//std::size_t found = str.find(strstr);
	//if(found==std::string::npos) return false;
	//else return true;
	for(int i=0;i<strstr.length();i++)
	{
		int flag = 0 ;
		for(int j=0;j<str.length();j++)
		{
			if(strstr[i]==str[j])
			{
				flag = 1; // §ä¨ì¤F 
				break;
			}
		}
		if(flag==0) return false;
	}
	return true;
} 
int main() 
{
	//freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout); 
 	// bool possible(string strstr);
	int a,b; 
	set<string> myset;	 
	
	bool ok[11]; // default false // 0 ~ 10 
	

	while(scanf("%d %d",&a,&b)==2) 
	{ 
	
		for(int i=0;i<=10;i++)
		{
			ok[i] = 1 ;
		}
		for(int i=0;i<a;i++)
		{
			int c;
			scanf("%d",&c);
			ok[c] = 0;
		}
		str = "";
		for(int j=1;j<=10;j++)
		{
			if(ok[j]==1)
			{
				str+= B[j];	
			}
		}
		//cout << str;
		string word;
		int max = 0;
		while(b--)
		{
			cin >> word ;
			//cout << word;
			//cout << possible(word) << endl;
			if(word.length()>max&&possible(word))
			{
				max = word.length();
				myset.clear();
				myset.insert(word);
			}
			else if(word.length()==max&&possible(word))
			{
				myset.insert(word);	
			}
		}
		cout << myset.size() << endl;
		for(set<string>::iterator it=myset.begin();it!=myset.end();it++)
		{
			cout << *it << endl;
		}
		myset.clear();
	}
	return 0;	
}
