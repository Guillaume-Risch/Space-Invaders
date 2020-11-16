#pragma once

/*!
  * \file MyType_AC.h
  * \author Alain Casali Marc Laporte
  * \date 7 janvier 2016
  * \brief Fichier décrivant l'ensemble des alias vers les types utilisés dans le jeu
  * \version 1.0
  * \bug Aucun connu
  */


#include <vector>
#include <utility> //pair
#include <array> //array

namespace nsSpaceInvader_AC
{
    /*!
     * \typedef CVString
     * \brief   Alias vers le type de l'écran (l'espace, la matrice).
     */
    typedef std::vector <std::string> CVString;    // c'est le type de l'écran (l'espace, la matrice)


    /*!
     * \typedef CPosition
     * \brief Alias vers une coordonnée de la matrice. Le premier élément de la paire désigne une ordonnée (axe Y),
     *          le second une abscisse (axe X).
     */
    typedef std::pair <unsigned, unsigned> CPosition; //une coordonnee de la matrice

    /*!
     * \typedef CVPosition
     * \brief Alias vers un vecteur de coordonnees.
     */
    typedef std::vector<CPosition> CVPosition; //un vecteur de coordonnees

    /*!
     * \typedef struct
     * \brief Alias vers une structure d'objets
     */


    typedef struct {
     //unsigned X;
     //unsigned Y;
     CPosition Pos;
     unsigned nbVie;
                    }UnInvader;

    /*!
     * \typedef vector
     * \brief Alias vers un vecteur d'invader
     */
    typedef std::vector<UnInvader> CVInvaders;

    /*!
     * \typedef CAObject
     * \brief Alias vers un tableau de 4 vecteurs de coordonnees.
     * <ul>
     *  <li>indice 0 : les positions de l'envahisseur
     *  <li>indice 1 : les positions des missiles
     *  <li>indice 2 : les positions de mon vaisseau
     *  <li>indice 3 : les positions de mes torpilles
     *  <li>indice 4 : les positions des envahisseur 2
     *  <li>indice 5 : les positions des loots qui donnent de la vie
     *  <li>indice 6 : les positions des loots qui donnent du score
     *  <li>indice 7 : la position du bouclier
     *  <li>indice 8 : la position du bazooka
     *  <li>indice 9 : la position des envahisseurs 3
     *  <li>indice 10 : la position des envahisseurs 4
     *  <li>indice 11 : la position des tirs de l'envahisseur 4
     * </ul>
     */

    typedef std::array <CVInvaders, 12> CAObject;
}//namesapce
