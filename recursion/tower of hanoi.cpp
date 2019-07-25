using namespace std;

int towerOfHanoi(int a, int b, int c,int n){
    if(n==1){
        cout<<"move disk 1 from rod "<<a<<" to rod "<< c<<endl;
        return 1;
    }
    
    // cout<<"move disk "<<i<<" from rod "<<a<<" to rod "<< b;
    int t=towerOfHanoi(a,c,b,n-1);
        
    cout<<"move disk "<<n<<" from rod "<<a<<" to rod "<< c<<endl;
    
    // cout<<"move disk "<<i<<" from rod "<<b<<" to rod "<< c;
     return towerOfHanoi(b,a,c,n-1)+1+t;
}

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int n;
	    cin>>n;
	    cout<<towerOfHanoi(1,2,3,n)<<endl;
	}
	return 0;
}