#pragma once

#include <random>
#include <iostream>

namespace Homemade
{
    class Random
    {
    public:
        static float Float(float min, float max);
        static double Double(double min, double max);
        static int Int(int min, int max);
        static unsigned int Uint(unsigned int min, unsigned int max);
    };
}