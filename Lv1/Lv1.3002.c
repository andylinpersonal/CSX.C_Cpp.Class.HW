#include <stdio.h>
#include <stdlib.h>

int main()
{
    double u, b, h, a;
    scanf("%lf%lf%lf",&u ,&b ,&h);
    a = (u + b) * h / 2;
    printf("%.1lf\n", a);
    return 0;
}
