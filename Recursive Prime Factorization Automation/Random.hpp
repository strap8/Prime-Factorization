#ifndef RANDOM_HPP
#define RANDOM_HPP
#include<iostream>
#include<random>
using uint32 = unsigned int;

class Random
{
public:
	Random() = default;
	Random(std::mt19937::result_type seed) : eng(seed) {}
	uint32 DrawNumber(uint32 min, uint32 max);

private:
	std::mt19937 eng{ std::random_device{}() };
};

uint32 Random::DrawNumber(uint32 min, uint32 max)
{
	return std::uniform_int_distribution<uint32>{min, max}(eng);
}
#endif
