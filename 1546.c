#include <stdio.h>

int main(void) 
{
    int a;
    double score[1000]; 
    double max = 0.0;
    double sum = 0.0;

    scanf("%d", &a); 

    for(int i = 0; i < a; i++) {
        scanf("%lf", &score[i]); 
        if(score[i] > max)
            max = score[i]; 
    }
    for(int i = 0; i < a; i++){
        score[i] = score[i] / max * 100.0;
        sum += score[i];
    }
    printf("%0.2lf", sum / a);  

    return 0;
}
