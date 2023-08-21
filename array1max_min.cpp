// array enter by user and find maximum and minimum number
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minN=INT_MAX;
    int maxN=INT_MIN;
    for(int i=0;i<n;i++){
        maxN = max(maxN,arr[i]);
        minN = min(minN,arr[i]);

    }
    cout<<maxN<<" "<<minN<<" "<<endl;
    return 0;
}