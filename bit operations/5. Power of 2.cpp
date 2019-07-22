using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    long long int num;
	    cin>>num;
	    if(!num || num&(num-1)){
	        cout<<"NO"<<endl;
	    }else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}