//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2349
// Name        : Parking.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--){
		 int n;
		 cin>>n;
		 int result=0;
		 int arr[n];
		 for(int i=0;i<n;i++){
			 cin>>arr[i];
		 }
		 sort(arr,arr+n);

		 for(int i=0;i<n-1;i++){
			 result+=(arr[i+1]-arr[i]);

		 }
		 cout<<result*2<<endl;
	 }
	return 0;
}

