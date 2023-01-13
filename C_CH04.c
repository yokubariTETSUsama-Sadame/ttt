#include <stdio.h>


int main()
{
    int a;
    char g[12] = "EEEEEEDCBAA";
    while (scanf("%d", &a) != EOF)
    {
        if(a>=0&&a<=100){
            printf("%c\n", g[a/10]);
        }else{
            printf("error\n");
        }
        
    }
    return 0;
}