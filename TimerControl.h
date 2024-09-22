#ifndef TIMER_CONTROL_H
#define TIMER_CONTROL_H

// #########################################################################

#include <chrono>

class TimerControl
{
    public:

        // Calculate time from origin time point in milliseconds.
        uint64_t millis(void);

        // Calculate time from origin time point in microseconds.
        uint64_t micros(void);

        // Constructor.
        TimerControl();

    private:

        // Time origin point.
        std::chrono::time_point<std::chrono::system_clock> T_origin;
};


#endif  // _PRJ_TIMER_H_