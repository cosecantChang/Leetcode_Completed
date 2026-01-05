int hammingWeight(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%2;
        n/=2;
    }
    return s;
}
