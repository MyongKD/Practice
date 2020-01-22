#include"random.h"

std::mt19937_64 engine((unsigned int)time(NULL));

auto makeSeed() {
	auto current = std::chrono::system_clock::now();
	auto duration = current.time_since_epoch();
	auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

	return millis;
}