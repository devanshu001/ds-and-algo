#include <bits/stdc++.h> 
using namespace std;

int rightMostSetBit(int n){
    if(!n) return 0;
    int position=log(n&(~n+1))/log(2) ;
    return position+1;
}

int main() {
    int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int num1,num2;
	    cin>>num1;
	    cin>>num2;
	    cout<<rightMostSetBit(num1^num2)<<endl;
	}
	return 0;
}