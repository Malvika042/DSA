/*#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>v) {
    int n = v.size();
    for(int i = 0; i<n;i++){

        int count =0;
        for(int j =0;j<n; j++){
            if(v[j] == v[i]){
                count++;
            }
        }
        if(count >(n/2)){
            return v[i];
        }
        return -1;
    }
}

    int main()
    {
        vector<int> arr = {2,2,1,1,1,2,2};
        int ans = majorityElement(arr);
        cout<< " The majority element is:" << ans <<endl;
        return 0;
    }

    //BETTER SOLUTION
    #include<bits/stdc++.h>
    using namespace std;

    int majorityElement(vector<int>v){
     //size of the given array

        int n = v.size();
     //declaring a map
        map<int,int>mpp; 
     // storing the elements with occurences

        for(int i = 0; i<n; i++){
            mpp[v[i]]++;
        }
        //searching for the majority elements

        for(auto it: mpp ){
            if(it.second>(n/2)) {
                return it.first;
            }
        }
        return -1;
    }
    int main()
    {
        vector<int> arr = {2,2,1,1,1,2,2};
        int ans = majorityElement(arr);
        cout<<"The majority element is"<< ans <<endl;
        return 0;    }*/

        //OPTIMAL SOLUTION
        #include<bits/stdc++.h>
        using namespace std;

        int majorityElement(vector<int> v){
            //size of the given array
            int n = v.size();
            int count = 0;
            int ele;

            //applying the algorithm
            for(int i=0;i<n;i++){
                if(count == 0){
                    count =1;
                    ele = v[i];
                }

                else if (ele ==v[i])
                count ++;
            }
            if(count> (n/2))
            return ele;
            return -1;
        }
        int main()
        {
            vector<int> arr = {2,2,2,1,1,1,1};
            int ans = majorityElement(arr);
            cout<<"the majority element is:"<< ans <<endl;
            return 0;
        }
