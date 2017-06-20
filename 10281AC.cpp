#include<stdio.h>
#include<string.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double h,m,s,v;
	int isstart = 1;
	double oh,om,os,ov;
	double sum =0;
	while(scanf("%lf:%lf:%lf",&h,&m,&s)==3){//wow ==3
		char ch = getchar();
		int nowv;
		int b = ch;
		/*int oldh=h;
		int oldm=m;
		int olds=s;*/
		//printf("b:%d\n",ch);
		if(b==32) {//blank no32.
			scanf("%lf",&v);
			nowv=v;
			if(isstart!=1){
				 sum = sum + ((h-oh)+((m-om)/60)+((s-os)/3600))*ov;
				 //printf("sum:%lf\n",sum); //for test
			}
		}
		else {
			 //double sum = 0;
			 sum = sum + ((h-oh)+((m-om)/60)+((s-os)/3600))*ov;
			 //printf("%d:%d:%d %.2lf\n",h,m,s,sum);
			 cout<<setw(2)<<setfill('0')<<h<<':';
			 cout<<setw(2)<<setfill('0')<<m<<':';
			 cout<<setw(2)<<setfill('0')<<s<<' ';
			 printf("%.2lf km\n",sum);
		}
		/*if(b==32) printf("%d:%d:%d %d\n",h,m,s,v);
		else  printf("%d:%d:%d$\n",h,m,s);*/
		oh=h;om=m;os=s;ov=nowv;
		//printf("%lf %lf %lf %lf\n",oh,om,os,ov);
		isstart++;
	}
	return 0;
} 
