int findMaxK(int* a, int numsSize) {
    int max=-1;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(a[j]==-a[i]){
                int temp=a[j]>a[i]?a[j]:a[i];
                if(max<temp){
                    max=temp;
                }
            }
        }
    }
    return max;
    
}