#include <bits/stdc++.h>
using namespace std;
string primality(int n){
    if(n<=1){
        return "No";
    }
    if(n<=3){
        return "Yes";
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return "No";
    }
    return "Yes";
}

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int num;
	    cin>>num;
	    cout<<primality(num)<<endl;
	}
	return 0;
}