// uva 11223
#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>

int main()
{
	//freopen("11233.in.txt","r",stdin);
	//freopen("11233.out.txt","w",stdout);
	
	int L,M;
	std::vector<std::string> vr_1;
	std::vector<std::string> vr_2;
	
	scanf("%d %d",&L,&M);
	{
		
		while(L--)
		{	
			std::string str1;
			std::string str2;
			
			std::cin>>str1>>str2;
			
			vr_1.push_back(str1);
			vr_2.push_back(str2);
			
			//std::cout<<str1<<'\n';
			//std::cout<<str2<<'\n';		
		}
		while(M--)
		{
			std::string in;
			std::cin>>in;
			int mk = 0; 
			for(int i=0;i<vr_1.size();i++)
			{
				if(in==vr_1[i]) 
				{
					std::cout<<vr_2[i]<<'\n';
					//std::cout<<"XDD\n";
					mk = 1;
				}
				//mk=1;	
			}
			if(mk==0&&in[in.length()-1]=='y') 
			{
				char c = in[in.length()-2];
				if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
				{
					in.replace(in.length()-1,1,"");
					in = in + "ies";
					std::cout << in << '\n';	
					mk = 2;
				}
			}
			char ch = in[in.length()-1];
			if(mk!=1&&mk!=2&&(ch=='o'||ch=='s'||ch=='x'))
			{
				in = in + "es";
				std::cout << in << '\n';
				mk = 3;
			}
			char chch = in[in.length()-1];
			char rtwo = in[in.length()-2];
			if(mk!=1&&mk!=2&&(rtwo=='s'||rtwo=='c'))
			{
				if(chch=='h')
				{
					in = in + "es";
					mk = 3;
					std::cout<<in<<'\n';
				}
				//std::cout << in << '\n';
				//mk = 3;
			}
			if(mk==0) std::cout<< in+"s" << '\n';
		}
	}
	return 0;
}
