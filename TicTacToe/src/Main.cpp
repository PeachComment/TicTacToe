/*
 * Main.cpp
 *
 *  Created on: 16.12.2016
 *      Author: PeachComment
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Spielfeld.h"
using namespace std;

bool isFeldEingabe(string eingabe) {
	if (eingabe.length() < 3) {
		return false;
	}
	char c = eingabe.at(0);
	if (c != '1' && c != '2' && c != '3') {
		return false;
	}
	c = eingabe.at(1);
	if (c != ' ') {
		return false;
	}
	c = eingabe.at(2);
	if (c != '1' && c != '2' && c != '3') {
		return false;
	}
	return true;
}

int main() {

	Spielfeld* spielfeld = new Spielfeld();
	spielfeld->zeichnen();

	int spielerNr = 1;
	string eingabe = "";
	int zeile, spalte;

	while (true) {

		cout << endl;
		cout << "Eingabe Spieler " << spielerNr << ": ";
		getline(cin, eingabe);

		if (isFeldEingabe(eingabe)) {
			zeile = (eingabe.at(0) - '0') - 1;
			spalte = (eingabe.at(2) - '0') - 1;
			if (spielerNr == 1) {
				spielfeld->setX(zeile, spalte);
				spielerNr = 2;
			} else {
				spielfeld->setO(zeile, spalte);
				spielerNr = 1;
			}
			spielfeld->zeichnen();
		} else if (eingabe == "ende") {
			exit(0);
		} else {
			cout << "Fehler!" << endl;
		}

	}

	return 0;

}

