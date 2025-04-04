#include "FrameTimer.h"

using namespace std::chrono;

Frametimer::Frametimer()
    : last(steady_clock::now())
{
}

float Frametimer::Mark()
{
    const auto old = last;
    last = steady_clock::now();
    const duration<float> frameTime = last - old;

    return frameTime.count();
}
