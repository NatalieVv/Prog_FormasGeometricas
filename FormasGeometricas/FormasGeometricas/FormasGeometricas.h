#pragma once

class FormaGeometrica
{
	protected: //classes derivadas consigam visualizar atributos e metodos no protected, filhos conseguem enxergar
		int m_x;
		int m_y;

	public:
		FormaGeometrica()
		{
			m_x = 0;
			m_y = 0;
		}

		FormaGeometrica(int x, int y) : m_x(x), m_y(y) //sobrecarga
		{
			//m_x = x;
			//m_y = y;
		}

		virtual void Desenhar() = 0; //virtual metodo pode ser sobrescrito
};
