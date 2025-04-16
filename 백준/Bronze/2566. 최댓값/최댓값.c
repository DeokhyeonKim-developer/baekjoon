#include <stdio.h>

int main()
{
    int arr[9][9];
    int max, max_x, max_y;
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    max = arr[0][0];
    max_x = 0;
    max_y = 0;
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(max <= arr[i][j])
            {
                max = arr[i][j];
                max_y = i;
                max_x = j;
            }
        }
    }
    
    printf("%d\n", max);
    printf("%d %d", max_y + 1, max_x + 1);
    
    return 0;
}