#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <stdlib.h>
 
int main()
{
    #define n 6
    #define m 5
    
    srand(time(NULL));
    
    int sum_r[n] = {0, 0, 0, 0}; 
    int **matr;
    int i, j;
    
    matr = (int **) malloc(n * m * sizeof(int *));
    
    for(i = 0; i < n; ++i)
        matr[i] = (int *) malloc(m * sizeof(int));
    
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
            matr[i][j] = rand()%5-1+1;
    
    printf("Массив : \n");
    
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < m; ++j)
        {
            printf("%d ", matr[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
            sum_r[i] += + matr[i][j]; 
    
    for(i = 0; i < n; ++i)
        printf("Сумма %d строки: %d\n", i+1, sum_r[i]);
    printf("\n");    
}