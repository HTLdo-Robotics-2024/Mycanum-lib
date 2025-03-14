#include <kipr/wombat.h>


void forward(int time) {
	mav(0, 1000);
    mav(1, 1000);
    mav(2, 1000);
    mav(3, 1000);
    msleep(time);
}


void backward(int time) {
    mav(0, -1000);
    mav(1, -1000);
    mav(2, -1000);
    mav(3, -1000);
    msleep(time);
}


void left(int time) {
    mav(0, -1000);
    mav(1, 1000);
    mav(2, -1000);
    mav(3, 1000);
    msleep(time);
}


void right(int time) {
    mav(0, 1000);
    mav(1, -1000);
    mav(2, 1000);
    mav(3, -1000);
    msleep(time);
}

void back_left(int time) {
    mav(1, -1000);
    mav(3, -1000);
    msleep(1000);
}

void turn_left(int time) {
	mav(0, -1000);
    mav(1, -1000);
    mav(2, 1000);
    mav(3, 1000);
    msleep(time);
}


void turn_right(int time) {
	
    mav(0, 1000);
    mav(1, 1000);
    mav(2, -1000);
    mav(3, -1000);
    msleep(time);

}
