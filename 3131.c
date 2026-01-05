int addedInteger(int* nums1,int nums1Size,int* nums2,int nums2Size)
{
    int max1=-2147483647,max2=-2147483647,i;
    for(i=0;i<nums1Size;i++)
    {
        if(max1<=nums1[i])
        {
            max1=nums1[i];
        }
    }
    for(i=0;i<nums2Size;i++)
    {
        if(max2<=nums2[i])
        {
            max2=nums2[i];
        }
    }
    return max2-max1;
}
