#include<iostream>
using namespace std;


// Normal Method:

// int main(){
//     int n;//size of the array
//     cin>>n;
//     int arr[n];
//     // input the array
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // display the original array
//     cout<<"original array"<<endl;
//     cout<<"{";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<", ";
//     }
//     cout<<"}"<<endl;
//     // reverse the array 
//     cout<<"reversed Array"<<endl;
//     cout<<"{";
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<", ";
//     }
//     cout<<"}";
//     return 0;
// }
// int main(){
//     int n;//size of the array
//     cin>>n;
//     int arr[n];
//     // input the array
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // display the original array
//     cout<<"original array"<<endl;
//     cout<<"{";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<", ";
//     }
//     cout<<"}"<<endl;
//     // reverse the array 
//     cout<<"reversed Array"<<endl;
//     cout<<"{";
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<", ";
//     }
//     cout<<"}";
//     return 0;
// }


// Iterative method:

// int main(){

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int start =0;
//     int end=n-1;
//     for(int i=0;i<n/2;i++){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start = start +1;
//         end = end-1;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// Recursive method :

// void reverseArray(int arr[],int start,int end){
//     if(start>=end)return;
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
//     reverseArray(arr,start,end);
// }

// int main(){
    
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     reverseArray(arr,0,n-1);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;

// }

