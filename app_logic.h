#ifndef APP_LOGIC_H
#define APP_LOGIC_H

#include "config.h" // Include configuration constants

// Function prototypes for application logic

/**
 * @brief Initializes the application logic.
 * 
 * This function sets up any application-specific logic or data structures.
 * It should be called after all system and I/O initialization is complete.
 */
void App_Logic_Init(void);

/**
 * @brief Main processing loop for the application logic.
 * 
 * This function contains the main logic of the application. It should be
 * called repeatedly in the main program loop. It will handle events such
 * as button presses and control the state of the LED accordingly.
 */
void App_Logic_MainLoop(void);

// Add additional function prototypes for application-specific tasks

#endif // APP_LOGIC_H
