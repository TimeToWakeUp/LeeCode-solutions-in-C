方法1：采用strcmp()函数
int strStr(char* haystack, char* needle) {
    int length_n=strlen(needle);
    if(length_n==0)
        return 0;
    int length_h=strlen(haystack);
    if(length_h<length_n)
        return -1;
    char *temp_s=(char*)malloc(sizeof(char)*length_n);
    int i,j;
    for(i=0;i<=length_h-length_n;i++)
    {
        if(haystack[i]==needle[0])
        {
            for(j=0;j<length_n;j++)
                temp_s[j]=haystack[i+j];
            temp_s[j]='\0';
            if(strcmp(temp_s,needle)==0)
                return i;
        }
    }
    return -1;
}

方法2：采用strncmp()函数
int strStr(char* haystack, char* needle) {
    int length_n=strlen(needle);
    if(length_n==0)
        return 0;
    int length_h=strlen(haystack);
    if(length_h<length_n)
        return -1;
    int i,j;
    for(i=0;i<=length_h-length_n;i++)
    {
        if(!strncmp(&haystack[i],needle,length_n))
            return i;
    }
    return -1;
}
