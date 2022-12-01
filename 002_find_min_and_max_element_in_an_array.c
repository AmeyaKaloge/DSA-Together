pair<long long, long long> getMinMax(long long a[], int n) {
    ll minElement=INT_MAX, maxElement=INT_MIN;
    
    for(int i=0;i<n;i++){
        minElement=min(minElement,a[i]);
        maxElement=max(maxElement,a[i]);
    }
    
    return {minElement,maxElement};
}
