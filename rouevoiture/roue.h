#pragma once
#include <string>



class Croue {
private:
		std::string marque;
		float pression;
		int dimension;

public:
	Croue(int dimension, std::string marque, float pression);
	void gonfler();
	void degonfler();
	void afficher();
	
};








