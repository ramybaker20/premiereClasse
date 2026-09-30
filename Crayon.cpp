#include "Crayon.h"
#include <iostream>
void Crayon::affiche()
{
	std::cout << "Le crayon 1 a les proprietes :\n";
	std::cout << "Longueur : " << diametre << std::endl;
	std::cout << "Diametre : " << longeur << std::endl;
}

Crayon::Crayon(int lg, float di)
{
	longeur = 10;
	diametre = 0.85;

}
