//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=289
// Name        : Pesky_Palindromes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================

#include <iostream>
#include <algorithm>
#include <list>
#include<set>
#include<string>
using namespace std;
bool isbalndrom(string s){
	string s2=s;
	reverse(s.begin(),s.end());
	if(s==s2)
		return true;
	else
		return false;
}
int main () {
	string s;

  while(cin>>s){

	 int count=0;
	 set<string>substrings ;
	 set<string>::iterator it;
	 string s2=s;
	 int slength=s2.length();
	 for(int i=1;i<=slength;i++ ){
		 for(int j=0;j<=slength;j++){
			 substrings.insert(s2.substr(j,i));
		 }
		 }
	 for(it=substrings.begin();it!=substrings.end();it++)
	 {  //cout<<"what in the set "<<*it<<endl;
	 if(*it!=""){
		 if(isbalndrom(*it)){
			 count++;
		 }}
	 }
	 cout<<"The string '"<<s<<"' contains "<<count<<" palindromes."<<endl;






 }

  return 0;
}
