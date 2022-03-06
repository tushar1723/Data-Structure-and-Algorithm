//In radix sort we do digit by digit sort starting from LSD to MSD
//we dont actually comapre 2 numbers or elements of the array
//it uses counting sort as a subroutine to sort elements
//it is better than comaprision based sorting algorithm 

#include<iostream>
using namespace std;


//to get the maximum value of array
int Max(int arr[],int n){
    //considering the first element to be max element
    int max=arr[0];

    //comparing each element to get the max element
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;	
}

//function to do counting sort of arrays
//digit represented by digit number.

void countSort(int arr[], int n,int exp){
    //resulting array
    int output[n];
    int i;
    
    //array to store the count of occurence
    int count[10]={0};
    for(i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }

    //changing the count so that they can contain actual position of digits
    for(i=1;i<10;i++){
        count[i]+=count[i=1];
    }

    for(i=(n-1);i>=0;i++){
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }

    //copying the values to original array
    for(i=0;i<n;i++){
        arr[i]=output[i];
    }
}


void radix(int arr[],int n){
    int m=Max(arr,n);
    //passing the values for comparision
    for(int exp=1;m/exp>0;exp*=10){
        countSort(arr,n,exp);
    }
}


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    //size of array
    int n;
    cin>>n;
    //create and allocating values to the array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    radix(arr,n);
    print(arr,n);

    return 0;
}