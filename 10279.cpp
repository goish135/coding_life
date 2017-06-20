#include<stdio.h>
//int cal[d][d];
#include<string.h>
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int d;//dimenton
		scanf("%d",&d);
		//printf("%d\n",d);
		char design[100][100];
		char process[100][100];
		//char ele;
				
		for(int i=0;i<d;i++){
			//for(int j=0;j<d;j++){
				scanf("%s",&design[i]);
				//char ch=getchar();
				//if(ch=='\n') break;
				//design[i][j]=ch; 
			//}
		}
		
		/*for(int i=0;i<d;i++){
			for(int j=0;j<d;j++){
				printf("%c",design[i][j]);
			}
			printf("\n");
		}*/
		
		for(int i=0;i<d;i++){
			scanf("%s",&process[i]);
		}
		
		int cal[d][d];
		
		for(int c=0;c<d;c++){
			for(int f=0;f<d;f++){
				cal[c][f]=0;
				//printf("%d",cal[c][f]);
			}
			//printf("\n");
		}//initial suc.
		
		
		for(int k=0;k<d;k++){
			for(int m=0;m<d;m++){
				//add(k,m);
				if(design[k][m]=='*'){//if is * NESW diagonal //impor.
					for(int i=-1;i<=1;i++)
						for(int j=-1;j<=1;j++){
							if((k+i)<0||(m+j)<0||(k+i)>=d||(m+j)>=d) continue;
							if(design[k+i][m+j]!='*'){
								
								cal[k+i][m+j]++;
								//printf("cal[%d][%d]:%d\n",k+i,m+j,cal[k+i][m+j]);//test
							}
						}
				}
			} 
		} 
		
		for(int a=0;a<d;a++){
			for(int b=0;b<d;b++){
				if(process[a][b]=='x')
					printf("%d",cal[a][b]);
				else printf(".");
			}
			if(a!=(d-1)) printf("\n");//impor.	
		}
		
	}
	return 0;
}
