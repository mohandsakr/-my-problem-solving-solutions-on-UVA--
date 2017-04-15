//============================================================================
//problem link:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2905
// Name        : Bafana_Bafana.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
 #include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int c=0;
	while(t--){
		++c;
		int n,k,p;
		cin>>n>>k>>p;
		int val =k+p;
		while(val>n){
			 val-=n;
		}


			cout<<"Case "<<c<<": "<<val<<endl;
		}


	return 0;
}

