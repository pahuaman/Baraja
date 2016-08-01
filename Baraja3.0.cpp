#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

inline void Cleaning(){ Sleep(1000); system("cls"); }

class Mazo
{
public:
    void Corazones();  //corazones 3
    void Rombos();    //rombo 4
    void Trebols();  //trebol 5
    void Espadas(); //espada 6
    void Joker();
};

void Mazo :: Corazones()
{
    char a = 3;

    Sleep(900);
    cout<<"A"<<a;
    cout<<" ";

    for(int i = 2; i < 11; i++)
    {
       Sleep(900);
       cout<<""<<i;
       cout<<""<<a;
       cout<<" ";
    }//for

    Sleep(900);
    cout<<"J"<<a;
    cout<<" ";

    Sleep(900);
    cout<<"Q"<<a;
    cout<<" ";

    Sleep(900);
    cout<<"K"<<a;
    cout<<" ";

}//corazones 3

void Mazo :: Rombos()
{
    char b = 4;

    Sleep(900);
    cout<<"A"<<b;
    cout<<" ";

    for(int i = 2; i < 11; i++)
    {
       Sleep(900);
       cout<<""<<i;
       cout<<""<<b;
       cout<<" ";
    }//for

    Sleep(900);
    cout<<"J"<<b;
    cout<<" ";

    Sleep(900);
    cout<<"Q"<<b;
    cout<<" ";

    Sleep(900);
    cout<<"K"<<b;
    cout<<" ";

}//rombos 4

void Mazo :: Trebols()
{
    char c = 5;

    Sleep(900);
    cout<<"A"<<c;
    cout<<" ";

    for(int i = 2; i < 11; i++)
    {
       Sleep(900);
       cout<<""<<i;
       cout<<""<<c;
       cout<<" ";
    }//for

    Sleep(900);
    cout<<"J"<<c;
    cout<<" ";

    Sleep(900);
    cout<<"Q"<<c;
    cout<<" ";

    Sleep(900);
    cout<<"K"<<c;
    cout<<" ";

}//trebol 5

void Mazo :: Espadas()
{
    char d = 6;

    Sleep(900);
    cout<<"A"<<d;
    cout<<" ";

    for(int i = 2; i < 11; i++)
    {
       Sleep(900);
       cout<<""<<i;
       cout<<""<<d;
       cout<<" ";
    }//for

    Sleep(900);
    cout<<"J"<<d;
    cout<<" ";

    Sleep(900);
    cout<<"Q"<<d;
    cout<<" ";

    Sleep(900);
    cout<<"K"<<d;
    cout<<" ";

}//espadas 6

void Mazo :: Joker()
{
    Sleep(1000);
    cout<<"JOKER*";
}//Joker

int main()
{
    Mazo N;

    while(true)
    {
        system("color C");
        N.Corazones();
        cout<<"\n"<<endl;
        N.Rombos();
        cout<<"\n"<<endl;
        Cleaning();
        system("color B");
        N.Trebols();
        cout<<"\n"<<endl;
        N.Espadas();
        Cleaning();
        system("color C");
        N.Joker();
        Cleaning();
        system("color B");
        N.Joker();
        cout<<"\n"<<endl;
        Cleaning();

    }//while

    return 0;
}//main
