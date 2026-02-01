/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
       int t3,t4;
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(nums[i]+nums[j]==target&&i!=j){
                t3=j;
                t4=i;
                break;
            }
        }
    }
    int* result=(int*)malloc(2*sizeof(int));
    result[0]=t3;
    result [1]=t4;
    *returnSize=2;
    return result;
}