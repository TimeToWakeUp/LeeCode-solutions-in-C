char* countAndSay(int n) {
    int i,j;
    int count;
    
    char*cur=(char *)malloc(sizeof(char)*100000);
    char *next=(char *)malloc(sizeof(char)*100000);
    cur[0]='1';
    cur[1]='\0';
    
    while(--n)
    {
        i=0;
        j=0;
        while(cur[i]!='\0')
        {
            count=1;
            while(cur[i]==cur[i+1])
            {
                i++;
                count++;
            }
            next[j++]=count+'0';
            next[j++]=cur[i];
            i++;
        }
        next[j]='\0';
        strcpy(cur,next);
    }
    return cur;
}
