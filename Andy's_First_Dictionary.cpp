//============================================================================
//problem solving :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756
// Name        : Andy's_First_Dictionary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :
//============================================================================

#include "string"
#include <iostream>
#include <vector>
#include<set>
#include<algorithm>
using namespace std;

int main() {
	string x;
	set<string>w;
	set<string >::iterator it;
	while(cin>>x){
		string s2;
		int stringsize=x.length();
		for(int i=0;i<stringsize;i++){
			if(isupper(x[i])){
				s2+=tolower(x[i]);
			}
			else if(islower(x[i])){
				s2+=x[i];
			}

		}


	w.insert(s2);
         }


	for( it=w.begin(); it!=w.end(); ++it){
		cout<<*it<<endl;
	}

	return 0;
}
