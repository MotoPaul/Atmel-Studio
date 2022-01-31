/*
 * filename.c
 *
 *  Created on: Oct 13, 2020
 *      Author: 
 */


/***************************** Include Files *********************************/
#include <atmel_start.h>





/***************************** Macro Definitions *****************************/
#define __DELAY_COUNT     (int)20000




/************************** Variable Definitions *****************************/




/*************************** Function Prototypes *****************************/
void Delay(void);




/**************************** Public Interface *******************************/






/*****************************************************************************
* main - app main entry point
*
*
* @param	None.
*
* @return
*		-   none
*
* @note
*
****************************************************************************/
int main(void)
{   
	
	/* Initializes MCU, drivers and middleware */
	Delay();
	atmel_start_init();
    Delay();
	/* Replace with your application code */
	while(1)
	{
	  //Toggle Gpio via Delay()	
	  /*
      MyGpio_set_level(true);
	  Delay();
	  MyGpio_set_level(false);
	  Delay();
	  */
	  
	  //Toggle Gpio via user button trigger
	  if( Button_get_level()==false )
	     MyGpio_toggle_level();
	    
	}
}





/*****************************************************************************
* Delay
*
*
* @param	None.
*
* @return
*		-   none
*
* @note
*
****************************************************************************/
void Delay(void)
{
   volatile int i;
   for(int i=0;i<__DELAY_COUNT;++i)
      ;
}