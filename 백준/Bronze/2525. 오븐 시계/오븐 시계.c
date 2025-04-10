#include <stdio.h>

int main()
{
    int h, m, time;
    scanf("%d %d", &h, &m);
    scanf("%d", &time);
    
    if((m+time) / 60 > 0)
    {
        h = h + (m+time) / 60;
        if(h >= 24)
        {
            h %= 24;
        }
        m = (m+time) % 60;
    }
    else
    {
        m += time;
    }
    
    printf("%d %d", h, m);
    
    return 0;
}