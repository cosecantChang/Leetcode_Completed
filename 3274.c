bool checkTwoChessboards(char* coordinate1, char* coordinate2)
{
    if((coordinate1[0]%2==coordinate2[0]%2)&&(coordinate1[1]%2==coordinate2[1]%2))
    {
        return true;
    }
    if((coordinate1[0]%2!=coordinate2[0]%2)&&(coordinate1[1]%2!=coordinate2[1]%2))
    {
        return true;
    }
    return false;
}
