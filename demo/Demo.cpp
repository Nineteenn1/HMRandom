#include "../random/include/HMRandom.h"

int main()
{
    std::cout << "Random Uint: " << Homemade::Random::Uint(1, 10) << std::endl;
    std::cout << "Random Int: " << Homemade::Random::Int(-10, 0) << std::endl;
    std::cout << "Random Float: " <<  Homemade::Random::Float(0.7f, 9.1f) << std::endl;
    std::cout << "Random Double: " << Homemade::Random::Double(0.7, 9.1) << std::endl;

    std::cin.get();
}