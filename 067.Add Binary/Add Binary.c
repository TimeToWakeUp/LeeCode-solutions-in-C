char* addBinary(char* a, char* b) {
    char *ret=NULL;
    int carry=0;
    int la=strlen(a);
    int lb=strlen(b);
    ret=(char *)malloc(sizeof(char)*(la+lb+1));
    int i=la+lb;
    ret[i--]='\0';
    
    while(la&&lb)
    {
        la--;
        lb--;
        ret[i--]='0'+(carry+a[la]-'0'+b[lb]-'0')%2;
        carry=(carry+a[la]-'0'+b[lb]-'0')/2;
    }
    while(la--)
    {
        ret[i--]='0'+(carry+a[la]-'0')%2;
        carry=(carry+a[la]-'0')/2;
    }
     while(lb--)
    {
        ret[i--]='0'+(carry+b[lb]-'0')%2;
        carry=(carry+b[lb]-'0')/2;
    }
    if(carry)
    {
        ret[i--]='1';
    }
    return ret+i+1;
}
