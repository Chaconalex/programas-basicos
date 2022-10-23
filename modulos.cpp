#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
using namespace std;
int retornar;
int preguntarRetorno(){
        int respuesta;
        cout << " " << endl;
        cout << "Ingrese 2 para repetir la opcion, 1 para regresar al menu principal o 0 para salir del programa" << endl;
        cin >> respuesta;
        switch (respuesta)
        {
        case 1:
            return 1;
            break;
        case 2:
            return 2;
            break;
        case 0:
            return 0;
            break;
        }
};
int operaciones(){
    int operacion;
    int tipo;
    int num1;
    int num2;
    cout << "Bienvenido a Operaciones Basicas" << endl;
    cout << "-> Ingrese una opcion por favor"<<endl;
    cout << "       1.Suma"<<endl;
    cout << "       2.Multiplicion"<<endl;
    cout << "       3.Division"<<endl;
    cin >> tipo;
    switch (tipo){
    /*Suma*/ 
    case 1:
        cout << "Has seleccionado Suma"<<endl;
        cout << "Ingrese el primer numero a sumar" << endl;
        cin >> num1;
        cout << "Ingrese el segundo numero a sumar" << endl;
        cin >> num2;
        operacion = num1 + num2;
        cout << "La suma es: " << operacion << endl;
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            operaciones();
        }else{
             return retornar;
        }
       
        break;
    /*Multiplicion*/ 
    case 2:
        cout << "Has seleccionado Multiplicion"<<endl;
        cout << "Ingrese el primer numero a multiplicar" << endl;
        cin >> num1;
        cout << "Ingrese el segundo numero a multiplicar" << endl;
        cin >> num2;
        operacion = num1 * num2;
        cout << "La Multiplicion es: " << operacion << endl;
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            operaciones();
        }else{
             return retornar;
        }
        break;
    /*Division*/
    case 3:
        cout << "Has seleccionado Division"<<endl;
        cout << "Ingrese el primer numero a dividir" << endl;
        cin >> num1;
        cout << "Ingrese el segundo numero a dividir" << endl;
        cin >> num2;
        operacion = num1 / num2;
        cout << "La Division es: " << operacion << endl;
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            operaciones();
        }else{
             return retornar;
        }
        break;
    default:
        cout << "Ingrese una opcion valida por favor" << endl;
        operaciones();
        break;
    }
};

int parOimpar(){
    int num1;
    int saber;
    cout << "Bienvenido a Saber si un numero es par o impar" << endl;
    cout << "Ingrese su numero por favor" << endl;
    cin >> num1;
    saber = (num1 % 2);
   
    if(saber == 0){
        cout << "El numero: " << num1 << " es par" << endl;
    }else{
        cout << "El numero: " << num1 << " es impar" << endl;
    }
    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        parOimpar();
    }else{
        return retornar;
    }
};


int calcuConvertir(){
    
    int tipo;
    double operacion;
    int queEs;
    int valor;
    cout << "Bienvenido a Convertidor" << endl;
    cout << "-> Ingrese una opcion por favor"<<endl;
    cout << "       1.Kilometros a Millas o viceversa"<<endl;
    cout << "       2.Metros a Pulgadas o viceversa"<<endl;
    cout << "       3.Libras a Kilos o viceversa"<<endl;
    cin >> tipo;

    switch (tipo)
    {
    case 1:
        cout << "Ingrese 1 para kilometros o 2 para millares" << endl;
        cin >> queEs;
        if(queEs ==1){
            cout << "Ingrese los kilometros" << endl;
            cin >> valor;
            operacion = (valor / 1.609);
            cout << operacion <<" Millas" << endl;
        }
        if(queEs == 2){
            cout << "Ingrese las Millas" << endl;
            cin >> valor;
            operacion = (valor / 1.609);
            cout << operacion <<" Kilometros" << endl;
        }
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            calcuConvertir();
        }else{
            return retornar;
        }
        break;

    case 2:
        cout << "Ingrese 1 para Metros o 2 para Pulgadas" << endl;
        cin >> queEs;
        if(queEs == 1 ){
            cout << "Ingrese los Metros" << endl;
            cin >> valor;
            operacion = (valor * 39.37);
            cout << operacion <<" Pulgadas" << endl;
        }
        if(queEs == 2){
            cout << "Ingrese las Pulgadas" << endl;
            cin >> valor;
            operacion = (valor / 39.37);
            cout << operacion <<" Metros" << endl;
        }
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            calcuConvertir();
        }else{
            return retornar;
        }
        break;   

    case 3:
        cout << "Ingrese 1 para Libras o 2 para Kilos" << endl;
        cin >> queEs;
        if(queEs == 1){
            cout << "Ingrese las Libras" << endl;
            cin >> valor;
            operacion = (valor / 2.205);
            cout << operacion <<" Kilos" << endl;
        }
        if(queEs == 2){
            cout << "Ingrese los Kilos" << endl;
            cin >> valor;
            operacion = (valor * 2.205);
            cout << operacion <<" Libras" << endl;
        }
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            calcuConvertir();
        }else{
            return retornar;
        }
        break;

    default:
        cout << "Ingrese una opcion valida por favor" << endl;
        calcuConvertir();
        break;
        
    }
};


