/*
 * Spielfeld.cpp
 *
 *  Created on: 17.12.2016
 *      Author: PeachComment
 */

#include <iostream>
#include <string>
#include "Spielfeld.h"
using namespace std;

Spielfeld::Spielfeld() {
	initFelder();
}

void Spielfeld::zeichnen() {

		cout << "############################################################" << endl;
		cout << "|                    Tic Tac Toe                           |" << endl;
		cout << "############################################################" << endl;

		cout << endl;
		cout << "Spieler 1: X" << endl;
		cout << "Spieler 2: O" << endl;
		cout << endl;

		cout << "                   1         2         3                   " << endl;
		cout << "              #---------#---------#---------#              " << endl;
		cout << "              |         |         |         |              " << endl;
		cout << "            1 |    " << felder[0][0] << "    |    " << felder[0][1] << "    |    " << felder[0][2] << "    |              " << endl;
		cout << "              |         |         |         |              " << endl;
		cout << "              #---------#---------#---------#              " << endl;
		cout << "              |         |         |         |              " << endl;
		cout << "            2 |    " << felder[1][0] << "    |    " << felder[1][1] << "    |    " << felder[1][2] << "    |              " << endl;
		cout << "              |         |         |         |              " << endl;
		cout << "              #---------#---------#---------#              " << endl;
		cout << "              |         |         |         |              " << endl;
		cout << "            3 |    " << felder[2][0] << "    |    " << felder[2][1] << "    |    " << felder[2][2] << "    |              " << endl;
		cout << "              |         |         |         |              " << endl;
		cout << "              #---------#---------#---------#              " << endl;
}

void Spielfeld::initFelder() {
	for (int zeile = 0; zeile < 3; zeile++) {
		for (int spalte = 0; spalte < 3; spalte++) {
			felder[zeile][spalte] = " ";
		}
	}
}

void Spielfeld::setX(int zeile, int spalte) {
	setWertFuerFeld("X", zeile, spalte);
}

void Spielfeld::setO(int zeile, int spalte) {
	setWertFuerFeld("O", zeile, spalte);
}

void Spielfeld::setWertFuerFeld(string wert, int zeile, int spalte) {
	felder[zeile][spalte] = wert;
}

