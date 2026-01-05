int mirrorDistance(int n)
{
    int i,m,c=0;
    char s1[50],s2[50];
    sprintf(s1,"%d",n);
    for(i=strlen(s1)-1;i>=0;i--)
    {
        s2[c]=s1[i];
        c++;
    }
    s2[c]='\0';
    m=atoi(s2);
    return abs(n-m);
}
