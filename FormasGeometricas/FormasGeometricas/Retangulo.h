#pragma once
#include "FormasGeometricas.h"
#include <iostream>

class Retangulo : public FormaGeometrica
{
	public:
		//Retangulo() : FormaGeometrica(){}
		
		Retangulo(int x, int y) : FormaGeometrica(x,y)
		{

		}		
		
		void Desenhar()
		{
			std::cout << "Oi, eu sou um retangulo!" << "  " << m_x << " - " << m_y << std::endl;
		}

};

