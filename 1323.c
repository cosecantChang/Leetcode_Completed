int maximum69Number(int num)
{
    char s[100];
    int i;
    sprintf(s,"%d",num);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='6')
        {
            s[i]='9';
            break;
        }
    }
    return atoi(s);
}
