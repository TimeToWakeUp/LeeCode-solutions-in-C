#define MAXCHAR_SIZE 1000
int min(int x,int y)
{
    return x>y?y:x;
}
char* longestPalindrome(char* s) {
    int slen=strlen(s);
    if(slen<=1)  return s;
    
    /*
	*  Convert T string from S string,
	*  for example, S = "abaaba", T = "^#a#b#a#a#b#a#$"
	*/
  
    char T[MAXCHAR_SIZE*2+3];
    int slen_T=slen*2+3;
    T[0]='^';
    T[1]='#';
    for(int i=0,j=2;i<slen;i++,j+=2)
    {
        T[j]=s[i];
        T[j+1]='#';
    }
    T[slen_T-1]='$';
    
    /*
	*  Manacher's algorithm
	*  Reference: http://blog.csdn.net/crazyhacking/article/details/8148619(与这篇博客上的算法有细微的区别，但本质上是一样的)
	*/
    
    unsigned short P[MAXCHAR_SIZE*2+3];
    memset(P,0,sizeof(P));
    int C=0,R=0;
    int Center_Idx=0,Max_Len=0;
    for(int i=2;i<slen_T-2;i++)
    {
        P[i]=R>i?min(P[2*C-i],R-i):0;
        while(T[i+P[i]+1]==T[i-P[i]-1])  P[i]++;
        if(i+P[i]>R)
        {
            R=i+P[i];
            C=i;
        }
        if(P[i]>Max_Len)
        {
            Center_Idx=i;
            Max_Len=P[i];
        }
    }
    int lps_idx=(Center_Idx-Max_Len-1)/2;
    s[lps_idx+Max_Len]='\0';
    return &s[lps_idx];
}
