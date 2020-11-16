/*Este programa lee la entrada de dos números, y muestra en la salida estándar la suma de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritmético de suma*/

#include <iostream>//Librería estándar de entrada o salida de datos
#include <locale.h>//Librería estándar de localozación (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librería y le colocamos el valor para manejo de caracteres, le asignamos el idioma español 
float numero1;//Definimos la variable 1
float numero2;//Definimos la variable 2
float sumando;//Definimos la variable que almacenará la suma 

cout<<"Ingresa el primer número"<<endl;//Solicitamos la entrada de la variable 1 
cin>>numero1; //Almacenamos la variable 1
cout<<"Ingresa el segundo número"<<endl; //Solicitamos la entrada de la segunda variable
cin>>numero2; //Almacenamos la segunda variable
cout<<"La suma de ambos números es: "<<endl;	
	sumando = numero1+numero2;//Realizamos la suma

	cout<<sumando<<endl; //Imprimimos el resultado
	
	return 0;
	
}

/* Este programa fue elaborado por Emilio Carcaño Bringas */

