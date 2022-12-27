
#include "STD_TYPES.h"
#include "SYSTICK_interface.h"
#include "SYSTICK_private.h"
#include "SYSTICK_config.h"

static void (* SYSTICK_PF) () = NULL;
// we can support up to 1073 seconds


void SYSTICK_voidInit()
{
	SYSTICK_u32_STRELOAD_REG=SYSTICK_Config_preload;
	if (SYSTICK_Config_interrupt_enable==1)
		SET_BIT (SYSTICK_u32_STCTRL_REG,1);
	else
	{
		SET_BIT (SYSTICK_u32_STCTRL_REG,1);
	}
	if(SYSTICK_Config_Clk_src==0)
		SET_BIT(SYSTICK_u32_STCTRL_REG,2);
	else
	{
		CLR_BIT(SYSTICK_u32_STCTRL_REG,2);
	}
	SET_BIT(SYSTICK_u32_STCTRL_REG,0);
}


void SYSTICK_voidStartTimer()
{
	
	SYSTICK_u32_STCTRL_REG=3;
	
}

void SYSTICK_voidSetPreload (u32 preload )
{
	
SYSTICK_u32_STRELOAD_REG=preload;	
		
}

void SYSTICK_voidRestartcounting()
{
	SYSTICK_u32_STCURRENT_REG=0x00;
}


void SYSTICKvoid_SetCallBack( void (* Copy_PF)() )
{

	SYSTICK_PF=Copy_PF;
	
	
}





void SysTick_Handler ()
{
	
	SYSTICK_PF();
	
}