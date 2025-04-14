#include <stdio.h>

int main()
{
    int arr[9];
    int max, maxIndex;
    
    for(int i=0;i<9;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    maxIndex = 0;
    for(int i=0;i<9;i++)
    {
        if(max <= arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    
    printf("%d\n", max);
    printf("%d", maxIndex+1);
}