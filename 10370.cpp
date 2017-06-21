#include<stdio.h>
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int p;
		scanf("%d",&p);
		double g[p];
		
		for(int i=0;i<p;i++){
			scanf("%lf",&g[i]);
			//printf("%lf",g[i]);--OK
		}
		//printf("\n");
		double sum=0;
		
		for(int j=0;j<p;j++){
			sum = sum + g[j];
		}
		//printf("sum:%lf\n",sum);--OK
		double avg = sum/p;
		//printf("avg:%.3lf\n",avg);--OK
		
		int hn = 0;
		
		for(int k=0;k<p;k++){
			if(g[k]>avg) hn++;
		}
		//printf("hn:%d\n",hn);--OK
		double ans = (100.0*hn)/p;//imp.
		char ch='%';//print % (1)
		printf("%.3lf",ans);
		printf("%c\n",ch);//% (2)
	}
	return 0;
}		
		 	
