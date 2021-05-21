#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sem, sub;
    scanf("%d", &sem);
    
    int *sum = (int *)malloc(sizeof(int) * sem);
    float *aver = (float *)malloc(sizeof(float) * sem);
    
    for(int i = 0; i < sem; i++)
    {
        scanf("%d", &sub);
        
        int *grade = (int *)malloc(sizeof(int) * sub);
        float *score = (float *)malloc(sizeof(float) * sub);
        *(sum + i) = 0;
        *(aver + i) = 0;
        for(int j = 0; j < sub; j++)
        {
            scanf("%d%f", &*(grade + j), &*(score + j));
            *(sum + i) += *(grade + j);
            *(aver + i) += *(score + j) * (*(grade + j));
        }
        *(aver + i) /= *(sum + i);
    }
    for(int i = 0; i < sem; i++)
        printf("%d %.1f\n", *(sum + i), *(aver + i));
    
    return 0;
}
