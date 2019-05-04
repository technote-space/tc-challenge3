#include <iostream>
#include <string>
#include <iomanip>

int main() {
	for (int i = 1, j = 0; i <= 150; i++, j = i < 100 && (0 == i % 3 || 3 == i % 10)) std::cout << std::setw(j ? 2 : 3) << std::setfill('0') << i << (j ? "!" : "") << std::endl;
}
