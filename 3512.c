int minOperations(int* nums, int numsSize, int k)
{
    int i,s=0;
    for(i=0;i<numsSize;i++)
    {
        s+=nums[i];
    }
    return s%k;    
}
