bool isHappy(int n)
{
     while(1)
     {
        if(n==1)
        {
            return true;
        }
        int i=0;
        while(n>0)
        {
            i+=(n%10)*(n%10);
            n/=10;
        }
        if(i==4)
        {
            return false;
        }
        n=i;
    }
}
