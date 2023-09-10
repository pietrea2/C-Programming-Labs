#include <stdio.h>

int main(void) {
	
    //Declaration of all variables
    char   band1,         band2,           multiplier,       tolerance;
    int    band1Colour,   band2Colour,     multiplierColour, toleranceColour,  resistanceUnits;
    double multiplierVal, resistanceTotal, toleranceVal,     resistTotalFinal;
    static char *colours[] = { "Black", "Brown",  "Red",  "Orange", "Yellow", "Green",
                               "Blue",  "Violet", "Grey", "White",  "Gold",   "Silver"};
    static char *units[] = {   "Ohms",  "KOhms",  "MOhms"};
 
    //Prompting the user for 4 characters 
    //(representing the colours of the 4 resistor bands)
    printf("Please enter the 1st band:\n");
    scanf(" %c", &band1);
    printf("Please enter the 2nd band:\n");
    scanf(" %c", &band2);
    printf("Please enter the multiplier band:\n");
    scanf(" %c", &multiplier);
    printf("Please enter the tolerance band:\n");
    scanf(" %c", &tolerance);
    
    //Determining the colour of the 1st band
    if      ( band1 == 75 || band1 == 107) { band1Colour = 0; }
    else if ( band1 == 66 || band1 == 98 ) { band1Colour = 1; }
    else if ( band1 == 82 || band1 == 114) { band1Colour = 2; }
    else if ( band1 == 79 || band1 == 111) { band1Colour = 3; }
    else if ( band1 == 69 || band1 == 101) { band1Colour = 4; }
    else if ( band1 == 71 || band1 == 103) { band1Colour = 5; }
    else if ( band1 == 85 || band1 == 117) { band1Colour = 6; }
    else if ( band1 == 86 || band1 == 118) { band1Colour = 7; }
    else if ( band1 == 89 || band1 == 121) { band1Colour = 8; }
    else if ( band1 == 87 || band1 == 119) { band1Colour = 9; }
    else { printf("ERROR DOES NOT RECOGNIZE COLOUR OF BAND 1\n\n");  }
        
    //Determinimg the colour of the 2nd band    
    if      ( band2 == 75 || band2 == 107) { band2Colour = 0; }
    else if ( band2 == 66 || band2 == 98 ) { band2Colour = 1; }
    else if ( band2 == 82 || band2 == 114) { band2Colour = 2; }
    else if ( band2 == 79 || band2 == 111) { band2Colour = 3; }
    else if ( band2 == 69 || band2 == 101) { band2Colour = 4; }
    else if ( band2 == 71 || band2 == 103) { band2Colour = 5; }
    else if ( band2 == 85 || band2 == 117) { band2Colour = 6; }
    else if ( band2 == 86 || band2 == 118) { band2Colour = 7; }
    else if ( band2 == 89 || band2 == 121) { band2Colour = 8; }
    else if ( band2 == 87 || band2 == 119) { band2Colour = 9; }
    else { printf("ERROR DOES NOT RECOGNIZE COLOUR OF BAND 2\n\n");  }
    
    //Determining the colour of the Multiplier band
    if      ( multiplier == 75 || multiplier == 107) { multiplierVal = 1;      multiplierColour = 0; }
    else if ( multiplier == 66 || multiplier == 98 ) { multiplierVal = 10;     multiplierColour = 1; }
    else if ( multiplier == 82 || multiplier == 114) { multiplierVal = 100;    multiplierColour = 2; }
    else if ( multiplier == 79 || multiplier == 111) { multiplierVal = 1E+3;   multiplierColour = 3; }
    else if ( multiplier == 69 || multiplier == 101) { multiplierVal = 10E+3;  multiplierColour = 4; }
    else if ( multiplier == 71 || multiplier == 103) { multiplierVal = 100E+3; multiplierColour = 5; }
    else if ( multiplier == 85 || multiplier == 117) { multiplierVal = 1E+6;   multiplierColour = 6; }
    else if ( multiplier == 86 || multiplier == 118) { multiplierVal = 10E+6;  multiplierColour = 7; }
    else if ( multiplier == 76 || multiplier == 108) { multiplierVal = 0.1;    multiplierColour = 10;}
    else if ( multiplier == 83 || multiplier == 115) { multiplierVal = 0.01;   multiplierColour = 11;}
    else { printf("ERROR DOES NOT RECOGNIZE COLOUR OF MULTIPLIER BAND\n\n");  }
    
    //Determining the colour of the Tolerance band
    if      ( tolerance == 66 || tolerance == 98 ) { toleranceVal = 1;    toleranceColour = 1; }
    else if ( tolerance == 82 || tolerance == 114) { toleranceVal = 2;    toleranceColour = 2; }
    else if ( tolerance == 71 || tolerance == 103) { toleranceVal = 0.5;  toleranceColour = 5; }
    else if ( tolerance == 85 || tolerance == 117) { toleranceVal = 0.25; toleranceColour = 6; }
    else if ( tolerance == 86 || tolerance == 118) { toleranceVal = 0.10; toleranceColour = 7; }
    else if ( tolerance == 89 || tolerance == 121) { toleranceVal = 0.05; toleranceColour = 8; }
    else if ( tolerance == 76 || tolerance == 108) { toleranceVal = 5;    toleranceColour = 10;}
    else if ( tolerance == 83 || tolerance == 115) { toleranceVal = 10;   toleranceColour = 11;}
    else { printf("ERROR DOES NOT RECOGNIZE COLOUR OF TOLERANCE BAND\n\n");  }
    
    
    //Calculation of the Total Resistance of the Resistor    
    resistanceTotal = ( (band1Colour * 10) + (band2Colour) ) * multiplierVal;
    
    
    //Converting the Total Resistance to appropriate units
    if      ( resistanceTotal >= 1000000 )                           { resistTotalFinal = resistanceTotal / 1000000; resistanceUnits = 2; }
    else if ( resistanceTotal >= 1000 && resistanceTotal < 1000000 ) { resistTotalFinal = resistanceTotal / 1000;    resistanceUnits = 1; }
    else if ( resistanceTotal < 1000 )                               { resistTotalFinal = resistanceTotal;           resistanceUnits = 0; }
    else { printf("ERROR CANNOT RECOGNIZE TOTAL RESISTANCE\n\n"); }
    
    
    //Displaying the colours of each band inputed
    //and the Total Resistance of the resistor specified
    
    printf("\nResistor bands: %s %s %s %s",          colours[band1Colour], colours[band2Colour],   colours[multiplierColour], colours[toleranceColour]);
    printf("\nResistance: %.2lf %s +/- %.2lf%%\n\n", resistTotalFinal,     units[resistanceUnits], toleranceVal);

return 0;
//Adam Pietrewicz
}