// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends
// class Solution{
//     public:
//     // arr: input array
//     // n: size of array
//     //Function to find the sum of contiguous subarray with maximum sum.
//     long long maxSubarraySum(int arr[], int n){
        
//        int currSum=0;
//        int maxSum = 0;
       
//        for(int i=0;i<n;i++){
//            currSum = currSum + arr[i];
//            if(currSum>maxSum){
//                maxSum = currSum;
//            }
//            if(currSum<0){
//                currSum=0;
//            }
//        }
//        return maxSum;
        
//     }
// };

// // { Driver Code Starts.

// int main()
// {
//     int t,n;
    
//     cin>>t; //input testcases
//     while(t--) //while testcases exist
//     {
        
//         cin>>n; //input size of array
        
//         int a[n];
        
//         for(int i=0;i<n;i++)
//             cin>>a[i]; //inputting elements of array
            
//         Solution ob;
        
//         cout << ob.maxSubarraySum(a, n) << endl;
//     }
// }
//   // } Driver Code Ends


// Second Approach if all the Elements are Negaive:

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
       int currSum=arr[0];
       int maxSum = arr[0];
       
       for(int i=1;i<n;i++){
           currSum = max(arr[i],currSum+arr[i]);
           maxSum = max(maxSum,currSum);
       }
       return maxSum;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends