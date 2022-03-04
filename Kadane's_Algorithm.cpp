//Kadane's Algorithm is mostly used in arrays ///
//for finding the maximum sum of contiguous subarray
//Complexity O(n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class sol{

    public:
    int maxsum(int arr[],int n){
    int res=arr[0];
    int maxv=arr[0];

   // continous comparsion btw the sum of subarray and the current value 
    for(int j=0;j<n;j++){
        maxv=max(maxv+arr[j],arr[j]);
        res=max(maxv,res);
    }
    //return the max value 
    return res;

}

};

int main(){
    //user choice length
    int n;
    cin>>n;

    //creating array and entering values from the user
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sol ob;
    
    cout<<ob.maxsum(arr,n)<<endl;   
   
    return 0;
}


