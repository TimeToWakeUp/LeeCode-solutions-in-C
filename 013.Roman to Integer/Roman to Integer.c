int romanToInt(char* s) {
    int index=strlen(s)-1;
    int PreInt=0;
    int result=0;
    while(index>=0)
    {
        int CurInt;
        switch(s[index])
        {
            case 'M':
                CurInt=1000;
                break;
            case 'D':
                CurInt=500;
                break;
            case 'C':
                CurInt=100;
                break;
            case 'L':
                CurInt=50;
                break;
            case 'X':
                CurInt=10;
                break;
            case 'V':
                CurInt=5;
                break;
            case 'I':
                CurInt=1;
                break;
        }
        if(CurInt>=PreInt)
        {
            result+=CurInt;
            PreInt=CurInt;
        }
        else
        {
            result-=CurInt;
            PreInt=CurInt;
        }
        index--;
    }
    return result;
}
