#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *path = "../app/stores_old.csv";
    FILE *in = fopen(path, "r");
    char tmp = 0;
    while(1){
        if(feof(in)) break;
        fscanf(in, "%c", &tmp);
        if(tmp != '\r')
            printf("%c", tmp);
    }
    return 0;
}
