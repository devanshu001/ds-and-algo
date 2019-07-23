using namespace std;
#define llt long long

llt factorial(llt n){
    if(n<=1) return 1;
     return n*factorial(n-1);
}  

int main() {
    llt T;
	cin>>T;
	for(llt i=0;i<T;i++){
	    llt num;
	    cin>>num;
	    cout<<factorial(num)<<endl;
	}
	return 0;
}