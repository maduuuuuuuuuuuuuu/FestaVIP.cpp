/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int idade;
    bool convite;
    
    cout << "Digite sua idade: " << endl;
    cin >> idade;
    
    cout << "Você tem um convite? (1 para SIM ou 0 para NÃO): " << endl;
    cin >> convite;
    
    if(idade >= 18 && convite == 1){
        cout << "Você poderá ir a festa" << endl;
    }
    else{
        cout << "Você não poderá comparecer a festa" <<endl;
    }
    
    return 0;
    
}