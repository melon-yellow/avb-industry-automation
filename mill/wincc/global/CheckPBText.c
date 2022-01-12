#include "apdefap.h"

int CheckPBText (char* text)
{
	char temp[21];
	int cond = 0;
	int i = 0;

    	char* refs[] = {
		// PLC - CTR (3)
      	"CTR/RM", // CTR/PREVENT_BILLET/PB_RM
       	"CTR/IM", // CTR/PREVENT_BILLET/PB_IM
        	"CTR/FM", // CTR/PREVENT_BILLET/PB_FM

        	// PLC - MIL (3)
        	"MIL/RM", // MIL/PREVENT_BILLET/PB_RM
        	"MIL/IM", // MIL/PREVENT_BILLET/PB_IM
        	"MIL/FM", // MIL/PREVENT_BILLET/PB_FM

        	// PLC - ROD (2)
        	"ROD/WR", // ROD/PREVENT_BILLET/PB_WR
        	"ROD/STELM", // ROD/PREVENT_BILLET/PB_STELM

        	// PLC - RAX (2)
        	"RAX/WR", // RAX/PREVENT_BILLET/PB_WR
        	"RAX/STELM", // RAX/PREVENT_BILLET/PB_STELM

        	// PLC - VCH (1)
        	"VCH/CH", // VCH/PREVENT_BILLET/PB_CH

        	// PLC - COL (1)
        	"COL/COOL", // COL/PREVENT_BILLET/PB_COOL

        	// PLC - BARH (2)
        	"BARH/BARH", // BARH/PREVENT_BILLET/PB_BARH
        	"BARH/STACK" // BARH/PREVENT_BILLET/PB_STACK
  	};

	// Iterate over all possibilities
    	for  (i = 0; i < 14; ++i)  {
		// CHECK PREVENT BILLET
		strcpy (temp, "<");
		strcat (temp, refs[i]);
		strcat (temp, "/PB>");
      	if (!strcmp(temp, text)) { cond ++; };

		// CHECK SCRAP BILLET
		strcpy (temp, "<");
		strcat (temp, refs[i]);
		strcat (temp, "/SB>");
      	if (!strcmp(temp, text)) { cond ++; };

		// RESET
		strcpy(temp, "");
		if (cond) { i = 14; };
    	};

    	// Return Condition
    	return cond;
}