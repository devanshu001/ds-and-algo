using namespace std;
#define ll long long
ll squares(ll n){
    return n*(n+1)*(2*n+1)/6;
}

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    ll side;
	    cin>>side;
	    cout<<squares(side)<<endl;
	}
	return 0;
}