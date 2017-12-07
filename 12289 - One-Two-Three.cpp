//============================================================================
//problem link:https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3710
// Name        : 12289.cpp
// Author      : Mohand Sakr
// Version     :
// Copyright   : ude the code under you resposibity
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
#include<string>
#include <iostream>
using namespace std;
bool isone(string s){
	int counter=0;
	if(s[0]=='o')
		++counter;
	if(s[1]=='n')++counter;
	if(s[2]=='e')++counter;
	if(counter>=2)return 1;
	else return 0;
}
/*bool istwo(string s){
	int counter=0;
	if(s[0]=='t')++counter;
	if(s[1]=='w')++counter;
	if(s[2]=='o')++counter;
	if(counter>=2)return 1;

}*/
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()==5){cout<<"3";}
		else if(isone(s))cout<<"1";
		else cout<<"2";
		cout<<"\n";


	}



	return 0;
}
