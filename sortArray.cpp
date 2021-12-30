#include<bits/stdc++.h>
using namespace std;

void sort (int arr[], int &n){
    vector <int> v;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            v.push_back(arr[i]);
        }
    } 
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            v.push_back(arr[i]);
        }
    } 
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            v.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        arr[i] = v.at(i);
    }
}


int main(){
  int test_cases;
  cin >> test_cases;
  while(test_cases--){
  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  }
  return 0;
}