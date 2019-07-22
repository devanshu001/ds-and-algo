#include<bits/stdc++.h> 
using namespace std; 

// Utility function to check number of elements 
// having set msb as of pattern 
int checkBit(int currPattern, int arr[], int n) 
{ 
    // int currPattern=1<<setBit;
	int count = 0; 
	for (int i = 0; i < n; i++) 
		if ((currPattern & arr[i]) ==currPattern) 
			count++; 
	return count; 
} 

// Function for finding maximum and value pair 
int maxAND (int arr[], int n) 
{ 
	int res = 0, count; 

	// iterate over total of 30bits from msb to lsb 
	for (int bit = 31; bit >= 0; bit--) 
	{ 
		// find the count of element having set msb 
		count = checkBit(res | (1 << bit),arr,n); 

		// if count >= 2 set particular bit in result 
		if ( count >= 2 ){		 
			res |= (1 << bit);		 
		  //  cout<< "count="<<count <<"res="<<res <<"bit="<<bit;
		}
			
	} 

	return res; 
} 

// Driver function 
int main() 
{ 
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int arraySize;
	    cin>>arraySize;
	    int array[arraySize];
	    for(int j=0;j<arraySize;j++){
	        cin>>array[j];
	    }
	    cout<<maxAND(array,arraySize)<<endl; 
	}
	
	return 0; 
} 
