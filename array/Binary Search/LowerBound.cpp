// Implement Lower Bound (Brute force approach)
/*#include<bits/stdc++.h>
using namespace std;

int LowerBound( vector<int> arr, int n, int x) {
    for(int i = 0; i<n; i++){
        if(arr[i] >= x){
            return i;
        }
    }
    return n;
}
int main(){
    vector<int> arr ={ 4,6,7,9,12,33};
    int n = 6, x= 13;
    int ind = LowerBound(arr, n, x);
    cout<<"The Lower Bound is the index" <<ind <<"\n";
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             

}*/

// Optimal Approach
#include<bits/stdc++.h>
using namespace std;

int LowerBound( vector<int> arr, int n, int x){
    int low =0 , high = n-1;
    int ans = n;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] >= x) {
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid +1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = { 2,4,6,7,9,11,23};
    int n = 7, x = 9;
    int ind = LowerBound(arr, n, x);
    cout<<" the lower bond is the index"<< ind <<"\n";
    return 0;
}