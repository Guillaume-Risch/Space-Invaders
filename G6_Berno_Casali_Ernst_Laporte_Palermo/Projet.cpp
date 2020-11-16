/*!
  * \file main.cpp
  * \author Alain Casali Marc Laporte
  * \date 7 janvier 2016
  * \brief Projet de C++ simulant un SpaceInvader
  * \version 1.0
  * \bug Aucun connu
  */

#include <iostream>
#include <fstream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "Correc_prof/SpaceInvader_AC.h"

using namespace std;

void ClearScreen ()
{
    cout << "\033[H\033[2J";
}


void ShowFile (const string & FileName)
{
    ifstream ifs (FileName);
    for (string Line; getline (ifs, Line);)
        cout << Line << endl;
    cout << endl;
} //ShowFile ()

void Menu (void)
{
    int RetourMenu;
    ifstream ifs;
    string ligne;
    ifstream ifs2;
    ifstream ifs3;
    ifs.open("../Ressources/menu.txt");
    while(true)
    {
        getline (ifs, ligne);
        if (ifs.eof()) break;
        cout << ligne << endl;
    }
    cout << endl;
    int n;
    cin >> n;
    switch (n) {
    case 1:
        //appel du mode solo
        unsigned score;
        score=nsSpaceInvader_AC::ppal("../G6_Berno_Casali_Ernst_Laporte_Palermo/Correc_prof/",0);
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        cout<<"Votre score final : "<<score<<endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        break;

    case 2:
         unsigned scoreJ1;
         unsigned scoreJ2;
         cout << "Au Joueur 1 de jouer \n";
         for (int i=4; i>0; --i) {
            cout << i << endl;
            this_thread::sleep_for (std::chrono::seconds(1));
         }
         scoreJ1=nsSpaceInvader_AC::ppal("../G6_Berno_Casali_Ernst_Laporte_Palermo/Correc_prof/",1);
         std::this_thread::sleep_for(std::chrono::milliseconds(2000));

         cout<<"Au Joueur 2 de jouer \n";

         for (int i=4; i>0; --i) {
            cout << i << endl;
            this_thread::sleep_for (std::chrono::seconds(1));
         }

         scoreJ2=nsSpaceInvader_AC::ppal("../G6_Berno_Casali_Ernst_Laporte_Palermo/Correc_prof/",2);
         std::this_thread::sleep_for(std::chrono::milliseconds(2000));

         if(scoreJ2 > scoreJ1)
         {
            cout<<"Le joueur 2 a gagné avec : " << scoreJ2<< " points"<<endl;
         }
         if(scoreJ1 > scoreJ2)
         {
            cout<<"Le joueur 1 a gagné avec : "<< scoreJ1 << " points"<<endl;
         }
             std::this_thread::sleep_for(std::chrono::milliseconds(4000));

         if(scoreJ2 == scoreJ1)
         {
            ShowFile("../Corecc_prof/draw.txt");
         }
         std::this_thread::sleep_for(std::chrono::milliseconds(2000));

         break;






        case 3:
            ClearScreen();
            ifs2.open ("../Ressources/commandes.txt");
            while(true)
            {
                getline (ifs2, ligne);
                if (ifs2.eof()) break;
                cout << ligne << endl;
            }
            cin >> RetourMenu;
            if (RetourMenu == 9)
            {
                ClearScreen();
                Menu();
            }
            break;
        case 4:
            ClearScreen();
            ifs3.open ("../Ressources/aide.txt");
            while(true)
            {
                getline (ifs3, ligne);
                if (ifs3.eof()) break;
                cout << ligne << endl;
            }
            cin >> RetourMenu;
            if (RetourMenu == 9)
            {
                ClearScreen();
                Menu();
            }
            break;
        default:
            ClearScreen();
            cout <<"Il y a une erreur." << endl
                 <<"Veuillez rééssayer."<< endl;
            Menu();
    }
}

    int main()
    {
      Menu();
      return 0;
    }
