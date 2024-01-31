#include "config.h"
#include "init.h"
#include "io.h"
#include "app_logic.h"

// Main program entry point
int main(void) {
    // Initialize system
    System_Init();

    // Configure I/O
    IO_Init();

    // Main loop
    while (1) {
        // Read input from peripherals, e.g., buttons
        int button_state = IO_ReadButton(BUTTON_PIN);

        // Process input and perform application logic
        AppLogic_ProcessInput(button_state);

        // Update output devices, e.g., LEDs
        IO_UpdateLED(LED_PIN, AppLogic_GetLEDState());

        // Implement any other application-specific logic
    }

    // Should never reach this point
    return 0;
}
