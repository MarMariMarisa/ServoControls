/*
 * recipe.h
 *
 *  Created on: Feb 26, 2024
 *      Author: Marisa
 */

#ifndef INC_RECIPE_H_
#define INC_RECIPE_H_

uint32_t positions[] = {2000,3600,5200,6800,8400,10000};
extern int current_pos = 0;

#define LEFT {5}
#define RIGHT {0}

#endif /* INC_RECIPE_H_ */
// This is a good way to define the status of the display.
// This should be in a header (.h) file.



enum status
{
	status_running,
	status_paused,
	status_command_error,
	status_nested_error
} ;

// This is a good way to define the state of a servo motor.
// This should be in a header (.h) file.
enum servo_states
{
	position_0,		// use a separate integer to record the current position (0 through 5) for each servo.
	position_1,
	position_2,
	position_3,
	position_4,
	position_5,
	unknown,
	moving,
} ;

enum events
{
	user_entered_left,
	user_entered_right,
	recipe_started,
	recipe_ended,
	recipe_paused,
	no_event
} ;

typedef struct{
    enum servo_states servoState;
//    enum recipeStates recipeState = ;
    uint32_t servoLocation;;
    int servoNum;;
} servoData;
//
//extern enum servo_states current_servo_state = status_paused ;
static void start_move(typedef servoData,uint32_t position);
