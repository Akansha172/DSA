#include<iostream>
#include<algorithm>
using namespace std;

class solution{
    public:
       int getKthMinimum(int arr[],int s,int l,int k){
           sort(arr, arr+l);
           return arr[k-1];
       }
};

int main(){
    
    int test_case;
    cin >> test_case;
    while(test_case--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    solution obj;
    cout<<obj.getKthMinimum(arr,0,n,k);
}

    return 0;
}