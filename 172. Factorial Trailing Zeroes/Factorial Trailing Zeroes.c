int trailingZeroes(int n) {
    int result=0;
    for(long long i=5;n/i>0;i*=5)  //计算n!分解后含有5,5*5,5*5*5...的个数
        result+=n/i;
    return result;
}
