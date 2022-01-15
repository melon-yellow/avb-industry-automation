#include "apdefap.h"
char* _main(char* lpszPictureName, char* lpszObjectName, char* lpszPropertyName)
{

// Set variables
char tagname[71];

// Get Tag Prefix
strncpy(tagname, GetText(lpszPictureName, "PBTagPrefix"), 70);
strcat(tagname, ".TEXT_01");

// Return result
return tagname;

}