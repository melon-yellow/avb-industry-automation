#include "apdefap.h"
BOOL _main(char* lpszPictureName, char* lpszObjectName, char* lpszPropertyName)
{

char tagvalue[71];
strncpy(tagvalue, GetText(lpszPictureName, "Condition1"), 70);
return strcmp(tagvalue, "");

}