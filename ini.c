#include <stio.h>

#define MAX_SEC_NAME_LEN 64
#define MAX_KEY_LEN 32
#define MAX_VALUE_LEN 64

typedef struct INI_KEY_VALUE
{
    char key[MAX_KEY_LEN];
    char value[MAX_VALUE_LEN];
}INI_KEY_VALUE;

typedef struct INI_SEC_STRU
{
    int keyValueNum;
    char secName[MAX_SEC_NAME_LEN];
    INI_KEY_VALUE keyValue[0];
}INI_SEC;

typedef struct INI_FILE_STRU
{
    int secNum;
    INI_SEC sec[0];
}INI_FILE;
