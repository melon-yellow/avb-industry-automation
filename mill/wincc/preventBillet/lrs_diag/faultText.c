#include "apdefap.h"
char* _main(char* lpszPictureName, char* lpszObjectName, char* lpszPropertyName)
{

// Set variables
char* pszValue = NULL;
char szValue[71];

// Get the current value of the tag
pszValue = GetTagChar(
    GetPropChar(lpszPictureName, lpszObjectName, "TooltipText")
);

// Check the string
if (pszValue != NULL) {
    // Copy Tag Reference Value
    GetPBText(szValue, pszValue);
};

// Return result
return szValue;

}