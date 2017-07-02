#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	double vt,v0;
	while(scanf("%lf %lf",&vt,&v0))
	{
		if(vt==0&&v0==0) break;
		double v,max=0.0,len,total;
		char s1[100],s2[100];//相比的兩個字串s1,s2 
		int p=0;
		for(int i=1;;i++)
		{
			v=vt/i;
			if(v0>=v) break; 
			len = 0.3*sqrt(v-v0);
			total = len*i;
			//printf("max:%lf\n",max);
			//printf("total:%lf\n",total);
			sprintf(s1, "%.6lf", total);
            sprintf(s2, "%.6lf", max);
            //printf("s1:%s\n",s1);
            //printf("s2:%s\n\n",s2);
			if(total>max&&strcmp(s1, s2) != 0) {max=total;p=i;}
			else if(strcmp(s1, s2) == 0) { p=0;break;}
			else break;
		}
		printf("%d\n",p);
	}
	return 0;
}		
		
		
			
			
			
