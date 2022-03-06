//it is derived from insertion sort order
//but in shell sort we compare distinct elements

#include<iostream>
using namespace std; 

//to shell sort the array
int shellsort(int arr[],int n){
    //comapring the 2 distinct element(over a gap)
    for(int gap=n/2;gap>0;gap/=2){
        for(int i=gap;i<n;i++){
            int temp=arr[i];
            //shifting gap-sorted elements to the correct position
            int j;
            for(j=1;j>=gap && arr[j-gap]>temp;j-=gap){
                arr[j]=arr[j-gap];
            }
            arr[j]=temp;
        }
    }
    return 0;
}

//to print the array
void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}

int main(){
    //size of the array
    int n;
    cin>>n;
    //creating and storing the values of the array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    shellsort(arr,n);
    print(arr,n);

    return 0;
}

