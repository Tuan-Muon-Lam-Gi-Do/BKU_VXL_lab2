/*
 * In_timer.c
 *
 *  Created on: Sep 23, 2025
 *      Author: ADMIN
 */
#include "In_timer.h"

int timer1_counter=0;
int timer1_flag=0;

void setTimer1(int a){
	timer1_counter=a;
	timer1_flag =0;
}

int timer2_counter=0;
int timer2_flag=0;

void setTimer2(int a){
	timer2_counter=a;
	timer2_flag =0;
}

int timer3_counter=0;
int timer3_flag=0;

void setTimer3(int a){
	timer3_counter=a;
	timer3_flag =0;
}

int timer4_counter=0;
int timer4_flag=0;

void setTimer4(int a){
	timer4_counter=a;
	timer4_flag =0;
}


void timerRun(){
	if(timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_flag=1;
		}
	}

	if(timer2_counter>0){
		timer2_counter--;
		if(timer2_counter<=0){
			timer2_flag=1;
		}
	}

	if(timer3_counter>0){
		timer3_counter--;
		if(timer3_counter<=0){
			timer3_flag=1;
		}
	}

	if(timer4_counter>0){
		timer4_counter--;
		if(timer4_counter<=0){
			timer3_flag=1;
		}
	}
	//end
}

