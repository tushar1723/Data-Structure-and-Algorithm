//Pancake sorting is similar like selection sort


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//reverse the array
void flip(int arr[],int i) {
    int temp,start=0;
    while(start<i){
        temp=arr[start];
        arr[start]=arr[i];
        start++;
        i--;
    }
}

//return the index of max element
int findMax(int arr[],int n){
    int mi,i;
    for(mi=0,i=0;i<n;++i){
        if(arr[i]>arr[mi])
          mi=i;
    }
} 

void pancake(int *arr,int n){
    for(int curr_size=n;curr_size>1;--curr_size){
        int mi=findMax(arr,curr_size);
        if(mi!=curr_size-1){
            flip(arr,mi);
            flip(arr,curr_size-1);
        }
    }

}

void printArray(int arr[],int n){
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    pancake(arr,n);

    cout<<"Sorted Array"<<endl;
    printArray(arr,n);

    return 0;	
}