/*REvisar consolaAplication1 en la cual disene el programa para que no permita ingresar letras y permita numeros decimales*/
#include "FormulaCuadratica.h"
#include <iostream>
#include <cmath>
#include <iomanip>

namespace formulaCuadratica {

	formulaCuadratica::EcuacionCuadratica::EcuacionCuadratica(double a ={1}, double b={0}, double c={0})
	{
		m_variable = 'x';
		m_variablePtr = &m_variable;

		//si el usuario digita cero en el constructor se asignara uno 
		//por defecto.
		if(m_a==0)
			m_a = 1;
		//declaracion de las variables de entrada.
		m_a = a;
		m_b = b;
		m_c + c;
	}

	void EcuacionCuadratica::setValorA(double a)
	{
		m_a = a;
	}

	void EcuacionCuadratica::setValorB(double b)
	{
		m_b = b;
	}

	void EcuacionCuadratica::setValorC(double c)
	{
		m_c = c;
	}


	bool EcuacionCuadratica::validacionEntrada (double& valor)
	{
		std::cin >> valor;

		bool m_valor = std::cin.good();

		if (m_valor)
		{
			char c = static_cast<char>(std::cin.peek());
			m_valor = (c == '\n' || c == ' ');
		}

		if (!m_valor)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		return m_valor;

	}

	std::string EcuacionCuadratica::mostrarDatosEcuacion()
	{


		std::string ma = std::to_string(m_a);
		std::string mb = std::to_string(m_b);
		std::string mc = std::to_string(m_c);
		m_informacion = "La ecuacion cuadratica " + ma+"x^2 +" + mb + "x + "+ mc+ " = 0 ";
		// TODO: insert return statement here
		return m_informacion;
	}

	std::string EcuacionCuadratica::solucionCuadratica()
	{
		double x1 , x2 , parteRaiz;

		parteRaiz = pow(m_b, 2) - (4 * (m_a) * (m_c));

		if ( (parteRaiz) >=0 ) {

			x1 =  ( - m_b - sqrt(parteRaiz)/ (2 * m_a));
			x2 =  ( - m_b + sqrt(parteRaiz))/(2*m_a);


			std::string str_x1 = std::to_string(x1);
			std::string str_x2 = std::to_string(x2);

			m_solucionCuadratica = "La solucino de la ecuacion para x1 = " + str_x1 + ", para x2 = " + str_x2;
		}
		else {
			m_solucionCuadratica = "\nNo tiene raices reales!.\n";
		}

		return m_solucionCuadratica;
	}


}
