#include "TimerControlOS.h"


TimerControlOS::TimerControlOS(void)
{
    // Save time point at object constructor.
    T_origin = std::chrono::high_resolution_clock::now();
}

uint64_t TimerControlOS::millis(void)
{
    std::chrono::time_point<std::chrono::system_clock> T_point;
    // Get Current time point
    T_point = std::chrono::high_resolution_clock::now();
    // Calculate Time duration
    auto T_dur = std::chrono::duration_cast<std::chrono::milliseconds>(T_point - T_origin);
    // Return time duration in uint64_t 
    return static_cast<uint64_t>(T_dur.count());
}

uint64_t TimerControlOS::micros(void)
{
    std::chrono::time_point<std::chrono::system_clock> T_point;
    // Get Current time point
    T_point = std::chrono::high_resolution_clock::now();
    // Calculate Time duration
    auto T_dur = std::chrono::duration_cast<std::chrono::microseconds>(T_point - T_origin);
    // Return time duration in uint64_t 
    return static_cast<uint64_t>(T_dur.count());
}

