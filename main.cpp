#include <thread>
#include <chrono>

#include "Automate.h"

int main() {
	Automate automate("0001000");

	const int nb_steps = 5;

	automate.draw();

	for(int i = 0; i < nb_steps; i++) {
		automate.evolve();
		automate.draw();

		std::this_thread::sleep_for(std::chrono::seconds (1));
	}

	return 0;
}
