#include <bits/stdc++.h>
#include <vector> 
#define ll long long 
using namespace std;


vector<int> simpleSieve(int n){
    int prime[n+1];
    memset(prime,1,sizeof(prime));
    vector<int> primes;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

vector<int> segmentedSieve(int n){
    int range=floor(sqrt(n))+1;
    int low=range;
    int high=range*2;
    vector<int> primes=simpleSieve(range);
    vector<int> primeRes(primes.begin(),primes.end());
    while (low < n) 
    { 
        if (high >= n)  
           high = n; 
        int primeRange[range+1];
        memset(primeRange,0,sizeof(primeRange));
        for(int i=0;i<primes.size();i++){
            int lowestMultiple=floor(low/primes[i]);
            
            if(lowestMultiple*primes[i]<low)
                lowestMultiple+=1;
                
                // int highestMultiple=floor(high/primes[i]);
                // cout<<"lowM="<<lowestMultiple<<" highM="<<highestMultiple<<endl;
                for(int j=lowestMultiple*primes[i];j<high;j+=primes[i]){
                    primeRange[j-low]=1;
                    // cout<<"value="<<j<<" ";
                }
                // cout<<endl;
        }
        for(int i = low; i<high; i++) {
            // cout<<"num="<<i+low<<"primality="<<primeRange[i]<<endl;
            if(!primeRange[i-low]){
                primeRes.push_back(i);
                // cout<<i+low<<" "<<endl;
            }
        }
        low+=range;
        high+=range;
    }
   return primeRes;
}
int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
        ll num;
    	cin>>num;
    	vector<int> primes=simpleSieve(sqrt(num));
    // 	vector<int> primes=segmentedSieve(sqrt(num));
    	int count=0;
    	for(int i=0;i<primes.size() && primes[i]*primes[i]<=num;i++){
    	    count++;
    	}
    	cout<<count<<endl;
	}
	return 0;
}