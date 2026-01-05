int heightChecker(int* heights,int heightsSize)
{
    int i,j,s=0;
    int *sorted=(int*)malloc(sizeof(int)*heightsSize);
    for(i=0;i<heightsSize;i++)
    {
        sorted[i]=heights[i];
    }
    for(i=0;i<heightsSize-1;i++)
    {
        for(j=0;j<heightsSize-1-i;j++)
        {
            if(heights[j]>heights[j+1])
            {
                int tmp=heights[j];
                heights[j]=heights[j+1];
                heights[j+1]=tmp;
            }
        }
    }
    for(i=0;i<heightsSize;i++)
    {
        if(heights[i]!=sorted[i])
        {
            s++;
        }
    }
    return s;
}
