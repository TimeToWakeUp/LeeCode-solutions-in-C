int lengthOfLongestSubstring(char* s) {
    int length_s=strlen(s);
    if(length_s==0)  return 0;
    int CurrentSum,MaxSum,start;  //CurrentSum用于记录当前的不重复子字符串的长度，MaxSum用于记录到目前为止的最长的不重复子字符串的长度
    CurrentSum=MaxSum=1;
    start=0;
    
    for(int i=0;i<length_s;i++)
    {
        CurrentSum=1;
        for(int j=start;j<i;j++)  //i用来遍历字符串，j用来判断s[i]是否与目前计数的不重复字符串中的字符相重复
        {
            if(s[j]==s[i])  
            {
                CurrentSum=1;  //如果重复，当前的不重复子字符串的长度CurrentSum重新计数，并把下次与s[i]判断是否重复的起始字符定在当前重复字符串的下一个
                start=j+1;
                break;
            }
            else CurrentSum++; //s[i]与当前计数的不重复子字符串中的字符都不重复，则前计数的不重复子字符串长度CurrentSum加1
        }
        if(CurrentSum>MaxSum)  MaxSum=CurrentSum;
    }
    return MaxSum;
}
