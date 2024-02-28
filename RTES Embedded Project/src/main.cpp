#include "mbed.h"
 
// Initialize pins to perform analog input and digital output fucntions
AnalogIn   ain(PB_1);
DigitalOut dout(PB_0);
uint32_t counter=0; 
int main(void)
{
    while (1) {

        // test the voltage on he initialized analog pin
        //  and if greater than 0.9 (threshold) set the digital pin
        //  to a logic 1 (LED On) otherwise a logic 0 (LED Off)
        // printf("normal %f", ain.read()); // To debug code
        float voltage = ain.read();
         wait_us(500000); // increase duration between each sampling 
        // printf("%f",voltage);
        if(voltage > 0.9) 
        {
            // printf will print in the serial terminal when the person is not breathing, used for debugging and caliberation
            // printf("not breathing\n");
            // printf("%f\n",voltage);
            counter++;
            if (counter >= 11){
              dout=1; 
            }
        } 
        else 
        {
            dout=0; 
            //used for debugging and caliberation
            printf("breathing\n");
            printf("%f\n",voltage);
            counter=0;
        }        
        thread_sleep_for(500);
    }
}

// Additional Analysis
// Cost of the project: 
// Thin film pressure sensor: 8.22 $
// Wires and breadboard : 6 $
// Microcontroller : 29.9 $
// Misc (belt and electrical components) : 5$
// Overall cost: 49.22 $

// Use cases: This sensor can also be fitted into a mask to determine if the person is breathing. 
// The pressure exerted during exhalation will impart a force on the sensor and bend it. 
// This will help in determining whether the person is breathing