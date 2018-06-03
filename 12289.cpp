#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
 
int main()
{
	// freopen("q1.in.txt","r",stdin);
	// freopen("q1.out.txt","w",stdout); 
	int tc;
	scanf("%d",&tc);
	vector<string> mv;
	vector<string> mv2;
	
	mv2.push_back("one");
	mv2.push_back("two");
	mv2.push_back("three");
	
	for(int i=0;i<tc;i++)
	{
		string str;
		cin >> str ;
		// mv.push_back(str);
	//}
	
	// solve
	// for(int i=0;i<mv.size();i++)
	
		if(str.size()==5)
		{
			cout << "3\n";
		}
		else
		{
			int cnt = 0;
			int cnt2 = 0;
			for(int i=0;i<mv2[0].size();i++)
			{
				
				if(str[i] == mv2[0][i])
				{
					cnt++;
						
				} 
			}
			if(cnt>=2) printf("1\n");
			for(int j=0;j<mv2[1].size();j++)
			{
				if(str[j]==mv2[1][j])
				{
					cnt2++;
				}
			}
			if(cnt2>=2) printf("2\n");
 		}
	
	}
	return 0;
}