int palindromo(){
    string cadena;
    cout << "Bienvenido a Saber si un numero o palabra es palindrome" << endl;
    cout << "Ingrese la palabra o numero: " << endl;
    cin >> cadena;
    if(cadena == string(cadena.rbegin(), cadena.rend())){
        cout << cadena << " Si es palindrome" << endl;
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            palindromo();
        }else{
            return retornar;
        }
    }else{
        cout << cadena << " No es palindrome" << endl;
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            palindromo();
        }else{
            return retornar;
        }
    }
};



int convertiraRomanos(){
    int numero, unidades, decenas, centenas, millares;
    string cadena;
    cout << "Bienvenido a Conversion de numeros arabigos a romanos" << endl;
    cout << "Ingrese un numero por favor" << endl;
    cin >> numero;
    unidades = numero%10;
    numero /= 10;
    decenas = numero%10;
    numero /= 10;
    centenas = numero%10;
    numero /= 10;
    millares = numero%10;
    numero /= 10;

    switch (millares)
    {
    case 1: cout <<"M"; break;
    case 2: cout <<"MM" ; break;
    case 3: cout <<"MMM"; break;
    }
    switch (centenas)
    {
    case 1: cout <<"C" ; break;
    case 2: cout <<"CC" ; break;
    case 3: cout <<"CCC"; break;
    case 4: cout <<"CD"; break;
    case 5: cout <<"D"; break;
    case 6: cout <<"DC"; break;
    case 7: cout <<"DCC"; break;
    case 8: cout <<"DCCC"; break;
    case 9: cout <<"CM"; break;
    }
    switch (decenas)
    {
    case 1: cout <<"X"; break;
    case 2: cout <<"XX"; break;
    case 3: cout <<"XXX"; break;
    case 4: cout <<"XL"; break;
    case 5: cout <<"L"; break;
    case 6: cout <<"LX" ; break;
    case 7: cout <<"LXX"; break;
    case 8: cout <<"LXXX" ; break;
    case 9: cout <<"XC" ; break;
    }
    switch (unidades)
    {
    case 1: cout <<"I" ; break;
    case 2: cout <<"II" ; break;
    case 3: cout <<"III" ; break;
    case 4: cout <<"IV" ; break;
    case 5: cout <<"V" ; break;
    case 6: cout <<"VI" ; break;
    case 7: cout <<"VII" ; break;
    case 8: cout <<"VIII" ; break;
    case 9: cout <<"IX" ; break;
    }

    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        convertiraRomanos();
    }else{
        return retornar;
    }
};

