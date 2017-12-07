//============================================================================
//problem link:https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=424
// Name        : 483.cpp
// Author      : Mohand Sakr
// Version     :
// Copyright   : ude the code under you resposibity
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
#include <iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main() {
	string s;

while(getline(cin,s)){
	vector<string>vect;
	stringstream mycin(s);
	string y;

	while(mycin>>y){
		reverse(y.begin(),y.end());
		vect.push_back(y);
	}
	int v=vect.size();
	for(int i=0;i<v-1;i++){
		cout<<vect[i]<<" ";
	}
	cout<<vect[v-1];
	cout<<"\n";






}

	return 0;
}
