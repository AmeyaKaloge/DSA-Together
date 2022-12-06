#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    int search(int a[],int low,int high,int k){
        if(high<low) return -1;
        
        int mid=(low+high)/2;
        
        if(a[mid]==k)
        return mid;
        
        else if(a[mid]<k)
        return search(a,mid+1,high,k);
        
        else
        return search(a,low,mid-1,k);
    }
    int binarysearch(int arr[], int n, int k) {
        // code here
        return search(arr,0,n,k);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
