bool isPalindrome(int x) {
    long long val=0;
    int copy_x=x;
    if(x<0)
        return false;
    do
    {
        val=val*10+x%10;
        x/=10;
    }while(x);
    //val=((val>INT_MAX||val<INT_MIN)?0:val);
    if(val==copy_x)
        return true;
    else
        return false;
}
