#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ADB 50
#define MAX_SIZE 50
#define MAX_PATH 260

#define strnset(str, c, len)               \
        do{                                \
            for(int i = 0; i < len; i++){  \
                (str)[i] = c;              \
            }                              \
        }while(0)

#define NoNewLine(str, len)\
        do{\
            for(int i = 0; i <= (len); i++){\
                if((str)[i] == '\n'){\
                   (str)[i] = '\0';\
                    break;\
                }\
            }\
        }while(0)

typedef struct _AdrBk{
    char *name;
    char *phone;
    char *email;
} AddressBook;

AddressBook *AdBInit(void);
AddressBook *AdBDestroy(AddressBook *In);
AddressBook *AdBLoadFromFile(FILE *src);
void AdBPrt(AddressBook *In);
int AdBSaveToFile(AddressBook *In, char *path);

//int NoNewLine(char *str, int len);

int main()
{
    AddressBook *adb[MAX_ADB] = {NULL};
    int exit = 0;

    while(!exit){
        char op = 0;
        scanf(" %c", &op);
        switch(op){
        case 'l':
            for(int i = 0; i < MAX_ADB; i++){
                if(adb[i] != NULL) AdBPrt(adb[i]);
            }
            break;
        case 's':
            do{
                char path[MAX_PATH] = {0};
                getchar();
                gets(path);
                NoNewLine(path, MAX_PATH);
                //clear file
                FILE *fp = fopen(path, "w");
                fflush(fp); // flush
                fclose(fp);
                for(int i = 0; i < MAX_ADB; i++){
                    if(adb[i] != NULL)
                        AdBSaveToFile(adb[i], path);
                }
            } while(0);
            break;
        case 'i':
            for(int i = 0; i < MAX_ADB; i++){
                if(!adb[i]){
                    adb[i] = AdBInit();
                    break;
                }
            }
            break;
        case 'o':
            for(int i = 0; i < MAX_ADB; i++){
                if(adb[i] != NULL)
                    adb[i] = AdBDestroy(adb[i]);
            }
            do{
                char path[MAX_PATH] = {0};
                //flush last '\n'
                getchar();
                gets(path);
                NoNewLine(path, MAX_PATH);
                FILE *src = fopen(path, "r");
                for(int i = 0; i < MAX_ADB; i++){
                    if(!adb[i]){
                        if(!feof(src)){
                            adb[i] = AdBLoadFromFile(src);
                        }
                        else break;
                    }
                }
                fclose(src);
            }while(0);
            break;
        case 'c':
            for(int i = 0; i < MAX_ADB; i++){
                if(adb[i] != NULL)
                    adb[i] = AdBDestroy(adb[i]);
            }
            break;
        case 'q':
            for(int i = 0; i < MAX_ADB; i++){
                if(adb[i] != NULL)
                    adb[i] = AdBDestroy(adb[i]);
            }
            exit = 1;
            break;
        default:
            break;
        }
    }
    return 0;
}
AddressBook *AdBInit(){
    AddressBook *adb = malloc(sizeof(AddressBook));
    adb->email = malloc(sizeof(char) * MAX_SIZE);
    adb->name  = malloc(sizeof(char) * MAX_SIZE);
    adb->phone = malloc(sizeof(char) * MAX_SIZE);

    scanf(" %s", adb->name);
    scanf(" %s", adb->phone);
    scanf(" %s", adb->email);
    return adb;
}

void AdBPrt(AddressBook *In){
    printf("Name: %s\n", In->name);
    printf("Phone: %s\n", In->phone);
    printf("Email: %s\n", In->email);
}

AddressBook *AdBDestroy(AddressBook *In){
    free(In->email);
    free(In->name);
    free(In->phone);
    free(In);
    return NULL;
}

int AdBSaveToFile(AddressBook *In, char *path){
    FILE *out = fopen(path, "a");
    fprintf(out, "%s\n", In->name);
    fprintf(out, "%s\n", In->phone);
    fprintf(out, "%s\n", In->email);
    fclose(out);
    return 0;
}
//wait 4 check
AddressBook *AdBLoadFromFile(FILE *src){
    AddressBook *adb = malloc(sizeof(AddressBook));
    adb->email = malloc(sizeof(char) * MAX_SIZE);
    adb->name  = malloc(sizeof(char) * MAX_SIZE);
    adb->phone = malloc(sizeof(char) * MAX_SIZE);
    strnset(adb->email, '\0', MAX_SIZE);
    strnset(adb->name, '\0', MAX_SIZE);
    strnset(adb->phone, '\0', MAX_SIZE);
    fgets(adb->name, MAX_SIZE - 1, src);
    fgets(adb->phone, MAX_SIZE - 1, src);
    fgets(adb->email, MAX_SIZE - 1, src);
    NoNewLine(adb->name, MAX_SIZE);
    NoNewLine(adb->phone, MAX_SIZE);
    NoNewLine(adb->email, MAX_SIZE);
    //Prevent incomplete data from loaded into memory...
    if(!((strlen(adb->email)) && strlen(adb->phone) && strlen(adb->name))){
        adb = AdBDestroy(adb);
    }
    return adb;
}
/*
int NoNewLine(char *str, int len){
    for(int i = 0; i <= len; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            return 0;
        }
    }
    return 1;
}
*/
