#include "TimerControl.h"


TimerControl::TimerControl(void)
{
    // Save time point at object constructor.
    T_origin = std::chrono::high_resolution_clock::now();
}

uint64_t TimerControl::millis(void)
{
    std::chrono::time_point<std::chrono::system_clock> T_point;
    // Get Current time point
    T_point = std::chrono::high_resolution_clock::now();
    // Calculate Time duration
    auto T_dur = std::chrono::duration_cast<std::chrono::milliseconds>(T_point - T_origin);
    // Return time duration in uint64_t 
    return static_cast<uint64_t>(T_dur.count());
}

uint64_t TimerControl::micros(void)
{
    std::chrono::time_point<std::chrono::system_clock> T_point;
    // Get Current time point
    T_point = std::chrono::high_resolution_clock::now();
    // Calculate Time duration
    auto T_dur = std::chrono::duration_cast<std::chrono::microseconds>(T_point - T_origin);
    // Return time duration in uint64_t 
    return static_cast<uint64_t>(T_dur.count());
}

void TimerControl::reset(void)
{
    // Save time point at object constructor.
    T_origin = std::chrono::high_resolution_clock::now();
}

void TimerControl::delayMillis(uint64_t value)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(value));
}

void TimerControl::delayMicros(uint64_t value)
{
    std::this_thread::sleep_for(std::chrono::microseconds(value));
}

void TimerControl::delayMicrosHighPrecision(uint64_t value) 
{
    uint64_t start = micros();
    while ( (micros() - start) < value);
}