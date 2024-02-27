/////*
//// * state_machine.c
//// *
//// *  Created on: Feb 26, 2024
//// *      Author: Marisa
//// */
////
////
//#include <recipe.h>
//void process_event( enum events one_event )
//{
//	switch ( current_servo_state )
//	{
//		case state_at_position :		// servo is stationary at a known position
//			if ( one_event == user_entered_left && servos[0].servo_position < 5 ) // prevent moving too far left
//			{
//				servo_position++ ;
//				start_move(servos[0], servo_position ) ;
//				current_servo_state = state_moving ;		// when the move ends (enough time has elapsed) new state will be state_position_1
//			}
//			break ;
//		case state_unknown :
//			break ;
//		case state_recipe_ended :
//			break ;
//	}
//}
