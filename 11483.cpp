#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
	int n;		
	char str[100];
	int Case=0;
	while(scanf("%d",&n)==1&&n!=0)
	{
		getchar();
		printf("Case %d:\n", ++Case);
		
		printf("#include<string.h>\n");
		printf("#include<stdio.h>\n");
		printf("int main()\n");
		printf("{\n");
		
		while(n--)
		{
			gets(str);
			printf("printf(\"");
			for(int i=0;str[i];i++)
			{
				if(str[i]=='\\'||str[i]=='\"')
					printf("\\");
				printf("%c",str[i]);
			}
			printf("\\n\");\n");
		}
		
		printf("printf(\"\\n\");\n");
		printf("return 0;\n}\n");
	}
	return 0;
}
