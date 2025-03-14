#include <kipr/wombat.h>
#include "mycanum.hpp"


/*
void forward(int time);
void backward(int time);
void left(int time);
void right(int time);

void turn_left(int time);
void turn_right(int time);
*/


int main()
{
    printf("Hello World\n");
    
	turn_right(1000);
    turn_left(1000);
    
    forward(1000);
    msleep(100);
    backward(1000);
    msleep(100);
	left(1000);
    msleep(100);
    right(1000);
    
    
    
    
    
    return 0;
}
