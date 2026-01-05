int singleNumber(int* nums,int numsSize)
{
    int i,j;
    for(i=0;i<numsSize-1;i++)
    {
        for(j=0;j<numsSize-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int tmp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=tmp;
            }
        }
    }
    for(i=0;i<numsSize;i++)
    {
        if(i==0&&numsSize>1&&nums[i]!=nums[i+1])
        {
            return nums[i];
        }
        else if(i!=0&&i!=numsSize-1&&nums[i]!=nums[i-1]&&nums[i]!=nums[i+1])
        {
            return nums[i];
        }
        else if(i==numsSize-1&&numsSize>1&&nums[i-1]!=nums[i])
        {
            return nums[i];
        }
    }
    return nums[0];
}
