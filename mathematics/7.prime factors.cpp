#include <bits/stdc++.h>
#include <map> 
  
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
vector<int> primeFactors(int n){
    map<int, bool> factors; 
    vector<int> factorV;
    int num=n;
     while (num % 2 == 0)  {
        factors[2]=true;
        num=num/2;
    }
   for(int i = 3; i <= sqrt(num); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (num % i == 0){
            factors[i]=true;
            num=num/i;
        }
    }
    if(num>2){
        factors[num]=true;
    }
    for (map<int, bool>::iterator itr = factors.begin(); itr != factors.end(); ++itr) { 
        factorV.push_back( itr->first );
        // cout<<"ads"<<itr->first<<" ";
    } 
    return factorV;
}

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int num;
	    cin>>num;
	   // vector<int> primes=seivePrime(num);
	   //vector<int> primes(num+1);
	   vector<int> primes=primeFactors(num);
	    for(int i=0;i<primes.size();i++){
	        cout<< primes[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}