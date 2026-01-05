int scoreOfString(char* s)
{
    int i,score=0;
    for(i=0;i<strlen(s)-1;i++)
    {
        score+=abs(s[i]-s[i+1]);
    }
    return score;
}
