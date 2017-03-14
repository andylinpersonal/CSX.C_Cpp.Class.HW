#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100
int main()
{
    FILE *out = fopen("tmp.txt", "w"), *input = NULL;
    double tmp = 0, length = 0;
    for(int i = 0; (i < MAXLEN); i++){
        scanf(" %lf", &tmp);
        if(tmp == (double)-1){
            length = ++i;
            fclose(out);
            break;
        }
        else{
            fprintf(out, "%.1f ", tmp);
        }
    }
    input = fopen("tmp.txt", "r");
    char ch = 0;
    while(1){
        fscanf(input, "%c", &ch);
        if(feof(input)){
            fclose(input);
            break;
        }
        printf("%c", ch);
    }
    return 0;
}
