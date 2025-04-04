#pragma once

#include <chrono>

class Frametimer
{
public:
	Frametimer();
	float Mark();

private:
	std::chrono::steady_clock::time_point last;
};