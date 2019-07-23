using namespace std;
#define ll long long

ll gcd(ll a,ll b){
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
    ll num1,num2;
    cin>>num1;
    cin>>num2;
  ll gcd1=gcd(num1,num2);
  ll lcm=num1*num2/gcd1;
  cout<<lcm<<" "<<gcd1<<endl;
}
return 0;
}