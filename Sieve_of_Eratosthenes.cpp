#include<iostream>
using namespace std;

void sieve(int n){
    //intializing all the values 0
    //we are comparing the index and using the values 0 and 1 as flags to know the which numbers are prime
    int prime[60]={0};

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[i]=1;
            }
        }
    }

    //here we are printing the index
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}

int main(){
//input the limit/last number
    int n;
    cin>>n;

    sieve(n);

    return 0;
}