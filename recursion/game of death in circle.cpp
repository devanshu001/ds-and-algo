using namespace std;

int safePosition(int n,int k){
    if(n==1) return 1;
    return (safePosition(n-1,k)+k-1)%n +1;
}

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int n,k;
	    cin>>n>>k;
	    cout<<safePosition(n,k)<<endl;
	}
	return 0;
}