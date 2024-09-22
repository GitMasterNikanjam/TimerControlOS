// For compile and build:
// mkdir -p ./bin && g++ -o ./bin/ex1 ex1.cpp ../TimerControl.cpp

// For run:
// ./bin/ex1

// ############################################################################

#include <iostream>
#include "../TimerControl.h"

using namespace std;

TimerControl timer;
uint64_t T;

int main()
{

    while(1)
    {
        
        T = timer.micros();

        timer.delayMicrosHighPrecision(1000);

        cout << timer.micros() - T << endl;
    }

    return 0;
}