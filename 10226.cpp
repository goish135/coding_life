// uva 10226 Hardwood Species
#include<stdio.h>
// uva10226 
// format : .XXXX 
#include<string>
#include<map>
#include<iostream>
int main()
{
	//freopen("10226.in.txt","r",stdin);
	//freopen("10226.out.txt","w",stdout);
	
	int tc;
	std::map<std::string,int> MP;
	std::map<std::string,int>::iterator it;
	 
	scanf("%d",&tc);
	getchar();
	getchar();
	while(tc--)
	{
		std::string str;
		// while(std::cin>>str)
		int count = 0;
		while(std::getline(std::cin,str))
		{
			if(str=="") break;
			MP[str]++;
			count ++;
			// std::cout << str << MP[str] << '\n';
			//std::cout << str << '\n';				
		}
		
		double ans;
		
		for(it = MP.begin();it != MP.end();it++)
		{
			// ans = it -> second / MP.size();
			// std:: cout << it->first << '\n';
			// std::cout << it -> second << '\n';
			ans = (double) it -> second / count * 100;
			// std::cout << ans << '\n';
			  
			std::cout << it -> first <<" ";
			// << ans << '\n';
			printf("%.4lf\n",ans); 		
		}
		if(tc>0)
			std::cout << '\n'; 
		MP.clear();
				
	}
	return 0;
}

