#include <stdio.h>

int main()
{
    int n, v, cnt;
    int numArr[100];
    
    cnt = 0;
    scanf("%d", &n);
    for(int i=0;i<n;++i)
    {
        scanf("%d", &numArr[i]);
    }
    scanf("%d", &v);
    
    for(int i=0;i<n;++i)
    {
        if(numArr[i] == v)
            cnt++;
    }
    printf("%d", cnt);
    
    return 0;
}