#include <stdio.h>

int main(){
    int dataset[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\n", dataset[i][j]);
        }
    }
    
    return 0;
}