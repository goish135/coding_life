#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int m,n,cn;//m:length n:width
		scanf("%d %d %d",&m,&n,&cn);
		printf("%d %d %d\n",m,n,cn);
		char A[m][n];//Array
		for(int i=0;i<m;i++) {
			scanf("%s",&A[i]);
		}
		while(cn--){
			int  cx,cy;
			
			int f1 = 1;
			int f2 = 1;
			scanf("%d %d",&cx,&cy);
			int record = 0;
			for(int y=1;f1!=0;y++){
				for(int j=-y;j<=y&&f1!=0;j++){
					if(cx+j<0||cx+j>=m) {
						f2 =0;	
						break;
					}
					//int record = 0;
					for(int k=-y;k<=y&&f1!=0;k++){
						if(cy+k<0||cy+k>=n) {f2=0;break;}
						if(A[cx][cy]!=A[cx+j][cy+k]) {
							//printf("A[%d][%d]:%c A[%d][%d]:%c$$\n",cx,cy,A[cx][cy],cx+j,cy+k,A[cx+j][cy+k]);
							f1 = 0;
							break;
						}
						//printf("A[%d][%d]:%c A[%d][%d]:%c$$\n",cx,cy,A[cx][cy],cx+j,cy+k,A[cx+j][cy+k]);
					}
					if(f2==0) {break;}
				}
				if(f1==1&&f2!=0) record++;
				else if(f1==1&&f2==0) break;
				//printf("record:%d$",record);
				else break;
			}
		
			printf("%d\n",2*record+1);
		}
		//printf("")
		//test
		/*for(int j=0;j<m;j++)
		{
			for(int k=0;k<n;k++)
				printf("%c",A[j][k]);
			printf("\n");	
		}*/
		//for() 
	}
	return 0;	
} 
