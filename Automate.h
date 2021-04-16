//
// Created by Romain Neil on 16/04/2021.
//

#ifndef AUTOMATECELLULAIRE_AUTOMATE_H
#define AUTOMATECELLULAIRE_AUTOMATE_H

#include <iostream>
#include <string>

class Automate {

	public:

		explicit Automate(const std::string &line);

		/**
		 * Draw the current automate
		 */
		void draw();

		/**
		 * Evolve the current line of life
		 */
		void evolve();

	private:

		int valueAt(std::size_t pos);

		/**
		 * Return the number of the sum if the inner cells
		 * @param sum the sum of the 3 cells
		 * @return the evolution number
		 */
		static char getEvolution(int sum);

		std::string m_line;

};


#endif //AUTOMATECELLULAIRE_AUTOMATE_H
