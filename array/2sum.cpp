//BRUTE-FORCE APPROACH
/*#include<bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int>&book, int target){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(book[i] + book[j] == target) return "YES";
        }
    }
    return "NO";
}

int main()
{
    int n =5;
    vector<int> book = {2,4,6,7,11};
    int target = 10;
    string ans = twoSum(n,book,target);
    cout<<"This is the answer for variant 1: "<<ans << endl;
    return 0;
}*/
// BRUTE-FORCE RETURN INDEX
/*#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int>&book, int target){
    vector<int> ans;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(book[i]+book[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
}
int main()
{
    int n=5;
    vector<int> book = {2,4,6,11,7};
    int target = 10;
    vector<int> ans = twoSum(n,book,target);
    cout<<"This is the answer for the varient 2" << ans[0]<<","<< ans[1] <<endl;
    return 0;
}*/
// BETTER APPROACH USING HASHING (VARIANT 1)
/*#include<bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &book, int target) {
    unordered_map<int, int> mpp;
    for(int i =0; i<n; i++){
        int num = book[i];
        int moreneeded = target - num;
        if(mpp.find(moreneeded) != mpp.end()){
            return "YES";
        }
        mpp[num] = i;

    }
    return "NO";
}
int main(){
    int n=5;
    vector<int> book = {2,6,7,8,4};
    int target = 25;
    string ans = twoSum(n,book,target);
    cout<<"This is the answer for the varient 1:"<< ans <<endl;
    return 0;
}*/
//VARIANT 2
/*#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(int n, vector<int> &book, int target){
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num = book[i];
        int moreneeded = target-num;
        if(mpp.find(moreneeded) != mpp.end()) {
            return {mpp[moreneeded],i};
        }
        mpp[num] = i;
    }
    return {-1,-1};
}
int main() {
    int n = 5;
    vector<int> book = { 2,4,6,1,3};
    int target = 44;
    vector<int> ans = twoSum(n, book, target);
    cout<<"this is the answer for the variant 2"<< ans[0] <<","<<ans[1]<<endl;
    return 0;
}*/

//OPTIMAL SOLUTION
#include<bits/stdc++.h>
using namespace std;
string twoSum(int n, vector<int>&book, int target){
    sort(book.begin(), book.end());
    int left = 0, right = n-1;
    while(left<right){
        int sum = book[left] + book[right];
        if( sum == target){
            return "YES";
        }
        else if( sum<target) left++;
        else right--;
    }
    return "NO";
    

    }
    int main(){
        int n = 5;
        vector<int> book ={2,4,6,7,11};
        int target = 10;
        string ans = twoSum(n,book,target);
        cout<<"This is the answer for variant 1 : "<< ans << endl;
        return 0;
    }





