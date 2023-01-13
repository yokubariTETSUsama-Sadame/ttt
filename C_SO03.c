#include <stdio.h>

int main()
{
    int n, m;
    int p[300];
    scanf("%d", &n);
    while (n--)
    {
        int max=0;
        int d;
        scanf("%d", &m);
        int mm = m;
        int mmm = m;
        int v = m;
        while (mm--)
        {
            scanf("%d %d", &p[mm*2], &p[mm*2+1]);
        }
        while(mmm--){
            v=m;
            while(v--){
                // printf("%d %d\n", mmm, v);
                d = (p[mmm*2]-p[v*2])*(p[mmm*2]-p[v*2])+(p[mmm*2+1]-p[v*2+1])*(p[mmm*2+1]-p[v*2+1]);
                if(max<d) max = d;
            }
        }
        printf("%d\n", max);
        
    }
    
    
    return 0;
}