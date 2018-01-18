int titleToNumber(char* s) {
    int string_size=strlen(s);
    int ret=0;
    for(int i=0;i<string_size;i++)
    {
        ret=ret*26+s[i]-'A'+1; //利用求多项式在给定点值的方案：f(x)=A0+A1*x+A2*x^2+...+An*x^n=A0+(...x(An-1+An*x)...)
    }
    return ret;
}
