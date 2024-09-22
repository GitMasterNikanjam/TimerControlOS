// For compile and build:
// mkdir -p ./bin && g++ -o ./bin/ex1 ex1.cpp ../TimerControl.cpp

// For run:
// ./bin/ex1

// ############################################################################

#include <iostream>
#include "../TimerControl.h"

using namespace std;

TimerControl timer;

int main()
{

    while(1)
    {
        cout << timer.micros() << endl;

        timer.delayMicros(1000);
    }

    return 0;
}