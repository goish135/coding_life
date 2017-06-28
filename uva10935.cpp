#include<stdio.h>
int main()
{
	int size;
	while(scanf("%d",&size)&&size!=0){
	int A[size*2]={0};
	//int head=0,tail=size;
	
	for(int i=0;i<size;i++)
	{
		A[i]=i+1;
		//printf("%d$",A[i]);	
	}
	printf("Discarded cards: ");
	int head=0,tail=size;
	int f = 1;
	while((tail-1)!=head){
		if(f) { printf("%d",A[head]);f=0; }
		else printf(", %d",A[head]);
		A[tail]=A[head+1];
		head+=2;
		tail++;
	}
	printf("\n");
	printf("Remaining card: ");
	printf("%d\n",A[tail-1]);
}
	return 0;
}
