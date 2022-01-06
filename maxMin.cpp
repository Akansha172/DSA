#include<iostream>
using namespace std;

struct Pair{
    int max;
    int min;
};

struct Pair getMinMax(int arr[],int n){
    struct Pair miniMax;
    if(n==1){
        miniMax.max = arr[0];
        miniMax.min = arr[0];
        return miniMax;
    }
    if(arr[0]>arr[1]){
        miniMax.max = arr[0];
        miniMax.min = arr[1];
    }else{
        miniMax.max = arr[1];
        miniMax.min = arr[0]; 
    }

    for(int i=2;i<n;i++){
        if(arr[i]>= miniMax.max){
            miniMax.max = arr[i];
        }
         else if(arr[i] <= miniMax.min){
            miniMax.min = arr[i];
        }
    }
   return miniMax;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    struct Pair minMax = getMinMax(arr, n);
    cout<<"Maximum in array is " << minMax.max <<" Minimum in array is " << minMax.min;
    return 0;
    }