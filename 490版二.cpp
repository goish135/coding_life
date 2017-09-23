#include <stdio.h>
#include <string.h>
#include <vector>
#include <string> 
#include <iostream>
using namespace std;
int main()
{
    // freopen ("input.txt","rt",stdin);
    // char sentence[101][101];
    //int N=0,length[101];
    int length[101]; //跟列數輸出相關 
    int Max_length=0;
    //char str[101];
    string str;
    //int N=0;
    vector<string> V;
    // gets(str)
    while (getline(cin,str)) { // scanf()不吃空白 
        // length[N] = strlen(str.c_str());
        int len = strlen(str.c_str());
        //if (length[N] > Max_length) Max_length = length[N]; // Max_length:輸出列數 
        if(len>Max_length) Max_length=len;
        //N++; 
        //vector<string> V;
        V.push_back(str);
    }
    for (int i=0; i<Max_length; i++){ // 一列一列輸出
		//cout<<V.size()<<endl; 
        for (int j=V.size()-1; j>=0; j--){
        	if(j==0)
        	{
            	if (i < V[j].length())
                	//printf("%c",sentence[j][i]);
                	cout<<V[j][i];
            	else
                	printf("");
            }    	
            else if(V[j].length()<V[j-1].length())
            {
            	if (i < V[j].length())
                	//printf("%c",sentence[j][i]);
                	cout<<V[j][i];
            	else
                	printf(" ");
            }
            else
            {
            	if (i < V[j].length())
                	//printf("%c",sentence[j][i]);
                	cout<<V[j][i];
            	else
                	printf("");
            }    
        }
        printf("\n");
    }
    return 0;
}
