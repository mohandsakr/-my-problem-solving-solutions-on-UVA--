//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223
// Name        : Babelfish.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
#include<string>
#include <iostream>
#include<map>
#include<sstream>
#include<vector>
using namespace std;
map <string ,string> dictionary;
vector<string> neededvalue;

void fillthemap(string str){
	stringstream mycin(str);
	string mapvalue,mapkey;
	while(mycin>>mapvalue>>mapkey){
		dictionary[mapkey]=mapvalue;
	}
}
int main() {
	string str1,str2;
	int vectorsize;
	while(getline(cin,str1)&&(str1!="\0")){
		fillthemap(str1);
	 }
	while(cin>>str2){
		neededvalue.push_back(str2);
		}
	vectorsize=neededvalue.size();
	for(int i=0;i<vectorsize;i++){
		string val=dictionary[neededvalue[i]];
		if(val=="")
		{
			cout<<"eh"<<endl;
		}else{
			cout<<val<<endl;
		}
	}


	return 0;
}
