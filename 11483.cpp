#include <iostream>
#include <cctype>
#include <cstdio>
#include <vector>
using namespace std;
int  caso = 1;
void printHeader()
{
    printf("Case %d:\n", caso++);
    printf("#include<string.h>\n");
    printf("#include<stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
}

void printInput(string str)
{
    printf("printf(\"");
    for(int c=0; c<str.size(); c++)
    {
        if(isalnum(str[c]) || isspace(str[c]))
          printf("%c",str[c]);
        else if(str[c] == '\"') //
        {
        	//printf("hi");
        	printf("\\");
        	putchar('\"');
        }
        //else if(str[c] == '\'') 
                //printf("\\\'");
        else if(str[c] == '\\') //
                printf("\\\\");
        else  printf("%c",str[c]);       
    }
    printf("\\n\");\n");
}

void printFooter()
{
    printf("printf(\"\\n\");\n");
    printf("return 0;\n");
    printf("}\n");
}

int main()
{
int lines;
string str;

while(scanf("%d", &lines))
{
    if(lines==0)
       break;
       
    vector<string> vec;
    //getline(cin,str);
    getchar();
    for(int a=0; a<lines; a++)
    {
        getline(cin, str);
        //if(str=="\0") 
        //{
        	//a--;
        	//continue;
        //}
        vec.push_back(str);
    }
    printHeader();    
	for(int x=0; x<vec.size(); x++)
        printInput(vec[x]);
    printFooter();
}
return 0;
}
