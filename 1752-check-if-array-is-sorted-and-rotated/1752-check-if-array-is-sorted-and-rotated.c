bool issorted(int* a, int n){
    int ac=1,ds=1;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            ac=0;
        }
        else if(a[i]<a[i+1]){
            ds=0;
        }
    }
    if(ac==1){
        return 1;
    }
    else {
        return 0;
    }
}
bool check(int* nums, int numsSize) {
   int sort=issorted(nums,numsSize);
    if(sort==1){
        return true;
    }
    else{
        for(int i=1;i<numsSize;i++){
               int temp=nums[0];
            for(int j=0;j<numsSize-1;j++){
                nums[j]=nums[j+1];
            }
            nums[numsSize-1]=temp;
            if(issorted(nums,numsSize)){
                return true;
            }
        }
        return false;
    }
}
