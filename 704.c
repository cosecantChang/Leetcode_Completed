int search(int* nums,int numsSize,int target)
{
    int l=0,r=numsSize-1,mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(target>nums[mid])
        {
            l=mid+1;
        }
        else if(target<nums[mid])
        {
            r=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
