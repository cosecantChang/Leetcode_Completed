int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    return a;
}
int maxNumberOfBalloons(char* text)
{
    int b=0,a=0,l=0,o=0,n=0,i;
    for(i=0;i<strlen(text);i++)
    {
        if(text[i]=='b')
        {
            b++;
        }
        if(text[i]=='a')
        {
            a++;
        }
        if(text[i]=='l')
        {
            l++;
        }
        if(text[i]=='o')
        {
            o++;
        }
        if(text[i]=='n')
        {
            n++;
        }
    }
    return min(min(min(min(b,a),l/2),o/2),n);
}
