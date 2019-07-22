using namespace std;
int countSetBits(int num){
    int count=0;
    if(!num) return count;
    while (num){
        num=num&(num-1);
        count++;
    }
    return count;
}

int main() {
int T;
cin>>T;
for(int i=0;i<T;i++){
    int num;
    cin>>num;
    int totalSetBits=0;
    
    
    for(int i=1;num && i<=num;i++){
        totalSetBits+=countSetBits(i);
    }
        
        cout<<totalSetBits<<endl;
    
}
}