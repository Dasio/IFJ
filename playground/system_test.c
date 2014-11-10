#include "../system.h"

int main() {
	int low_bound = 5;
	int high_bound = 150;

	for(int i = 0; i < 1000*1000*10; i++) {
		int random = RandInt(low_bound, high_bound);
		assert(random <= high_bound);
		assert(random >= low_bound);
	}
}
