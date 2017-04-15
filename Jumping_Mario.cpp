//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2864
// Name        : Jumping_Mario.cpp
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
	int counter=0;
	while(t--){
		++counter;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int lowerjump=0;
	int highjump=0;
	int current=arr[0];
    for(int i=1;i<n;i++){
		if(arr[i]>current){
			highjump++;
		}
		if(arr[i]<current){
			lowerjump++;
		}
		current=arr[i];
	    }
    cout<<"Case "<<counter<<": "<<highjump<<" "<<lowerjump<<endl;


	}
	return 0;
}

