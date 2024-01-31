#ifndef IO_H
#define IO_H

#include "config.h" // Include configuration constants

// Function prototypes for I/O operations

/**
 * @brief Configures the I/O pins.
 * 
 * This function sets up the I/O pins, such as LED and button pins,
 * as specified in the configuration. It should be called during
 * system initialization.
 */
void IO_Init(void);

/**
 * @brief Turns the LED on or off.
 * 
 * @param state The desired state of the LED: 1 for on, 0 for off.
 */
void LED_Set(int state);

/**
 * @brief Reads the state of the button.
 * 
 * @return int The current state of the button: 1 if pressed, 0 if not.
 */
int Button_Read(void);

#endif // IO_H
