#include <stdio.h>
int main()
{
    int n, m, i, g;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);
     for(i=1; i <= n && i <= m; ++i)
    {
            if(n%i==0 && m%i==0)
            g = i;
    }
    printf("G.C.D of %d and %d is %d", n, m, g);
     return 0;
}
