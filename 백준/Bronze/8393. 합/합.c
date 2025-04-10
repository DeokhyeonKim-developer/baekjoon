#include <stdio.h>

int main()
{
    int n, cnt;
    scanf("%d", &cnt);

    n=0;
    
    for(int i=1;i<=cnt;++i)
    {
        n = n + i;
    }
    
    printf("%d", n);
    
    return 0;
}