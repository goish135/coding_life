#include<stdio.h>
#include<string.h>
int main()
{
	char A[1000];
	while(scanf("%s",&A)&&strcmp(A,"0")!=0)
	{
		int len = strlen(A);
		
		//odd sum
		int os=0;
		for(int i=0;i<len;i+=2) os+=(A[i]-'0');
		//printf("os:%d\n",os);
		//even sum
		int es=0;
		for(int j=1;j<len;j+=2) es+=(A[j]-'0');
		//printf("es:%d\n",es);
		int j = os-es;
		//printf("j:%d\n",j);
		if(j<0) j = j*(-1);
		
		if(j%11==0) printf("%s is a multiple of 11.\n",A);
		else printf("%s is not a multiple of 11.\n",A);
	}
	return 0;
}		
			
