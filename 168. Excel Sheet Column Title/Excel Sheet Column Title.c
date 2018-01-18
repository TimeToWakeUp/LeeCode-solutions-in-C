char* convertToTitle(int n) {
    int tmp=n;
    int string_size=0;
    while(tmp--)  //求出字符串的长度
    {
        tmp/=26;
        string_size++;
    }
    char *ret=(char*)malloc(sizeof(char)*string_size);
    while(n--)
    {
        ret[--string_size]=n%26+'A'; //从尾到头依次求出字符串的各个字符
        n/=26;
    }
    return ret;
}
