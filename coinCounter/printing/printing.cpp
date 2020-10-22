#include "printing.h"
#inlcude "arduino.h"
#include <stdio.h>

printing::printing()
{
	
}

void printing::printingDime(){
	Serial.println("Break - Dime");
}
void printing::printingQuarter(){
	Serial.println("Break - Quarter");
}
void printing::printingNickel(){
	Serial.println("Break - Nickel");
}
