long int mySqrt(int x)
{
    long int a=0;
    while(a*a<=x)
    {
        a++;
    }
    return a-1;
}