int numerosEnterosLetras(){
        int numero, unidades, decenas, centenas, millares;
    string cadena;
    cout << "Bienvenido a Conversion de numeros enteros a letras" << endl;
    cout << "Ingrese un numero por favor" << endl;
    cin >> numero;
    if(numero >=11 and numero <=19){
        switch (numero)
        {
        case 11: cout <<"once" ; break;
        case 12: cout <<"doce" ; break;
        case 13: cout <<"trece" ; break;
        case 14: cout <<"catorce" ; break;
        case 15: cout <<"quince" ; break;
        case 16: cout <<"diesiseis" ; break;
        case 17: cout <<"diesisiete" ; break;
        case 18: cout <<"diesiocho" ; break;
        case 19: cout <<"diesinueve" ; break;
        }
        retornar = preguntarRetorno();
        if(retornar==2){
            system("cls");
            numerosEnterosLetras();
        }else{
            return retornar;
        }
    }else{
    unidades = numero%10;
    numero /= 10;
    decenas = numero%10;
    numero /= 10;
    centenas = numero%10;
    numero /= 10;
    millares = numero%10;
    numero /= 10;
    

    switch (millares)
    {
    case 1: cout <<"Mil"; break;
    case 2: cout <<"DosMil" ; break;
    case 3: cout <<"TresMil"; break;
    }
    switch (centenas)
    {
    case 1: cout <<"ciento " ; break;
    case 2: cout <<"docientos " ; break;
    case 3: cout <<"trecientos "; break;
    case 4: cout <<"cuatrocientos "; break;
    case 5: cout <<"quinientos "; break;
    case 6: cout <<"seiscientos"; break;
    case 7: cout <<"sietecientos"; break;
    case 8: cout <<"ochocientos"; break;
    case 9: cout <<"novecientos"; break;
    }
    switch (decenas)
    {
    case 1: cout <<"diez"; break;
    case 2: cout <<"veinti"; break;
    case 3: cout <<"treinta y "; break;
    case 4: cout <<"cuarenta y "; break;
    case 5: cout <<"cincuenta y "; break;
    case 6: cout <<"sesenta y " ; break;
    case 7: cout <<"setenta y "; break;
    case 8: cout <<"ochenta y " ; break;
    case 9: cout <<"noventa y " ; break;
    }
    switch (unidades)
    {
    case 1: cout <<"uno " ; break;
    case 2: cout <<"dos " ; break;
    case 3: cout <<"tres " ; break;
    case 4: cout <<"cuatro " ; break;
    case 5: cout <<"cinco " ; break;
    case 6: cout <<"seis " ; break;
    case 7: cout <<"siete " ; break;
    case 8: cout <<"ocho " ; break;
    case 9: cout <<"nueve" ; break;
    }

    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        numerosEnterosLetras();
    }else{
        return retornar;
    }
    }

    
}

// falta la opcion ocho


int tabla(){
    cout << "Bienvenido a Tabla de multiplicar" << endl;
    cout << "____________" << endl;
    cout << "|" <<"10" <<" * "<<"1"<<" = "<<10*1<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"2"<<" = "<<10*2<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"3"<<" = "<<10*3<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"4"<<" = "<<10*4<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"5"<<" = "<<10*5<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"6"<<" = "<<10*6<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"7"<<" = "<<10*7<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"8"<<" = "<<10*8<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"9"<<" = "<<10*9<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"10"<<" = "<<10*10<<"|"<<endl;
    cout << "____________" << endl;
    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        tabla();
    }else{
        return retornar;
    }
}


int tablaDel1al10(){
    cout << "Bienvenido a Tablas de multiplicar del 1 al 10" << endl;
    for(int i = 1; i <= 10; i++){
    cout << "_________Tabla del: "<<i<<" _________"<<endl;
    cout << "|" <<"10" <<" * "<<"1"<<" = "<<i*1<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"2"<<" = "<<i*2<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"3"<<" = "<<i*3<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"4"<<" = "<<i*4<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"5"<<" = "<<i*5<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"6"<<" = "<<i*6<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"7"<<" = "<<i*7<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"8"<<" = "<<i*8<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"9"<<" = "<<i*9<<"|"<<endl;
    cout << "|" <<"10" <<" * "<<"10"<<" = "<<i*10<<"|"<<endl;
    }
    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        tablaDel1al10();
    }else{
        return retornar;
    }
}


