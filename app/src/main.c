/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes


// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

#define FLASH_START 0X9D000000
#define APP_START FLASH_START + 0x200 

void task(){
	printf("hello app ...\r\n");
	printf("hello app ...\r\n");
	printf("hello app ...\r\n");
	printf("hello app ...\r\n");
}
void jump_app(){
	void (*fptr) (void);
	fptr = (void (*) (void))APP_START;
	fptr();
}

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
	task();
	jump_app();
    while ( true )
    {
        /* Maintain state machines of all polled MPLAB Harmony modules. */
        /* SYS_Tasks ( ); */
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

