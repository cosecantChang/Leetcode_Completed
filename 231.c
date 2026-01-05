bool isPowerOfTwo(int n)
{
    long int i=1;
    while(i<=n)
    {
        if(i==n)
        {
            return true;
        }
        i*=2;
    }
    return false;
}
