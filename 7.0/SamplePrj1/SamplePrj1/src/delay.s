
/*
 * delay.s
 *
 * Created: 2/1/2022 3:32:28 PM
 *  Author: paul.deangelo
 */
 
  
/*
   1 inst cyle = (16MHz) or 1/16000000 x ~64 inst x 250 =~ 1ms x 250(outer loop) =~250mS
*/


 #include <assembler.h>


	PUBLIC_FUNCTION(Delay250mS)

Delay250mS: 
	        push r27
			push r26
			ldi  r26,0
loopLabel2:	ldi  r27,0
			

loopLabel1: nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
            nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			nop                      ;
			inc  r27                 ; Increase r27 by 1
       	    cpi  r27,250             ; Compare r27 to 250
      	    brne loopLabel1          ; Branch if r27 not equal to 250, jump to Label "LoopLabel1", else if equal to 250 loop is done
			inc  r26                 ; Increase r26 by 1
			cpi  r26,250             ;
			brne loopLabel2          ; Branch if r26 not equal to 250, jump to Label "LoopLabel2", else if equal to 250 loop is done

			pop r26                  ;
			pop r27                  ;
      	    ret                      ; return





	END_FUNC(Delay250mS)
	END_FILE()
