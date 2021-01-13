#include "tensorflow/lite/micro/examples/motion_detector/main_functions.h"

extern "C"{
    void runMotionDetector(void);
}
void legToggle(){};

void runMotionDetector(void){
    setup();

    while(true){
        loop();
    }
}