class Solution {
public:
    static bool big(int s1,int s2){
        string a=to_string(s1)+to_string(s2);
        string b=to_string(s2)+to_string(s1);
        return a>b;
    }
    string largestNumber(vector<int>& nums) {
        int flag=0;
        for(int i:nums){
            if(i!=0)flag=1;
        }
        if(!flag){
            return "0";
        }
        sort(nums.begin(),nums.end(),big);
        string a=to_string(nums[0]);
        for(int i=1;i<nums.size();i++){
            a+=to_string(nums[i]);
        }
        return a;
    }
};