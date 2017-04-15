//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1724
// Name        : Odd_Sum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================

 #include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int count=0;
	while(t--){
		++count;
		int a,b;
		cin>>a>>b;
		int sum=0;
		for(int i=a;i<=b;i++){
			if(i%2!=0){
				sum+=i;
			}
		}

		cout<<"Case "<<count<<": "<<sum<<endl;

	}
	return 0;
}
