#include "../include/HMRandom.h"

namespace Homemade
{
    static std::random_device rd;
    static std::mt19937 gen(rd());

    float Random::Float(float min, float max)
    {
        return static_cast<float>(Double(min, max));
    }

    double Random::Double(double min, double max)
    {
        static std::uniform_real_distribution<> distrib(min, max);
        
        return distrib(gen);
    }

    int Random::Int(int min, int max)
    {
        std::uniform_int_distribution<> distrib(min, max);
    
        return distrib(gen);
    }

    unsigned int Random::Uint(unsigned int min, unsigned int max)
    {
        static std::uniform_int_distribution<> distrib(min, max);
        
        return distrib(gen);
    }
}