//Counting sort is a sorting technique based on thekeys between a specific range.
//It works by counting the number of objects having distinct key values

#include<iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define RANGE 200

//function to sort
void countSort(char arr[]){
    //output array
    char output[strlen(arr)];
    //count array to store count of each char
    int count[RANGE+1],i;
    memset(count,0,sizeof(count));
    //store count of each char
    for(i=0;arr[i];++i){
        ++count[arr[i]];
    }

    //changing so that contains actually positions
    for (i = 1; i <= RANGE; ++i){
        count[i] += count[i - 1];
    }

    //Build the output char array
    for (i = 0; arr[i]; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }

    //output array to actual array
    for (i = 0; arr[i]; ++i){
        arr[i] = output[i];
    }
}

int main(){

    char arr[]="Tushar Kant Behera";
    countSort(arr);

    cout<<"Sorted character array "<<arr;

    return 0;
}