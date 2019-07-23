using namespace std;
#define ll long long

int gcd(int a,int b){
    if(a==0) return b;
    if(a>b){
        return gcd(a%b,b);
    }
    return gcd(b%a,a);
}
int main() {
int T;
cin>>T;
for(int i=0;i<T;i++){
    int size;
    cin>>size;
    int array[size];
    ll gcd1;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
        gcd1=array[0];
    for(int i=1;i<size;i++){
        gcd1=gcd(gcd1,array[i]);
    }
   
  cout<<gcd1<<endl;
}
return 0;
}