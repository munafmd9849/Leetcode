class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>um;
        int mini=INT_MAX;
        for(int i=0;i<cards.size();i++){
            if(um.find(cards[i])!=um.end()){
                int len=i-um[cards[i]]+1;
                mini=min(mini,len);
                um[cards[i]]=i;
            }
            else{
                um[cards[i]]=i;
            }
        }
        return mini==INT_MAX?-1:mini;
    }
};