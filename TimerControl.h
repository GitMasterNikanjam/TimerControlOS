#ifndef TIMER_CONTROL_H
#define TIMER_CONTROL_H

// #########################################################################
// Include libraries:

#include <chrono>
#include <thread>

// ########################################################################
// TimerControl class

class TimerControl
{
    public:

        // Constructor. Init timer origin point.
        TimerControl();

        // Calculate time from origin time point in milliseconds.
        uint64_t millis(void);

        // Calculate time from origin time point in microseconds.
        uint64_t micros(void);

        // Reset timer to zero. Reset time origin point to new value.
        void reset(void);

        // Delay certain milliseconds by sleep the thread.
        void delayMillis(uint64_t value);

        // Delay certain microseconds by sleep the thread.
        void delayMicros(uint64_t value);

        // High precicion delay microseconds. It works by 
        void delayMicrosHighPrecision(uint64_t value);

    private:

        // Time origin point.
        std::chrono::time_point<std::chrono::system_clock> T_origin;
};


#endif  // _PRJ_TIMER_H_