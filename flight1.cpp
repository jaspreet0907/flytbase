#include <cpp_api/navigation_bridge.h> //API

Navigation nav;
int main(int argc, char *argv[]){
    nav.take_off(5.0); // drone take off 
    nav.position_set(6.5,0,-5); //first position setpoint
    nav.position_set(6.5,6.5,-5); //second position setpoint
    nav.position_set(0,6.5,-5); // third position setpoint
    nav.position_set(0,0,-5); //fourth position setpoint
    nav.land(false); //Land
}

