#pragma once
#include "FormasGeometricas.h"

class Triangulo : public FormaGeometrica
{
	public:
		void Desenhar()
		{
			std::cout << "Oi, eu sou um triangulo!" << std::endl;
		}
};
