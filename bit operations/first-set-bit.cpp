#include <bits/stdc++.h> 
using namespace std;

int rightMostSetBit(int n){
    if(!n) return 0;
    int position=log(n&(~n+1))/log(2) ;
    // while(!(n&1)){
    //     n>>=1;
    //     count++;
    // }
    // cout<<position;
    return position+1;
}

int main() {
    int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int num;
	    cin>>num;
	    cout<<rightMostSetBit(num)<<endl;
	}
	return 0;
}