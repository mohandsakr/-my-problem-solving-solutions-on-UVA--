//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2456
// Name        : Square_Numbers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
#include <iostream>
#include<cmath>
using namespace std;
bool isSquare(int n){
	double result1=sqrt(n);
	int result2=sqrt(n);
	if(result1-result2==0)
		return true;
	else
		return false;
}
int main() {
	 int start,end;
	 while(cin>>start>>end&&start&&end){
	 int counter=0;


	 for(int i=start;i<=end;i++){
		 if(isSquare(i)){
			 ++counter;
		 }
	 }
	 cout<<counter<<endl;}
	return 0;
}
