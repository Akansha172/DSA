// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        int small_element,large_element;
        for(int i=0;i<n;i++){
            if(arr[i]-k < 0){
                arr[i]+=k;
            }else
            {
                arr[i]-=k;
            }
        }
       small_element = *min_element(arr,arr+n);
       large_element = *max_element(arr,arr+n);
       int ans =  large_element - small_element -1;
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends