int countKDifference(int* a, int numsSize, int k) {
    int c=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            int temp=a[i]-a[j]>0?a[i]-a[j]:a[j]-a[i];
            if(temp==k){
                c++;
            }
        }
    }
    return c;
    
}