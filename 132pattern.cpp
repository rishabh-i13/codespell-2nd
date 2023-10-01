//given an vector select i,j,k such that i<j<k and nums[i]<nums[j]>nums[k]


#include<bits/stdc++.h>
using namespace std;

bool find132pattern(vector<int>& nums) {
        stack<int> st;

        int third= INT_MIN;

        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i]<third) return true;

            while(st.empty()==0 and st.top()<nums[i]){
                third=st.top();;
                st.pop();
            }
            st.push(nums[i]);
        }

        return false;
}

int main(){
    int n;
    cin>>n;
    vector<int > nums;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    cout<<find132pattern(nums);
}
