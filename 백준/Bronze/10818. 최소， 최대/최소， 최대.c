#include <stdio.h>

int main()
{
    int n, max, min;
    int a[1000000];
    scanf("%d", &n);
    for(int i=0;i<n;++i)
    {
        scanf("%d ", &a[i]);
    }
    
    max = a[0];
    min = a[0];
    for(int i=0;i<n;++i)
    {
        if(max < a[i])
        {
             max = a[i];   
        }
        if(min > a[i])
        {
             min = a[i];   
        }
    }
    
    printf("%d %d", min, max);
    
    return 0;
}