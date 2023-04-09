//***************************************************************************//
// Plantilla Proyecto Vacio C++ v1.0 (21/02/2023)                            //
//***************************************************************************//
//                                                                           //
// General   >  Dir Salida       > $(SolutionDir)\Bin                        //
//			 >  Dir Intermedio   > $(SolutionDir)\Tmp                        //
//			 >  Nombre Destino	 > $(ProjectName)         (Release / 64)     //
//			 >  Nombre Destino   > $(ProjectName)_d       (Debug / 64)       //
//			 >  Nombre Destino   > $(ProjectName)_32      (Release / 32)     //
//			 >  Nombre Destino   > $(ProjectName)_32d     (Debug / 32)       //
//                                                                           //
// Avanzado  >  Juego de caract  > Multibyte                                 //
// C/C++     >  General			 > Comp multiproc        > Si                //
//			 >  Optimizacion     > Tamaño o velocidad    > Codigo radido     //
//			 >  Gen de codigo    > Bib en tiempo de ej   > MT (Release)      //
//                               > Bib en tiempo de ej   > MTd (Debug)       //
//                               > Modelo de punt f1     > Rapido            //
//           >  Idioma           > Estandar del leng     > Ultimo borrador   //
//                                                                           //
//***************************************************************************//
#include <iostream>
#include "FormulaCuadratica.h"
#include <string>
#include <iomanip>


int main()
{
	
	const char* xPtr = nullptr;
	double num_a{};
	double num_b{};
	double num_c{};

	//constructor que inicializa la informacion
	formulaCuadratica::EcuacionCuadratica probando(num_a, num_b, num_c);

	std::cout << "Vamos hallar las raices del polinomio ax^2 + bx + c = 0. \n";


	while (true)
	{
		std::cout << "Ingresa el valor de a: ";
		if (!probando.validacionEntrada(num_a))
			std::cout << "Ingrese un numero.\n";
		else
			break;
	}
	//asignacion del primer valor
	probando.setValorA(num_a);

	while (true)
	{
		std::cout << "Ingresa el valor de b: ";
		if (!probando.validacionEntrada(num_b))
			std::cout << "Ingrese un numero.\n";
		else
			break;
	}
	//asignacion del primer valor
	probando.setValorB(num_b);

	while (true)
	{
		std::cout << "Ingresa el valor de c: ";
		if (!probando.validacionEntrada(num_c))
			std::cout << "Ingrese un numero.\n";
		else
			break;
	}
	//asignacion del primer valor
	probando.setValorC(num_c
	);

	//limpia la pantalla 
	system("cls");

	std::cout << "\nla letra a es:  " << probando.getValorA();
	std::cout << "\nla letra a es:  " << probando.getValorB();
	std::cout << "\nla letra a es:  " << probando.getValorC() << std::endl;

	std::cout << probando.mostrarDatosEcuacion() <<std::endl;

	std::cout <<probando.solucionCuadratica() <<std::endl;

	//detiene la ejecucion un momento hasta que el usuario decida
	system("pause");

	return 0;
}