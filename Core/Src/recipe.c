///*
// * recipe.c
// *
// *  Created on: Feb 26, 2024
// *      Author: Marisa
// */
//#include <stdio.h>
//#include <stdlib.h>
//
void start_move( char command )
{
	switch(command){
		case 'L':
		case 'l':
			update_pwm(0,100);
			update_pwm(1,100);
			break;
		case 'R':
		case 'r':
			update_pwm(0,500);
			update_pwm(1,500);
			break;
	}
}

