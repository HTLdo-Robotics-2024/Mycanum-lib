#include <kipr/wombat.h>
#include "mycanum.hpp"

int main()
{
    printf("Hello class, today we will figure out how to rotate the wombat by a certain amount of degrees\n");
    
    int angle_degree = 90;
    
    for (int i = 0; i < 8; i++) {
		if (i < 4) turn_angle(angle_degree);
    	if (i >= 4) turn_angle(-angle_degree);
    }

    
    return 0;
}
