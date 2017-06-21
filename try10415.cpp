#include<stdio.h>
#include<string.h>
int main(){
	char c[12]="00111001111";
	char d[12]="00111001110";
	char e[12]="00111001100";
	char f[12]="00111001000";
	char g[12]="00111000000";
	char a[12]="00110000000";
	char b[12]="00100000000";
	char C[12]="00010000000";
	char D[12]="01111001110";
	char E[12]="01111001100";
	char F[12]="01111001000";
	char G[12]="01111000000";
	char A[12]="01110000000";
	char B[12]="01100000000";
	/*for(int i=1;i<11;i++) printf("%c",c[i]);
	printf("\n");*/
	int tc;
	scanf("%d",&tc);
	getchar();
	while(tc--){
		char ch;
		/*char B[12]="01100000000";*/
		char n[12]="00000000000";
		int count[12]={0};
		while(scanf("%c",&ch)==1){
			if(ch=='\n') break;
			printf("ch:%c\n",ch);
			if(ch=='c') {
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&c[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = c[j];
					n[j] = temp;
				}
			}
			else if(ch=='d'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&d[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = d[j];
					n[j] = temp;
				}
			}
			else if(ch=='e'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&e[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = e[j];
					n[j] = temp;
				}
			}
			else if(ch=='f'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&f[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = f[j];
					n[j] = temp;
				}
			}
			else if(ch=='g'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&g[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = g[j];
					n[j] = temp;
				}
			}
			else if(ch=='a'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&a[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = a[j];
					n[j] = temp;
				}
			}
			else if(ch=='b'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&b[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = b[j];
					n[j] = temp;
				}
			}
			else if(ch=='C'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&C[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = C[j];
					n[j] = temp;
				}
			}
			else if(ch=='D'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&D[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = D[j];
					n[j] = temp;
				}
			}
			else if(ch=='E'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&E[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = E[j];
					n[j] = temp;
				}
			}
			else if(ch=='F'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&F[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = F[j];
					n[j] = temp;
				}
			}
			else if(ch=='G'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&G[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = G[j];
					n[j] = temp;
				}
			}
			else if(ch=='A'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&A[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = A[j];
					n[j] = temp;
				}
			}
			else if(ch=='B'){
				for(int i=1;i<=10;i++) {
					if(n[i]=='0'&&B[i]=='1') count[i]++; // 0->1 
				}
				for(int j=1;j<=10;j++) {
					char temp = B[j];
					n[j] = temp;
				}
			}
		}
		printf("%d",count[1]);
		for(int k=2;k<=10;k++){
			printf(" %d",count[k]);
		}
		printf("\n");
	}
	return 0;
} 
