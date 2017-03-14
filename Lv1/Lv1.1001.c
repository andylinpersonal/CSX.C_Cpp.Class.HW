#include <stdio.h>
#define MAX_VAL 1024
int main()
{
    char str1[MAX_VAL] = {0};
    char str2[MAX_VAL] = {0};
    scanf("%s", str1);
    scanf("%s", str2);
    printf("%s\n", str2);
    printf("%s\n", str1);
    return 0;
}
