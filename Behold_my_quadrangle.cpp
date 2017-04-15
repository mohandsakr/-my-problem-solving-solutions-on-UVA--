//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2450
// Name        : Behold_my_quadrangle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

 #include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int arr[4];
		for(int i=0;i<4;i++){
			cin>>arr[i];
			}
		sort(arr,arr+4);
		 if(arr[3]<(arr[0]+arr[1]+arr[2]))
		 {
			 if(arr[0]==arr[3])
				 cout<<"square"<<endl;
			 else if(arr[0]==arr[1]&&arr[2]==arr[3])
				 cout<<"rectangle"<<endl;
			 else
				 cout<<"quadrangle"<<endl;

		}else
			cout<<"banana"<<endl;

	}


	return 0;
}
