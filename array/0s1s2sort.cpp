// SORT AN ARRAY OF 0s,1s,2s (Better Approach)
/*#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n){
    int cnt = 0, cnt1 = 0, cnt2 = 0;
    for( int i=0; i<n; i++){
        if(arr[i] == 0) cnt++;
        else if(arr[i] ==1) cnt1++;
        else cnt2++;
    }
//replace the places in the original array:
for(int i =0; i<cnt; i++) arr[i] = 0;

for(int i=cnt; i<cnt+cnt1; i++)arr[i] = 1;

for(int i= cnt+cnt1; i<cnt2; i++) arr[i] = 2;
}
int main()
{
   int n = 6;
   vector<int> arr = {0,1,2,0,0,1};
   sortArray(arr, n);
   cout<<"After sorting"<< endl;
   for(int i =0; i<n; i++) {
    cout<< arr[i] <<" ";
   } 
   cout<<endl;
   return 0;
}*/

// Optimal Solution

#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n){
    int low = 0, mid = 0, high = n-1; //3 pointers

    while(mid <= high){
        if(arr[mid] ==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;

        }
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
 int main()
 {
    int n = 6;
    vector<int> arr = { 2,2,0,0,1,1};
    sortArray(arr, n);
    cout<<"After sorting:" << endl;
    for(int i =0; i<n; i++){
        cout<< arr[i] <<" ";

    }
    cout<< endl;
    return 0;
 }