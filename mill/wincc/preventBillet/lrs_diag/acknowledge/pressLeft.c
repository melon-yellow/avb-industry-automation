#include "apdefap.h"
void OnLButtonDown(char* lpszPictureName, char* lpszObjectName, char* lpszPropertyName, UINT nFlags, int x, int y)
{

// Set Variables
char tagname[71];
strncpy(tagname, GetText(lpszPictureName, "PBTagPrefix"), 70);
strcat(tagname, ".ACK_FAULT");

// Set Ack
SetTagBit(tagname, 1);

}