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


/******************************* Externals ***********************************/
void Delay250mS(void);
/************************** Variable Definitions *****************************/




/*************************** Function Prototypes *****************************/
void C_Delay(void);




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
	C_Delay();
	atmel_start_init();
    C_Delay();
	/* Replace with your application code */
	while(1)
	{
	  //Toggle Gpio via C code Delay()	
	  /*
      MyGpio_set_level(true);
	  C_Delay();
	  MyGpio_set_level(false);
	  C_Delay();
	  */
	  
	  
	  //Toggle Gpio via ASM code One_mS_Delay()	
	  MyGpio_set_level(true);
	  Delay250mS();
	  MyGpio_set_level(false);
	  Delay250mS();
	    
	
	  
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
void C_Delay(void)
{
   volatile int i;
   
   for(int i=0;i<__DELAY_COUNT;++i)
      ;
}