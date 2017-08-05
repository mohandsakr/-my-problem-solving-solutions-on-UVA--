//============================================================================
//problem link:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051
// Name        : 10110-.cpp
// Author      : Mohand Sakr
// Version     :
// Copyright   : use the code under you responsibility
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 long long n;
	 while(cin>>n&&n)
	 {
		 long long root=sqrt(n);
		 if(root*root==n){
			 cout<<"yes\n";
		 }
		 else
			 cout<<"no\n";
	 }
	return 0;
}
