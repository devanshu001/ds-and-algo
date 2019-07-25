#include <bits/stdc++.h>
using namespace std;

void printCombinations(int d_index,string res,vector<int> D,vector<string> keys){
    if(d_index==D.size()) {
        cout<<res<<" ";
        return;
    }
    // for(int i=d_index;i<D.size();i++){
        string currStr(keys[D[d_index]]);
        for(int j=0;j<currStr.size();j++){
            res.push_back(currStr[j]);
            printCombinations(d_index+1,res,D,keys);
            res.pop_back();
        }
    // }
    return;
}

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    vector<int> D;
	    for(int j=0;j<N;j++){
	        int temp;
	        cin>>temp;
	        D.push_back(temp);
	    }
	    vector<string> keys{"","","abc","def","ghi","jkl","mno",
	    "pqrs","tuv","wxyz",""};
	    string res("");
	    printCombinations(0,res,D,keys);
	    cout<<endl;
	}
	return 0;
}