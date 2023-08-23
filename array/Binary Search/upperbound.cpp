#include<bits/stdc++.h>
using namespace std;

int Upperbound( vector<int> &arr, int n, int x){
    int low =0, high = n-1;
    int ans = n;

    while( low <= high){
        int mid = (low+high)/2;
        if( arr[mid] > x){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    vector<int> a = {4,6,8,9,11,12};
    int n = 5;
    int x = 10;
    int ind = Upperbound(a,n,x);
    cout<<" the Upper Bound will present at the index "<< ind << endl;
    return 0;
}