class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        int n = nums2.size() ;
        stack<int>s;
        for(int i = n-1; i>=0 ;i-- ){
            int num = nums2[i];
            while(!s.empty() && s.top()<=num) s.pop();
            if(!s.empty()) m[num] = s.top();
            else m[num] = -1;
            s.push(num);
        }
        vector<int>ans;
        for(auto num : nums1){
            ans.emplace_back(m[num]);
        }
        return ans;
    }
};