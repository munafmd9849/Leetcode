void reverse(int a[],int l,int r){
    while(l<r){
        int temp=a[l];
        a[l++]=a[r];
        a[r--]=temp;
    }

}
void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
    reverse(nums,0,numsSize-1);
    reverse(nums,0,k-1);
    reverse(nums,k,numsSize-1);
}