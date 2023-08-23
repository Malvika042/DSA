//BINARY SEARCH (ITERATION METHOD)
/*#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> & nums, int target){
    int n = nums.size();
    int low =0, high = n-1;

    while(low< high){
        int mid = (low+high)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) low = mid+1;
        else high = mid -1;

    }
    return -1;
}
int main()
{
    vector<int> a ={1,3,4,6,8,9};
    int target = 8;
    int ind = BinarySearch(a,target);
    if(ind == -1) cout<<"The Target not Present" <<endl;
    else cout<<"The Target is present at index" << ind <<endl;
    return 0;
}*/

//RECURSIVE METHOD

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& nums, int low, int high, int target){
    if(low>high) return -1;

    int mid = (low+high)/2;
    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) 
    return BinarySearch(nums, mid+1, high, target);
    return BinarySearch(nums, low, mid-1, target);
    } 

    int search(vector<int> & nums, int target) {
        return BinarySearch(nums,0,nums.size()-1, target);

    }
    int main()
    {
        vector<int> a ={ 3,5,7,8,9};
        int target = 9;
        int ind = search(a, target);
        if(ind ==-1) cout<<"The target is not present" << endl;
        else cout<< "the target is at index" <<ind <<endl;
        return 0;
    }
