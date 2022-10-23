#include <iostream>
#include "modulos.cpp"

using namespace std;



int menu(){
    system("cls");
    int respFunction;
    int opcionesMenu;
    cout <<"**************************************************" <<endl;
    cout <<"*                PROGRAMAS                       *" <<endl;
    cout <<"*                 BASICOS                        *" <<endl;
    cout <<"*                  MENU                          *" <<endl;
    cout <<"**************************************************" <<endl;
    cout <<"0. Limpiar Consola"<<endl;
    cout <<"1. Operaciones Basicas"<<endl;
    cout <<"2. Par o Impar"<<endl;
    cout <<"3. Convertir"<<endl;
    cout <<"4. Palindromo"<<endl;
    cout <<"5. Arabigos a romanos"<<endl;
    cout <<"6. Numeros enteros a letras"<<endl;
    cout <<"8. Tabla"<<endl;
    cout <<"9. Tabla del 1 al 10"<<endl;
    cout <<"10. Tabla Grafica"<<endl;
    cout <<"11. Decimal a binario"<<endl;
    cout <<"12. Decimal a Hexadecimal"<<endl;
    cout <<"13. Figuras basicas"<<endl;
    cout <<"14. Mover puntero(C para cancelar)"<<endl;
    cout <<"15. Cajero Automatico"<<endl;
    cout <<"16. Calcular Hipotenusa"<<endl;
    cout <<"999. Salir"<<endl;
    cout << "-> Ingrese el numero de la opcion" << endl;
    cin >> opcionesMenu;
    

    switch (opcionesMenu)
    {
    case 1:
        respFunction =  operaciones();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break;
    case 2:
        respFunction = parOimpar();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break;
    case 3:
        respFunction = calcuConvertir();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 4:
        respFunction = palindromo();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 5:
        respFunction = convertiraRomanos();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 6:
        respFunction = numerosEnterosLetras();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break;
    case 8:
        respFunction = tabla();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 9:
        respFunction = tablaDel1al10();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 10:
        respFunction = tablaGrafica();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 11:
        respFunction = decimalABinario();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 12:
        respFunction = decimalAHexadecimal();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 13:
        respFunction = figurasBasicas();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 14:
        respFunction = moverpuntero();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 15:
        respFunction = cajeroAutomatico();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 
    case 16:
        respFunction = hipotenusa();
            if(respFunction == 1){
                menu();
            }else{
                cout << "Adios" << endl;
            }
        break; 

    case 999:
         cout << "Gracias" << endl;  
        break;       
    case 0:
        system("cls");
        menu();
    default:
        cout << "Opcion no valida, ingrese un valor valido" << endl;
        menu();
        break;
    }  
}




int main(){
   menu();
   system("pause");
}
