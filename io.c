#include "io.h"

// Assuming the target is a generic microcontroller, 
// the following includes might be platform-specific
// and may need to be adjusted for the actual hardware.
#include <avr/io.h> // Replace with the appropriate header for your microcontroller

// Initialize the I/O pins
void IO_Init(void) {
    // Configure LED_PIN as an output
    DDRB |= (1 << LED_PIN); // Set LED_PIN as output (assuming LED_PIN is on PORTB)

    // Configure BUTTON_PIN as an input
    DDRD &= ~(1 << BUTTON_PIN); // Clear BUTTON_PIN to input (assuming BUTTON_PIN is on PORTD)
    PORTD |= (1 << BUTTON_PIN); // Enable pull-up resistor on BUTTON_PIN
}

// Set the LED state
void LED_Set(int state) {
    // Check if the state is 'on' (non-zero)
    if (state) {
        PORTB |= (1 << LED_PIN); // Turn on the LED (assuming LED_PIN is on PORTB)
    } else {
        PORTB &= ~(1 << LED_PIN); // Turn off the LED
    }
}

// Read the button state
int Button_Read(void) {
    // Read the state of the button (assuming BUTTON_PIN is on PORTD)
    // If the button is pressed (assuming active low), return 1, else return 0
    return (PIND & (1 << BUTTON_PIN)) ? 0 : 1;
}
