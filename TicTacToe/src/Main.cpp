/*
 * Main.cpp
 *
 *  Created on: 16.12.2016
 *      Author: PeachComment
 */

#include <iostream>
#include <string>
#include "Spielfeld.h"
using namespace std;

int main() {

	string eingabe;

	while (true) {

		cin >> eingabe;

		if (eingabe == "start") {
			Spielfeld* spielfeld = new Spielfeld();
			spielfeld->zeichnen();
		} else if (eingabe == "ende") {
			exit(0);
		} else {
			cout << "Fehler!" << endl;
		}

	}

	return 0;

}

