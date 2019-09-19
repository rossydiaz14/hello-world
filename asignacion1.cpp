/* Crear un programa en c++ que dados los valores de base, altura
y radio calcule el area de: un triangulo equilareto y un rectangulo 
calcule el volumen de: 
1) cono 
2) ciindro, segun corresponda 

Los valoes resultantes deben desplegarse en pantalla 

*/

#include<iostream>
#include<math.h>

using namespace std;
int main(){
	float base;
	float altura;
	float radio;  
	float area_del_equilatero = 0;
	float area_del_rectangulo = 0;
	float volumen_del_cono = 0; 
	float volumen_del_cilindro = 0;
	
		cout<<"Digite el valor de la base:";  cin>>base;	
	    cout<<"Digite el valor de la altura:"; cin>>altura;
	    cout<<"Digite el valor del radio:"; cin>>radio;
	     
	     area_del_equilatero = (sqrt(3)*pow(base,2))/4;
	     area_del_rectangulo = (base*altura);
	     volumen_del_cono = (M_PI*pow(radio,2)*altura)/3;
	     volumen_del_cilindro = (M_PI*pow(radio,2)*altura);
	     
	     cout<<"\nEl area_del_equilatero es:"<<area_del_equilatero<<endl;
		 cout<<"El area_del rectandulo es :"<<area_del_rectangulo<<endl;
		 cout<<"El volumen_del_cono:"<<volumen_del_cono<<endl;
		 cout<<"El volumen_del_cilindro:"<<volumen_del_cilindro<<endl;
	     
	
	return 0; 
}
