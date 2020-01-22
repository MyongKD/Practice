#include"random.h"

int64_t makeTimeSeed() {
	auto current = std::chrono::system_clock::now();
	auto duration = current.time_since_epoch();
	auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

	return millis;
}

int8_t makeRandom_8bit(long long seed) {
	static std::mt19937_64 engine(seed);
	std::uniform_int_distribution<int16_t> distribution(INT8_MIN, INT8_MAX);
	return (int8_t)distribution(engine);
}
int16_t makeRandom_16bit(long long seed) {
	static std::mt19937_64 engine(seed);
	std::uniform_int_distribution<int16_t> distribution(INT16_MIN, INT16_MAX);
	return distribution(engine);
}
int32_t makeRandom_32bit(long long seed) {
	static std::mt19937_64 engine(seed);
	std::uniform_int_distribution<int32_t> distribution(INT32_MIN, INT32_MAX);
	return distribution(engine);
}
int64_t makeRandom_64bit(long long seed) {
	static std::mt19937_64 engine(seed);
	std::uniform_int_distribution<int64_t> distribution(INT64_MIN, INT64_MAX);
	return distribution(engine);
}

