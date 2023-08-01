#include "Util.h"
#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )


using namespace std;

Util::Util()
{
    //ctor
}

Util::~Util()
{
    //dtor
}

void Util::HomePage()
{
    SetConsoleOutputCP( 65001 );

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 9);


    cout << R"(

██╗░░░██╗░█████╗░██╗░░░██╗██████╗░    ██╗░░░░░░█████╗░██████╗░
╚██╗░██╔╝██╔══██╗██║░░░██║██╔══██╗    ██║░░░░░██╔══██╗██╔══██╗
░╚████╔╝░██║░░██║██║░░░██║██████╔╝    ██║░░░░░███████║██████╦╝
░░╚██╔╝░░██║░░██║██║░░░██║██╔══██╗    ██║░░░░░██╔══██║██╔══██╗
░░░██║░░░╚█████╔╝╚██████╔╝██║░░██║    ███████╗██║░░██║██████╦╝
░░░╚═╝░░░░╚════╝░░╚═════╝░╚═╝░░╚═╝    ╚══════╝╚═╝░░╚═╝╚═════╝░

)";

    SetConsoleTextAttribute(hConsole, 15);


}
