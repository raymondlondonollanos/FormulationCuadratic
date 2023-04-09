/*Elaboracion de la funcion cuadratica*/

#pragma once//asiganmos los header guards correspondientes
#include <string>
#include <string>
#ifndef FORMULA_CUADRATICA_H
#define FORMULA_CUADRATICA_H

//Utilizamos namespaces para evitar colision de nombres
namespace formulaCuadratica
{
	class EcuacionCuadratica
	{
	private:
		//Inicializacion de tres varialbes en cero.
		double m_a{};
		double m_b{};
		double m_c{};
		char m_variable;
		char* m_variablePtr;
		bool m_valor;
		std::string m_informacion;
		std::string m_solucionCuadratica;

	public:



		EcuacionCuadratica(double a , double b , double c);
		//se crearan tres metodos void
		void setValorA(double a);
		void setValorB(double b);
		void setValorC(double c);

		//se crearan tres metodos get 
		//recordar que las funciones triviales son consideras inlinea por eso no hay necesidad de crear otras y no se reptiten
		double getValorA() const { return m_a;};
		double getValorB() const{ return m_b; }
		double getValorC() const{ return m_c; }
		char* getChar() const { return m_variablePtr; }
		bool validacionEntrada (double& valor);
		std::string mostrarDatosEcuacion();
		std::string solucionCuadratica();
		

	};

}


#endif