char* longestCommonPrefix(char** strs, int strsSize) {
    
    if(strsSize==0)
        return "";
    int i,j,Index,tempIndex=0;
    Index=strlen(strs[0]);
    char *perfix=(char*)malloc(sizeof(char)*(Index+1));
    strcpy(perfix,strs[0]);
    
    for(i=1;i<strsSize;i++)
    {
        for(j=0;j<Index;j++)
        {
            if(perfix[j]==strs[i][j])
                tempIndex++;
            else
            {
                perfix[j]='\0';
                break;
            }
        }
        if(tempIndex<Index)
            Index=tempIndex;
        if(tempIndex==0)
            return "";
    }
    return perfix;
  
}
