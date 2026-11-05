#include "roue.h"
#include <iostream>
Croue::Croue(int dimension, std::string marque, float pression) {
    this->dimension = dimension;
    this->marque = marque;
    this->pression = pression;

    }

    void Croue::gonfler()
    {

        this->pression = this->pression + 0.2;
    }
    void Croue::degonfler()
    {

        this->pression = this->pression - 0.2;
    }
    void Croue::afficher()
    {
        std::cout << "Marque : " << this->marque
            << "  Dimension : " << this->dimension
            << "  Pression : " << this->pression << " bars" << std::endl;
  
    }



