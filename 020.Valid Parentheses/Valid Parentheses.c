bool isValid(char* s) {
    int top=-1;
    int n=strlen(s);
    char *stack=(char*)malloc(sizeof(char)*n);
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            stack[++top]=s[i];
        else if(top==-1&&(s[i]==')'||s[i]==']'||s[i]=='}'))
            return false;
        else if((stack[top]=='('&&s[i]!=')')||(stack[top]=='['&&s[i]!=']')||(stack[top]=='{'&&s[i]!='}'))
            return false;
        else if((stack[top]=='('&&s[i]==')')||(stack[top]=='['&&s[i]==']')||(stack[top]=='{'&&s[i]=='}'))
            top--;
    }
    if(top==-1)
        return true;
    else
        return false;
}
