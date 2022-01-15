#include "apdefap.h"
BOOL _main(char* lpszPictureName, char* lpszObjectName, char* lpszPropertyName)
{

char tagname[71];
strncpy(tagname, GetText(lpszPictureName, "PBTagPrefix"), 70);
strcat(tagname, ".FST_FAULT");
return !!((GetTagDWord(tagname)) & 0x1);

}