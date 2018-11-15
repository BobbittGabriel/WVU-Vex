#include stdio.h
#include <unistd.h>

/*

The scissor lift may have set heights that it can be moved to with a
single button press.

A function could be

*/



int main() {

    while (1) {
        updateLift();
        // motors can only be updated every 20 ms
        usleep(20000);
    }

    return 0;
}
