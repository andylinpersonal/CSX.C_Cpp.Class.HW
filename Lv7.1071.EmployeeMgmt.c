#include <stdio.h>
#include <stdlib.h>

#define Person 3
struct _Employee
{
    char Name[20];
    char Phone[10];
    int id;
};
typedef struct _Employee Employee;

void Employee_Init(Employee *In);
int Employee_SearchID(Employee In[], int Length, int ID);

int main(){
    Employee p[Person];
    for(int i = 0; i < Person; i++)
        Employee_Init(&p[i]);
    int r, in;
    scanf(" %d", &in);
    if((r = Employee_SearchID(p, Person, in)) == -1){
        printf("not found\n");
    }
    else{
        printf("found\n");
        printf("Name: %s\n", p[r].Name);
        printf("Phone: %s\n", p[r].Phone);
        printf("Id: %d\n", p[r].id);
    }
    return 0;
}

void Employee_Init(Employee *In){
    scanf(" %s", In->Name);
    scanf(" %s", In->Phone);
    scanf(" %d", &In->id);
}

int Employee_SearchID(Employee In[], int Length, int ID){
    for(int i = 0; i < Length; i++){
        if(ID == In[i].id)
            return i;
    }
    return -1;
}
