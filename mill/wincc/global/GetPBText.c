#include "apdefap.h"

char* GetPBText (char* dest, char* text)
{
	// Set variables
	int i = 0;
	char temp[71];
	strcpy(dest, text);

	// Loop 16 Times
	for (i = 0; i < 16; ++i) {
		// Check Result String
		if (CheckPBText(dest)) {
			// Get Tag Referenced
      		GetPBTagReference(temp, dest);
			strcpy(dest, temp);
		// Reset
      	} else {
            i = 16;
        };
	};

	// Return result
	return dest;
}