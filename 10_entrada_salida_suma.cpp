/*Este programa lee la entrada de dos n�meros, y muestra en la salida est�ndar la suma de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritm�tico de suma*/

#include <iostream>//Librer�a est�ndar de entrada o salida de datos
#include <locale.h>//Librer�a est�ndar de localozaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librer�a y le colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol 
float numero1;//Definimos la variable 1
float numero2;//Definimos la variable 2
float sumando;//Definimos la variable que almacenar� la suma 

cout<<"Ingresa el primer n�mero"<<endl;//Solicitamos la entrada de la variable 1 
cin>>numero1; //Almacenamos la variable 1
cout<<"Ingresa el segundo n�mero"<<endl; //Solicitamos la entrada de la segunda variable
cin>>numero2; //Almacenamos la segunda variable
cout<<"La suma de ambos n�meros es: "<<endl;	
	sumando = numero1+numero2;//Realizamos la suma

	cout<<sumando<<endl; //Imprimimos el resultado
	
	return 0;
	
}

/* Este programa fue elaborado por Emilio Carca�o Bringas */

