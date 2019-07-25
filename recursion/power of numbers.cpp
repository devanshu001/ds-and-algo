using namespace std;
#define modN 1000000007

int reverseNumber(int n){
    int reverse=0;
    while(n){
        reverse=reverse*10+n%10;
        n/=10;
    }
    return reverse;
}

long int modulo(int n,int p){
    if(p==1) return n%modN;
    
    long int modHalf=modulo(n,p/2);
    long int startM=n%modN;
    long int temp=(modHalf%modN * modHalf%modN)%modN;
    if(p&1){
        return (temp*startM)%modN;
    }
    return temp;
}
int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int n;
	    cin>>n;
	    cout<<modulo(n,reverseNumber(n))<<endl;
	}
	
	return 0;
}