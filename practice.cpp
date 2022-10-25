#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a[7]={10,20,30,40,50,60,70};
    int n=7,k=3;
      for(int i=0;i<=n-k;i++){
        int sum=0;
        cout<<" i="<<i;
        for(int j=0;j<k;j++){
          sum+=a[i+j];  
            //cout<<sum<<" ";
        }
        cout<<sum<<" ";
    }
}