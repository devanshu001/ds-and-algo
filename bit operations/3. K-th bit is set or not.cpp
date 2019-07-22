using namespace std;


int main() {
    int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    long long num1;
	    int num2;
	    cin>>num1;
	    cin>>num2;
	    if((1<<num2)&num1){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}