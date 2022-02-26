#include <cpp_api/navigation_bridge.h> //API

Navigation nav;
int main(int argc, char *argv[]){
    nav.take_off(5.0); // drone take off 
    nav.position_set(6.5,0,0); //first position setpoint
    nav.position_set(0,6.5,0); //second position setpoint
    nav.position_set(-6.5,0,0); // third position setpoint
    nav.position_set(0,-6.5,0); //fourth position setpoint
    nav.land(false); //Land
}

