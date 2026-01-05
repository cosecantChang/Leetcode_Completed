int findLucky(int* arr, int arrSize)
{
    int a[501]={0};
    int i;
    for(i=0;i<arrSize;i++)
    {
        a[arr[i]]++;
    }
    for(i=500;i>0;i--)
    {
        if(a[i]==i)
        {
            return i;
        }
    }
    return -1;
}
