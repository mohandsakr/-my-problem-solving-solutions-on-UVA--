//============================================================================
//problem link:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=429
// Name        : Triangle_Wave.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
 #include <iostream>
using namespace std;
void printwave(int hight){
	for(int i=1;i<=hight;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
	for(int i=hight-1;i>0;i--){
			for(int j=0;j<i;j++){
				cout<<i ;
			}
			cout<<endl;
		}
}
int main() {
	 int n;
	 cin>>n;
	 while(n--){

		 int frequancy,hight;
		 cin>>hight>>frequancy;
		 while(frequancy--){
			 printwave(hight);
			 if(frequancy||n){
				 cout<<endl;
			 }
		 }



	 }
	return 0;
}
