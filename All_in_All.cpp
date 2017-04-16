//============================================================================
//problem link : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1281
// Name        : All_in_All.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================


#include <iostream>
#include<string>
using namespace std;

int main() {
	 string s1,s2;
	 while(cin>>s1>>s2 ){
		 bool flag=true;
		 int s1len=s1.length();
		 int s2len=s2.length();
		 for(int i=0;i<s1len;i++){
			 char target=s1[i];
			 int index=s2.find(s1[i]);
			 if(index==-1){
				  flag=false;
			 }
			 else
			 {
				int char_to_clear=(index-0)+1;
				 s2.erase(0,char_to_clear);

			 }

		 }
		 if(flag)
		 {
			 cout<<"Yes\n";
		 }
		 else
		 {
			cout<<"No\n";
		 }




	 }
	return 0;
}
