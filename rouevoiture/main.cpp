#include "roue.h"
int main() {

	Croue mesroues[4] = {
	Croue(16, "Michelin", 2.2f),
	Croue(16, "Michelin", 2.2f),
	Croue(16, "Michelin", 2.2f),
	Croue(16, "Michelin", 2.2f),

	};
	mesroues[0].afficher();
	mesroues[0].gonfler();
	mesroues[0].afficher();
	return 0;
  }