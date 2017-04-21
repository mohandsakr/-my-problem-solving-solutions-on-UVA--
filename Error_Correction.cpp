//============================================================================
//problem link:https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=482
// Name        : Error_Correction.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
using namespace std;
int changerow(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]==-1)
			return i;
	}
}
int changecoloumn(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]==-1)
			return i;
	}
}
int main() {

	int n;
	 while(cin>>n&&n){
	int arr[n][n];
	int sumrow[n]={};
	int oddrows=0,oddcoulums=0;
	int sumcoulumn[n]={};
	for(int i=0;i<n;i++){
	 for(int j=0;j<n;j++){
			cin>>arr[i][j];
	 }}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sumrow[i]+=arr[i][j];
			sumcoulumn[i]+=arr[j][i];
		}

	}
	for(int i=0;i<n;i++)
	{
		if(sumcoulumn[i]%2==1){
			oddcoulums++;
			sumcoulumn[i]=-1;
		}
		if(sumrow[i]%2==1){
					oddrows++;
					sumrow[i]=-1;
				}
	}
	if(oddrows>1||oddcoulums>1){
		cout<<"Corrupt"<<endl;
	}
	else if(oddrows==0){
		cout<<"OK"<<endl;
	}
	else if(oddcoulums==0&&oddrows==0){
		cout<<"Corrupt"<<endl;
	}
	else{
		 int r=changerow(sumrow,n);
		 int c=changecoloumn(sumcoulumn,n);
		 cout<<"Change bit ("<<r+1<<","<<c+1<<")"<<endl;
	}







	 }
	return 0;
}
