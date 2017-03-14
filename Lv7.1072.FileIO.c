#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *in = fopen("../app/input.txt", "r");
    char str[100];
    fscanf(in, " %s", str);
    printf("%s\n", str);
    fclose(in);
    return 0;
}
