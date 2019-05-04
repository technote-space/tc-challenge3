#include<stdio.h>

int main() {
	for (int i = 1; i <= 150; i++) printf(i < 100 && (0 == i % 3 || 3 == i % 10) ? "%02d!\n" : "%03d\n", i);
}
