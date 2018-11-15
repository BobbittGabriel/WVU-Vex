#include "robot-config.h"
#include "math.h"

/*

I think the key to the upper hand (besides building awesome robots) is fluid driver
control. Controls need to be intuitive and responsive.


Mainly, we should avoid scenarios which cause the robot to stop responding to
user input, i.e. blocking functions which pause the main thread. For example,
the scissor lift should never be unresponsive even when it's raising and lowering.



Another important thing to consider is conversion.

*/



//  1. resolve axis direction as vector
//      - raw data is likely an integer, e.g. between 0 and 360
//      -
//  2. each motor has an associated normal vector
//  3. cross axis direction with motor normal
//      = ()
//  4. resultant vector's length is each motor rotation's scalar
//      e.g.:
//          1 = full speed forward
//          0.5 = half speed forward
//          -0.25 = quarter speed backwards

// motorSet(1, -C1LY - C1LX - C1RX);
// motorSet(2,  C1LY - C1LX - C1RX);
// motorSet(3,  C1LY + C1LX - C1RX);
// motorSet(4, -C1LY + C1LX - C1RX);

//functions ----------------------------------------------------
    //drive functions-------------------------------------------

        //"speed up" no instant acceleration, ease on motors

        //3 speeds fast, med, slow

        //control wheels with controller

        /* Pseudocode:



        */

    //



    //lift functions--------------------------------------------

        //lift to top post

        //lift to med post

        //lift down

        // ^^ controlled by tapping -- tapping up instructs the lift to
        // raise to the next position up. Should be able to double tap
        // to move from "down" to "top" immediately, vice versa downwards

        //control lift with controller

        // ^^ could be something like R1 R2

    //shooter functions-----------------------------------------

        //calculate distance to flag

        //calculate velocity needed to shoot

        //aim at flag

        // adjust aim for robot movement

        //kill button, switches to preset position with driver aiming

        //preset positions (need to pick where we what our presets to be)

    //intake functions------------------------------------------

        //always on....button to reverse, button stop

    //claw functions--------------------------------------------

        //press button to flip cap (keeps track of orientation so it flips cw then ccw)


// prepare for
void initialize() {

}

//
void autonomous() {

}

void manual() {
    while (1) {

        // checks happen every millisecond
        task::sleep(1);
    }
}

int main() {

    initialize();

    Competition.autonomous(autonomous);

    Competition.drivercontrol(manual);

}
