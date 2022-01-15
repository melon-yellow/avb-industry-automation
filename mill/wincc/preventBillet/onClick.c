#include "apdefap.h"
void OnClick(char* lpszPictureName, char* lpszObjectName, char* lpszPropertyName)
{

// Define Picture Window Object Name
#define picture "PBPictureWindow1"
// Define Picture Title
#define title "Prevent Billet Conditions"
// Define Tag Prefix
#define prefix "CTR/PREVENT_BILLET/PB_MASTER"

// Set Temporary Variables
char pname[71];
char* temp = NULL;

// Open Picture
SetPropBOOL(lpszPictureName, picture, "Visible", 1);

// Set Picture Title
SetPropChar(lpszPictureName, picture, "CaptionText", title);

// Set Picture Name
SetPropChar(lpszPictureName, picture, "PictureName", "LRS_DIAG.pdl");

// Get Picture Name
temp = GetPictureName(lpszPictureName, picture);
if (temp != NULL) strncpy(pname, temp, 70);

// Set Tag Prefix
SetPropChar(pname, "PBTagPrefix", "Text", prefix);

}