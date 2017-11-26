/*
 Name:		atmega328.ino
 Created:	11/21/2017 4:55:16 PM
 Author:	Thomas
 Use:		Main Programm for the atmega328 as SPI Slave
*/

#include <SPI.h>
#include <KMP/KMP.h>

KMP kmp;


void setup() {
	Serial.begin(115200);
	Serial.println("Serial Started!");


}


void loop() {
	Serial.println("Active! \n");
	
	//kmp.DriveForward(255);

	delay(10000);

}
