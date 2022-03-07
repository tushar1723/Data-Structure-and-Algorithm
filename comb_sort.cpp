//comb sort is the improved version of bubblesort
//it uses gap and continuously reduces the gap by 1

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int next_gap(int gap){
    gap=(gap*10)/13;

    if(gap<1)
      return 1;
    return gap;
}

void comb_sort(int a[],int n){
    int gap=n;
    bool swapped=true;
    while(gap!=1 || swapped ==true){
        gap=next_gap(gap);
        swapped=false;
        for(int i=0;i<n-gap;i++){
            if(a[i]>a[i+gap]){
                swap(a[i],a[i+gap]);
                swapped=true;
            }
        }
       
    }
}


int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];

    comb_sort(a,n);

    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++)
     cout<<a[i]<<endl;
     
    return 0;	
}