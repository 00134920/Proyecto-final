#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

/*Elaborar un programa que procese información sobre productos comprados por un
cliente en una tienda, a modo de procesamiento de una factura de compra*/
void leedatos();
void costo();
void muestradatos();
void costototal();
    int n;
    string factura[50][4];
//La función main, que solicita la cantidad de artículos
int main (){
    cout << "Ingrese la cantidad de articulos comprados" << endl;
    cin >> n;
    leedatos();
    costo();
    muestradatos();
    costototal();
system("pause");
return 0;
}
//Una función que lea los datos
void leedatos (){
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del producto n:" << i+1 << endl;
        cin >> factura[i][0];
        cout << "Cantidad" << endl;
        cin >> factura[i][1];
        cout << "Precio" << endl;
        cin >> factura[i][2];
    }
}
//Una función que calcule el costo por artículo 
void costo () {
    for (int i = 0; i < n; i++)
    {
        //Converti el string a float para la operación, y luego a string de nuevo para que no se desconfigure
        factura[i][3]=to_string(stof(factura[i][2])*stof(factura[i][1]));
    }
}
//Una función que despliegue el contenido del arreglo
void muestradatos (){
    cout << endl << "n NOMBRE CANTIDAD PRECIO TOTAL" << endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<". "<<factura[i][0]<<"    "<<factura[i][1]<<"   "<<factura[i][2]<<"   "<<factura[i][3]<<endl;
    }
}
//Una función que retorne el costo total de la compra
void costototal (){
    float ptot=0;
    for (int i = 0; i < n; i++)
    {
        ptot+=stof(factura[i][3]);
    }
    cout << "El total de compra es: " << ptot << endl;
}