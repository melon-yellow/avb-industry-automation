#include "apdefap.h"

char* GetPBTagChar70 (char* dest, char* tagname)
{
	// Set variables
	char* pszValue = NULL;

	// Get the current value of the tag
	pszValue = GetTagChar(tagname);

    	// Check string
	if(pszValue != NULL) {
        	// Copy the string
		strncpy(dest, pszValue, 70);
	};

	// Return tag value
	return dest;
}