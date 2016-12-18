/*
 * Spielfeld.h
 *
 *  Created on: 17.12.2016
 *      Author: Wencke
 */

#ifndef SPIELFELD_H_
#define SPIELFELD_H_

#include <string>
using namespace std;

class Spielfeld {

public:

	Spielfeld();

	void zeichnen();

	void setX(int zeile, int spalte);
	void setO(int zeile, int spalte);

private:

	string felder[3][3];

	void initFelder();

	void setWertFuerFeld(string wert, int zeile, int spalte);

};

#endif /* SPIELFELD_H_ */
