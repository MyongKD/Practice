#pragma once
#include<random>
#include<chrono>

int64_t makeTimeSeed();
int8_t makeRandom_8bit(long long seed);
int16_t makeRandom_16bit(long long seed);
int32_t makeRandom_32bit(long long seed);
int64_t makeRandom_64bit(long long seed);