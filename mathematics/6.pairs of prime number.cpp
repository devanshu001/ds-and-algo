#include <bits/stdc++.h>
using namespace std;
vector<int> seivePrime(int n){
    int sieve[n+1];
    memset(sieve,0,sizeof(sieve));
    for(int i=2;i*i<=n;i++){
        if( !sieve[i])
{        for(int k=i*i;k<=n;k+=i){
            sieve[k]=true;
        }
        
}    
        
    }
    vector<int> primes;
    for(int i=2;i<=n;i++){
        if(!sieve[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int num;
	    cin>>num;
	    vector<int> primes=seivePrime(num);
	    for(int i=0;i<primes.size();i++){
	        for(int j=0;j<primes.size() && primes[j]*primes[i]<=num;j++){
	            cout<<primes[i]<<" "<<primes[j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}