int tablaGrafica(){
    int num1, num2, unidades, decenas, matenernum2;
    cout << "Bienvenido a Tablas Graficas" << endl;
    cout << "Ingrese el primer numero"<<endl;
    cin >> num1;
    cout << "Ingrese el segundo numero"<<endl;
    cin >> num2;
    matenernum2 = num2;
    cout << "    "<<num1<<endl;
    cout << "   x"<<num2<<endl;
    cout << "________" <<endl;
    unidades = num2%10;
    num2 /= 10;
    decenas = num2%10;
    num2 /= 10;
    cout << "    "<<num1*unidades<<endl;
    cout << " "<<num1*decenas<<endl;
    cout << "________" << endl;
    cout << " "<<num1 * matenernum2<<endl;
    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        tablaGrafica();
    }else{
        return retornar;
    }

    
}

int decimalABinario(){
    int num1;
    string binario;
    cout << "Bienvenido a Decimal a Binario" << endl;
    cout << "Ingrese el numero a convertir por favor"<<endl;
    cin >> num1;
    while(num1>=1){
        binario += to_string(num1%2);
        num1/=2;
    }
    // Escribir el texto al reves
    cout << string(binario.rbegin(), binario.rend()) << endl;
    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        decimalABinario();
    }else{
        return retornar;
    }
}

int decimalAHexadecimal(){
    int num1, mantenernum1;
    string hexadecimal;
    cout << "Bienvenido a Decimal a Hexadecimal" << endl;
    cout << "Ingrese el numero a convertir por favor"<<endl;
    cin >> num1;
    mantenernum1 = num1;
    while(num1>=0){
        //cout << num1;
        switch (num1)
        {
        case 0: hexadecimal += "0"; break;
        case 1: hexadecimal += "1"; break;
        case 2: hexadecimal += "2"; break;
        case 3: hexadecimal += "3"; break;
        case 4: hexadecimal += "4"; break;
        case 5: hexadecimal += "5"; break;
        case 6: hexadecimal += "6"; break;
        case 7: hexadecimal += "7"; break;
        case 8: hexadecimal += "8"; break;
        case 9: hexadecimal += "9"; break;
        case 10: hexadecimal += "A"; break;
        case 11: hexadecimal += "B"; break;
        case 12: hexadecimal += "C"; break;
        case 13: hexadecimal += "D"; break;
        case 14: hexadecimal += "E"; break;
        case 15: hexadecimal += "F"; break;
        default:
            break;
        }
        num1/=16;
        mantenernum1/=num1;
        cout << num1 << endl;
        cout << mantenernum1 << endl;
        if(num1 == 0){
            break;
        }
    }
   // cout << string(hexadecimal.rbegin(), hexadecimal.rend()) << endl;

    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        decimalAHexadecimal();
    }else{
        return retornar;
    }
}

int figurasBasicas(){
    cout << "Bienvenido a Figuras Basicas" << endl;
    cout << "    *****    "<<endl;
    cout << "  *      *"<<endl;
    cout << " *        *"<<endl;
    cout << "*          *"<<endl;
    cout << "*           *"<<endl;
    cout << " *         *"<<endl;
    cout << "  *       *"<<endl;
    cout << "   *     *"<<endl;
    cout << "    *****"<<endl;

    cout << "*********"<<endl;
    cout << "*       *"<<endl;
    cout << "*       *"<<endl;
    cout << "*       *"<<endl;
    cout << "*       *"<<endl;
    cout << "*********"<<endl;

    cout << "      *      "<<endl;
    cout << "     * *     "<<endl;
    cout << "    *   *    "<<endl;
    cout << "   *     *   "<<endl;
    cout << "  *       *  "<<endl;
    cout << " *         * "<<endl;
    cout << "*           *"<<endl;
    cout << "*************"<<endl;

    cout << "******************"<<endl;
    cout << "*                *"<<endl;
    cout << "*                *"<<endl;
    cout << "*                *"<<endl;
    cout << "******************"<<endl;

    cout << "      *      "<<endl;
    cout << "     * *     "<<endl;
    cout << "    *   *    "<<endl;
    cout << "   *     *   "<<endl;
    cout << "  *       *  "<<endl;
    cout << " *         * "<<endl;
    cout << "*           *"<<endl;
    cout << " *         * "<<endl;
    cout << "  *       *  "<<endl;
    cout << "   *     *   "<<endl;
    cout << "    *   *    "<<endl;
    cout << "     * *     "<<endl;
    cout << "      *      "<<endl;


    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        figurasBasicas();
    }else{
        return retornar;
    }
}


