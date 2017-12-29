int lengthOfLastWord(char* s) {
    char *p=s+strlen(s)-1;
    int length=0;
    while(p>=s&&isspace(*p))  p--;
    while(p>=s&&!isspace(*(p--)))  length++;
    return length;
}
