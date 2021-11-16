#include "apdefap.h"

char* GetPBTagReference (char* dest, char* text)
{
	char temp[71];
	char tagname[41];
	char tokensi[11];

	// Copy the string 
    strcpy (temp, text);

    // Remove "</>"
	strcpy (temp, strtok (temp, "<"));
	temp[strlen (temp) - 1] = '\0';
	
	// Join the new string
	strcpy (tagname, "");
	strcat (tagname, strtok (temp, "/"));
	strcpy (tokensi, strtok (NULL, "/"));
	strcat (tagname, "/PREVENT_BILLET/");
    strcat (tagname, strtok (NULL, "/"));
    strcat (tagname, "_");
    strcat (tagname, tokensi);
    strcat (tagname, ".FAULT_TEXT");

	// Reset Temp
	strcpy(temp, "");

    // Return tag value
	strcpy (dest, GetPBTagChar70 (temp, tagname));
    return dest;
}