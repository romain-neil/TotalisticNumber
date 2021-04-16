//
// Created by Romain Neil on 16/04/2021.
//

#include "Automate.h"

Automate::Automate(const std::string &line) {
	m_line = line;
}

void Automate::draw() {
	std::cout << m_line << std::endl;
}

void Automate::evolve() {
	const std::size_t line_size = m_line.size();
	std::string temp;

	for(std::size_t s = 0; s < line_size; s++) { //Pour chaque "cellule"
		int sum = 0;

		if(s > 0) {
			sum += valueAt(s - 1);
		}

		if(s < (line_size - 1)) {
			sum += valueAt(s + 1);
		}

		sum += valueAt(s);

		temp.push_back(getEvolution(sum));
	}

	m_line = temp;
}

int Automate::valueAt(std::size_t pos) {
	char c = (char) m_line.at(pos);

	return (int) c - 48;
}

char Automate::getEvolution(int sum) {
	switch(sum) {
		case 1:
		case 6:
		case 8:
			return '3';
		case 2:
		case 7:
			return '2';
		case 5:
		case 9:
			return '1';
		default:
			return '0';
	}
}