int moverpuntero(){
    /* Teclas por codigo virtual_key
    VK_LEFT	0x25	Tecla FLECHA IZQUIERDA
    VK_UP	0x26	Tecla FLECHA ARRIBA
    VK_RIGHT	0x27	Tecla DE FLECHA DERECHA
    VK_DOWN	0x28	Tecla FLECHA ABAJO
    0x43            Tecla C
    */
    system("cls");
    cout << "Bienvenido a Mover puntero" << endl;
    cout << "Usar las flechas para moverse" << endl;
    cout << "C para cancelar" << endl;
    COORD coord ={0,0};
    while(1){
        if(GetAsyncKeyState(0x27)){
            coord.X += 2;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            cout << ".";
        }
        if(GetAsyncKeyState(0x28)){
            coord.Y += 2;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            cout << ".";
        }
        if(GetAsyncKeyState(0x25)){
            coord.X -= 2;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            cout << ".";
        }
        if(GetAsyncKeyState(0x26)){
            coord.Y -= 2;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            cout << ".";
        }
        if(GetAsyncKeyState(0x43)){
            
            system("cls");
            retornar = preguntarRetorno();
            if(retornar==2){
                system("cls");
                moverpuntero();
            }else{
                return retornar;
            }
            break;
        }
        Sleep(100);
    }



}



int opciones(){
    int opcion;
    cout << "1. Retiro de efectivo"<< endl;
    cout << "2. Consulta de saldo"<< endl;
    cout << "3. Adelanto salarial"<< endl;
    cout << "4. Monto variable"<< endl;
    cout << "Ingrese una opcion por favor " << endl;
    cin >> opcion;
    return opcion;
}

