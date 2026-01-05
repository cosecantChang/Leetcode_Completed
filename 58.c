int lengthOfLastWord(char* s)
{
    int i,count=0,flag=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        {
            if(flag!=1)
            {
                count++;
            }
            else
            {
                count=1;
                flag=0;
            }
        }
        else
        {
            flag=1;
        }
    }
    return count;
}
