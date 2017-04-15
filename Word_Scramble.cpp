//============================================================================
//problem link:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=424
// Name        : Word_Scramble.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :
//============================================================================

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
	 string s1,s2;
	 int index;
	 while(getline(cin,s1)){
	 index=s1.find(" ");
	 while(index!=-1){
		 int sublength=(index-0);
		for(int j=index;j>=0;j--){
			s2+=s1[j];
		}
		s1.erase(0,sublength+1);
		index=s1.find(" ");
	 }
	 s2+=" ";
	 if(index==-1){
		 int x=s1.length()-1;
		 for(int i=x;i>=0;i--){
			 s2+=s1[i];
		 }
	 }
	 s2.replace(0,1,"");
	 cout<<s2<<endl;
	 s2="";
	 }




	return 0;
}
