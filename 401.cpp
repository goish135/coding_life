//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;

int main(){
	map<char,char> form;
	form['A']= 'A'; form['E']='3';form['H']='H';form['I']='I';form['J']='L';
	form['M']= 'M'; form['O']='O';form['S']='2';form['T']='T';form['U']='U';
	form['V']= 'V'; form['W']='W';form['X']='X';form['Y']='Y';form['Z']='5';
	form['1']= '1'; form['8']='8';form['2']='S';form['3']='E';form['5']='Z';
	form['L']='J';
	
	char ch[20];
	char cha[20];//temp.
	while(scanf("%s",&ch)!=EOF){
		int len = strlen(ch);
		int flag = 1;//1 represents yes
		//judge whether is palindromes
		for(int i=0;i<len;i++){
			if(ch[i]!=ch[len-1-i]) flag = 0;// 0 rep. Not
		}
		//convert//start
		int f2=0;
		for(int j=0;j<len;j++){
			for(map<char,char>::iterator i=form.begin();i!=form.end();i++)
			{ 
				if(ch[j]==(i->first)){
					cha[j]=(i->second);//after convert
					//printf("cha:%c\n",cha[j]);//for test
					f2=1;
					break;
				}
				
			}
			if(f2==0) break;//when not found
		}
		//convert//end
		//int f3=1;
		for(int i=0;i<len;i++){
			if(cha[i]!=ch[len-1-i]) f2 = 0;// 0 rep. Not
		}				
		
		
		if(f2==0&&flag==1) printf("%s -- is a regular palindrome.\n\n",ch);
		else if(f2==0&&flag==0) printf("%s -- is not a palindrome.\n\n",ch);
		else if(f2==1&&flag==0) printf("%s -- is a mirrored string.\n\n",ch);
		else if(f2==1&&flag==1) printf("%s -- is a mirrored palindrome.\n\n",ch);
	}
	
	return 0;
}		
		
	
	
	
