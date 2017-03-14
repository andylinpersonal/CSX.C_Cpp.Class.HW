#include <iostream>
#include <cstdio>
#include <cstdlib>

void swap(int &a, int &b);

int main()
{
    int a, b;
    scanf(" %d %d", &a, &b);
    swap(a, b);
    printf("%d\n%d", a, b);
    return 0;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
