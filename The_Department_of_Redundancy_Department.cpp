//============================================================================
//problem link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=425
// Name        : The_Department_of_Redundancy_Department.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	 map<int,int>values;

	 vector<int>v;
	 int vlength;

		 int n;
		 while(cin>>n){
			 if(find(v.begin(),v.end(),n)==v.end()){
				 v.push_back(n);
			 }
				 values[n]+=1;
			 }
		 vlength=v.size();
		 for(int i=0;i<vlength;i++){
			 cout<<v[i]<<" "<<values[v[i]]<<endl;
		 }
	return 0;
}
