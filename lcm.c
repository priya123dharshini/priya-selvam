#include <stdio.h>
int main()
{
    int n, m, L, Temp, GCD;
    printf("Please Enter two integer Values \n");
    scanf("%d %d", &n, &m);
 
    int a = n;
    int b = m;
    
    while (m != 0) {
 	Temp = m;
 	m = n % m;
 	n = Temp;
    }
    GCD = n;
    printf("GCD of %d and %d = %d \n", a, b, GCD);
    LCM = (a * b) / GCD;
    printf("LCM of %d and %d = %d", a, b, LCM);
    return 0;
}
