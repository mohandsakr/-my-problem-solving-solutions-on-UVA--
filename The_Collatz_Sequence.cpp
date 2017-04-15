//============================================================================
//problem link :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=635
// Name        : The_Collatz_Sequence.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

 #include <iostream>
using namespace std;

int main() {
	long long a,l;int coun=1;
	while((cin>>a>>l)&&(a&&l>=0))
	{
		int val=a;
		int counter=1;
	   while (a!=1){

		if(a%2==0)
		{
			a=a/2;
		}
		else{
			a=a*3+1;
		}
		if(a>l){
			break;
		}
		counter ++;

	}
		cout<<"Case "<<coun<<": A = "<<val<<", limit = "<<l<<", number of terms = "<<counter<<endl;
        coun++;
	}







	 	return 0;
}
