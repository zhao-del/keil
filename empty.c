#include "ti_msp_dl_config.h"
volatile int 	left;
volatile int  reght;
volatile unsigned int delay_times = 0;

void delay_ms(unsigned int ms) 
{
        delay_times = ms;
        while( delay_times != 0 );
}


void hardware_init()
{
		DL_Timer_enableClock(TIMG1);
		DL_Timer_enableClock(TIMG2);	
}

void BUZZER ()
{
DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_2);
		delay_ms(100);
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_2);
		delay_ms(100);
}
void Motor(uint8_t sensor_val)
{	
	switch(sensor_val)
	{	case 0x04:
					left =500;
					reght = 500;
		break;
		case 0x18:
					left = 600;
					reght =800;
		break;
		case 0x03:
					left = 500;
					reght =400;
		break;
		case 0x08:
						left = 200;
					reght =500;
		break;
		case 0x02:
						left = 200;
					reght =600;
		break;
		
		
		default:
					left =500;
					reght = 500;
		break;
	}
}
int main()
{
	SYSCFG_DL_init();
	DL_TimerG_startCounter(PWM_0_INST);
	DL_TimerG_startCounter(PWM_1_INST);
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_5);
	DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_6);
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_10);
	DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_11);
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_8);
	DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_9);
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_15);
	DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_16);
//			hardware_init();
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_25);
//					delay_cycles(100000);
	
// DL_GPIO_togglePins(GPIOA,DL_GPIO_PIN_25);
	while(1)
	{
		uint32_t value = DL_GPIO_readPins(GPIOA ,DL_GPIO_PIN_24);
		DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_2);
		if( value >0)
		{
			  DL_Timer_setCaptureCompareValue(PWM_0_INST,200,DL_TIMER_CC_0_INDEX);
				DL_Timer_setCaptureCompareValue(PWM_0_INST,200,DL_TIMER_CC_1_INDEX);
				DL_Timer_setCaptureCompareValue(PWM_1_INST,200,DL_TIMER_CC_0_INDEX);
				DL_Timer_setCaptureCompareValue(PWM_1_INST,200,DL_TIMER_CC_1_INDEX);
				DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_2);
				delay_ms(100);
			
		}
		else {
				DL_Timer_setCaptureCompareValue(PWM_0_INST,0,DL_TIMER_CC_0_INDEX);
				DL_Timer_setCaptureCompareValue(PWM_0_INST,0,DL_TIMER_CC_1_INDEX);
				DL_Timer_setCaptureCompareValue(PWM_1_INST,0,DL_TIMER_CC_0_INDEX);
				DL_Timer_setCaptureCompareValue(PWM_1_INST,0,DL_TIMER_CC_1_INDEX);
				DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_2);
				delay_ms(100);
				break;
		}
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_2);
		
//for (int i = 0; i < 1000; i++) {  // 让蜂鸣器响一段时间
//    DL_GPIO_togglePins(GPIOA, DL_GPIO_PIN_25);
//    delay_cycles(100000);  // 适当增加延时，使蜂鸣器的频率在可听范围
//		DL_GPIO_clearPins(GPIOA, DL_GPIO_PIN_25);  // 关闭蜂鸣器
//	delay_cycles(100000);  
   
   
}


	
	}


void GROUP1_IRQHandler()
{
	switch( DL_Interrupt_getPendingGroup(DL_INTERRUPT_GROUP_1) )
		case KEY_INT_IIDX:

}