/* 
 * File:   main.h
 * Author: Torben
 *
 * Created on 17. Mai 2019, 13:50
 */

void start_setup() {
/** Initialisierung **************************************************/    
    OSCCON = 0b01110010;    // 8 MHz
    
    //PORT A  76543210
    PORTA = 0b00000000;
    TRISA = 0b00000000;     //A0/A1/A2/A3/A4/A5/A6/A7   Ausgang (0)
                            //  /  /  /  /  /  /  /     Eingang (1)
    //PORT B  76543210
    PORTB = 0b00000000;
    TRISB = 0b11111111;     //  /  /  /  /  /  /  /     Ausgang (0)
                            //B0/B1/B2/B3/B4/B5/B6/B7   Eingang (1)
     
/** Initialisierung Analog/Digital ***********************************/

            // 76543210        76543210
    ADCON1 = 0b00001111;    // 000      = immer 0
                            //    0		= Positive Referenz Spannung (0)=VCC / (1)=VREF+;		;
                            //	   1	= Port ist (0)=AN3 / (1)=RA6
							//	    1	= Port ist (0)=AN2 / (1)=RA4
							//	     1	= Port ist (0)=AN1 / (1)=RA1
							//		  1 = Port ist (0)=AN0 / (1)=RA0	
  
/** Diverse Einstellungens **************************************************/  

	RCON    = 0b00000000;   // INT Priority ein

	PIE1    = 0b00000001;   // TMR1 Überlauf Interrupt
	PIE2    = 0b00000000;   // Timer3 Interrupt Enable

	INTCON  = 0b11100000;	// Globale Int. disable,
	INTCON2 = 0b10000000;	// Interne PullUps deakt.
	INTCON3 = 0b00000000;	//

	PIR1    = 0b00000000;   // 
	PIR2    = 0b00000000;   //
    
    CMCON   = 0b00000000;
    
    //PWMCON0 = 0b00000000;

/** Definitionen **************************************************/
// Eingänge:
#define Signal          PORTBbits.RB4

// Ausgänge:    
#define LED_G          LATAbits.LATA1
#define LED_R          LATAbits.LATA0
 
}