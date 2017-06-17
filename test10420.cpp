#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	string str;
	string str1;
	map<string,int> country;
	map<string, int>::iterator iter;
	int tc;//ex:3
	scanf("%d",&tc);
	while(cin>>str>>str1){
		//tc--;
		//if(tc==0) break;
		if(str=="end") break;
		country[str]++;
		tc--;
		if(tc==0) break;
	}
	 for(iter = country.begin(); iter != country.end(); iter++)
                cout<<iter->first<<" "<<iter->second<<endl;
}
