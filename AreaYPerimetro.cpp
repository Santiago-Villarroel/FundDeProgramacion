// AreaYPerimetro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
	float perimetro,area,radio,pi;
	pi=3.1416;
	cout<<"introduzca el radio: "<<endl;
	cin>>radio;
	perimetro=2*pi*radio;
	area=pi*radio*radio;
	cout<<"El perimetro es: "<<perimetro<<endl;
	cout<<"El area es: "<<area;
	getch();
	return 0;
}

