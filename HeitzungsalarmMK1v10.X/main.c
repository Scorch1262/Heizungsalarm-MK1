/* 
 * File:   main.c
 * Author: Torben
 *
 * Created on 18. Mai 2019, 11:29
 */

#include "config.h"
#include "main.h"

/** Hauptprogramm *******************************************/
void main() {                           // Hauptprogramm
    start_setup();                      // Hardware initialisierung
    
    while(1){                           // Endlosschleife
        if (Signal == 1){               // wenn "Signal" 1 ist
            LED_R = 1;                  // setzt "LED_R" auf ON
            __delay_ms(1000);           // warte 1000ms
            LED_R = 0;                  // setzt "LED_R" auf OFF
            __delay_ms(500);            // warte 500ms
        } else {                        // sonst
            LED_G = 1;                  // setzt "LED_G" auf ON
            __delay_ms(2000);           // warte 2000ms
            LED_G = 0;                  // setzt "LED_G" auf OFF
            __delay_ms(1000);           // warte 1000ms
        }
    }
}
