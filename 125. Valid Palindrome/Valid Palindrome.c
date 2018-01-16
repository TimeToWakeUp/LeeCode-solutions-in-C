bool isPalindrome(char* s) {
    int Length_s=strlen(s);
    if(Length_s==0)  return true;
    
    for(int i=0,j=Length_s-1;i<=j;i++,j--) //i从字符串的头开始遍历,j从字符串的尾开始遍历
    {
        while(!isalnum(s[i])) i++;
        while(!isalnum(s[j])) j--;
        if(i<Length_s&&j>=0&&tolower(s[i])!=tolower(s[j]))  return false; //对于字母不区分大小写
    }
    return true;
}
