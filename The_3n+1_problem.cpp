//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36
// Name        : The_3n+1_problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
using namespace std;
long long cyclelenth(int n){
	int counter=1;
	if(n==1){
		return 1;
	}
	else{

	while(n!=1){
	if(n%2==0)
	{
		n=n/2;
		counter++;
	}

	else{
		n=3*n+1;
		counter++;
		}

	}
	return counter;
	}
}
int main() {
	int val1,val2;
	while(cin>>val1&&cin>>val2){
		 int start,end;
		 if(val1>val2){
			 start=val2;
		     end=val1;
		 }
		 else
		 {
			 start=val1;
			 end=val2;
		 }
		int max=0;
		for(int i=start;i<=end;i++){
			long long x=cyclelenth(i);
			if(x>max){
				max=x;
			}
		}

		cout<<val1<<" "<<val2<<" "<<max<<endl;
	}

	return 0;
}
