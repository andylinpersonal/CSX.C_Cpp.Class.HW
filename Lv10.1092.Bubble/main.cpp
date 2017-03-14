#include <cstdio>
#include <cstdlib>
#include <iostream>

#define swap(a, b)\
        do{\
            a ^= b;\
            b ^= a;\
            a ^= b;\
        }while(0)
using namespace std;
int main()
{

    int sz = 0;
    cin >> sz;
    int *num = new int[sz];
    for(int i = 0; i < sz; i++)
        cin >> *num[i];
    for(int i = 0; i < sz; i++)
        cout << *num[i] << '\n';
    return 0;
}
