class Solution {
public:

    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(n,0);
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({nums[i],i});
        }
        mergeSort(temp,0,nums.size()-1,count);
        return count;
    }
    void mergeSort(vector<pair<int,int>> &a,int s,int e,vector<int> &count){
        if(s==e){
            return;
        }
        int mid=(s+e)/2;
        mergeSort(a,s,mid,count);
        mergeSort(a,mid+1,e,count);
        merge(a,s,mid,e,count);
    }
    void merge(vector<pair<int,int>> &a,int s,int m,int e,vector<int>&count){
        vector<pair<int,int>> r(e-s+1);
        int i=s,j=m+1,k=0;
        int rightCount = 0;
        while (i <= m && j <= e) {
            if (a[i].first <= a[j].first) {
                count[a[i].second] += rightCount;
                r[k++] = a[i++];
            } else {
                r[k++] = a[j++];
                rightCount++;
            }
        }
        while(i<=m){
            count[a[i].second] += rightCount;
            r[k++]=a[i++];
        }
        while(j<=e){
            r[k++]=a[j++];
        }
        for(int i=s;i<=e;i++){
            a[i]=r[i-s];
        }
    }
};