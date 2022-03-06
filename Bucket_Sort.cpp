//it is use when the inpt is uniformly distributed over the whole
//we don't compare the actual elements
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void bucket(int arr,int n){
    //new empty buckets
    vector<int> b[n];

    //put array (arr) values in different buckets
    for(int* i=0;*i<n;i++){
        //index in bucket
        int index=n*arr[i];
        b[index].push_back(arr[i]);
    }

    //sorting the individual bucket_sort
    for(int i=0;i<n;i++){
        sort(b[i].begin(),b[i].end());
    }
    
    //joining all the buckets into the array
    int *indexarr=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<b[i].size();j++){
            arr[indexarr++]=b[i][j];
        }
    }

}

int main(){

    //size of array 
    int n;
    cin>>n;
    
    //entering the values of the array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bucket(* arr ,n);

    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
