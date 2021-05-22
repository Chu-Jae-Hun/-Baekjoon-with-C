long long fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    long long pp = 0;
    long long p = 1;
    long long result = 0;
    
    for(int i = 2; i <= n; i++)
    {
        result = p + pp;
        pp = p;
        p = result;
    }
    return result;
}

int main(void)
{
    int n;
    
    scanf("%d", &n);
    printf("%lld\n", fib(n));
    return 0;
}
