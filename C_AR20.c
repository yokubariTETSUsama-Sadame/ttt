#include <stdio.h>

int main()
{
    int a;
    int nn[666666];
    int b;
    int state = 1;
    scanf("%d", &a );
    while(a--){
        scanf("%d", &b);
        if(nn[b]){
            state = 0;
        }
        nn[b] = 1;
    }
    printf("%d\n", state);
    return 0;
}