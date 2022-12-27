#ifndef SYSTICK_CONFIG_H_
#define SYSTICK_CONFIG_H_




/* put the preload function from 1 to 0x00FFFFFF */
#define SYSTICK_Config_preload 0x00FF4D00


/* 1->enable interrupt ,,, 0->disable interrupt */
#define SYSTICK_Config_interrupt_enable     1

// 0->for internal clk source
// 1->for internal clk divided by 4
#define SYSTICK_Config_Clk_src  1

#endif 