int cajeroAutomatico(){
    string tarjeta;
    int opcionResult, dinero, adelanto, retiro, continuar, montovariable;
    dinero = 5000;
    cout << "Bienvenido a Cajero Automatico" << endl;
    cout << "Ingrese su tarjeta por favor(Nombre)" << endl;
    cin >> tarjeta;
    cout << "Bienvenido "<< tarjeta << endl;
    opcionResult = opciones();
    switch (opcionResult)
    {
    case 1:
        cout << "Cuanto desea retirar?" << endl;
        cout << "1. 50" << endl;
        cout << "2. 100" << endl;
        cout << "3. 500" << endl;
        cout << "4. 1000" << endl;
        cout << "5. 2000" << endl;
        cin >> retiro;
            switch (retiro)
            {
            case 1:
            if(dinero>=retiro){
                cout << "Se ha retirado 50 exitosamente" << endl;
                dinero -= 50;
                cout << "Desea realizar otra transaccion?1 para continuar 0 para salir" << endl;
                cin >> continuar;
                if(continuar == 1){
                    opciones();
                }else{
                    retornar = preguntarRetorno();
                    if(retornar==2){
                        system("cls");
                        moverpuntero();
                    }else{
                        return retornar;
                    }
                }
            }else{
                cout << "Fondos insuficientes" << endl;
                Sleep(3000);
                opciones();
            }
            break;

            case 2:
            if(dinero>=retiro){
                cout << "Se ha retirado 100 exitosamente" << endl;
                dinero -= 100;
                cout << "Desea realizar otra transaccion?1 para continuar 0 para salir" << endl;
                cin >> continuar;
                if(continuar == 1){
                    opciones();
                }else{
                    retornar = preguntarRetorno();
                    if(retornar==2){
                        system("cls");
                        moverpuntero();
                    }else{
                        return retornar;
                    }
                }
            }else{
                cout << "Fondos insuficientes" << endl;
                Sleep(3000);
                opciones();
            }
            break;
            
            case 3:
            if(dinero>=retiro){
                cout << "Se ha retirado 500 exitosamente" << endl;
                dinero -= 500;
                cout << "Desea realizar otra transaccion?1 para continuar 0 para salir" << endl;
                cin >> continuar;
                if(continuar == 1){
                    opciones();
                }else{
                    retornar = preguntarRetorno();
                    if(retornar==2){
                        system("cls");
                        moverpuntero();
                    }else{
                        return retornar;
                    }
                }
            }else{
                cout << "Fondos insuficientes" << endl;
                Sleep(3000);
                opciones();
            }
            break;

            case 4:
            if(dinero>=retiro){
                cout << "Se ha retirado 1000 exitosamente" << endl;
                dinero -= 1000;
                cout << "Desea realizar otra transaccion?1 para continuar 0 para salir" << endl;
                cin >> continuar;
                if(continuar == 1){
                    opciones();
                }else{
                    retornar = preguntarRetorno();
                    if(retornar==2){
                        system("cls");
                        moverpuntero();
                    }else{
                        return retornar;
                    }
                }
            }else{
                cout << "Fondos insuficientes" << endl;
                Sleep(3000);
                opciones();
            }
            break;

            case 5:
            if(dinero>=retiro){
                cout << "Se ha retirado 2000 exitosamente" << endl;
                dinero -= 2000;
                cout << "Desea realizar otra transaccion?1 para continuar 0 para salir" << endl;
                cin >> continuar;
                if(continuar == 1){
                    opciones();
                }else{
                    retornar = preguntarRetorno();
                    if(retornar==2){
                        system("cls");
                        moverpuntero();
                    }else{
                        return retornar;
                    }
                }
            }else{
                cout << "Fondos insuficientes" << endl;
                Sleep(3000);
                opciones();
            }
            break;

            default:
                break;
            }
        break;

    case 2:
        cout << "Tu saldo actual es de: " << dinero << endl;

        cout << "Desea realizar otra transaccion?1 para continuar 0 para salir" << endl;
                cin >> continuar;
                if(continuar == 1){
                    opciones();
                }else{
                    retornar = preguntarRetorno();
                    if(retornar==2){
                        system("cls");
                        moverpuntero();
                    }else{
                        return retornar;
                    }
                }
        break;

    case 3:
        if(adelanto == 0){
            cout << "Se te a sumado 750 a tu cuenta" << endl;
            adelanto =1;
        }else{
            cout << "Ya has alcanzado el maximo de credito para tu cuenta" << endl;
        }
        cout << "Desea realizar otra transaccion?1 para continuar 0 para salir" << endl;
                cin >> continuar;
                if(continuar == 1){
                    opciones();
                }else{
                    retornar = preguntarRetorno();
                    if(retornar==2){
                        system("cls");
                        moverpuntero();
                    }else{
                        return retornar;
                    }
                }        
        break;
    case 4:
        cout << "Ingrese el monto variable" << endl;
        cin >> montovariable;
        if(dinero>=montovariable){
        cout << "Se ha retirado 50 exitosamente" << endl;
        dinero -= 50;
        cout << "Desea realizar otra transaccion?1 para continuar 0 para salir" << endl;
        cin >> continuar;
        if(continuar == 1){
            opciones();
        }else{
            cout << "Fondos insuficientes" << endl;
            Sleep(3000);
            opciones();        
        }
    default:
        break;
    }


    }
}


int hipotenusa(){
    int num1,num2;
    double hipo;
    cout << "Bienvenido a calcupar hipotenusa" << endl;
    cout << "Ingrese el primer cateto" << endl;
    cin >> num1;
    cout << "Ingrese el segundo cateto" << endl;
    cin >> num2;
    hipo = sqrt(pow(num1,2)+pow(num2,2));
    cout << "La hipotenusa es: " << hipo<< endl;
    retornar = preguntarRetorno();
    if(retornar==2){
        system("cls");
        moverpuntero();
    }else{
        return retornar;
    }
}
