include <stdio.h>

int main(void)
{
    int N, max;
    int num, re;
    int i;
    
    scanf("%d", &N);
    
    max = N/3+1;
    re = max;
    
    for( i=0 ; i<max ; i++ ){
        if( (N-3*i)%5==0 ){
            if( (i+(N-3*i)/5) < re )
                re = i+(N-3*i)/5;
        }
    }
    
    if( re==max )
        printf("-1\n");
    else
        printf("%d\n", re);
    
    return 0;
}
