#pragma once

/*!
  * \file MyConst_AC.h
  * \author Alain Casali Marc Laporte
  * \date 7 jan r 2016
  * \brief Fichier décrivant l'ensemble des constantes utilisées dans le jeu
  * \version 1.0
  * \bug Aucun connu
  */

#include <string>

namespace nsSpaceInvader_AC
{

    /*!
     * \brief Score du mode solo
     */

    unsigned score (0);

    /*!
     * \brief Nombre maximum de vies
     */


    unsigned maxVies (3);

    /*!
     * \brief Nombre de vies du joueur initialisée au nombre max de vies
     */
    unsigned nbVies (maxVies);

    /*!
     * \brief Score du joueur 1 dans le mode deux joueurs
     */
    unsigned scoreJ1  (0);
    /*!
     * \brief Score du joueur 2 dans le mode deux joueurs
     */
    unsigned scoreJ2 (0);

    /*!
     * \brief Nombre de tirs possibles avec le bazooka
     */
    unsigned TirBazooka(3);

    /*!
     * \brief Booléen qui permet de savoir si le bouclier est disponible ou non
     */

    bool shield = true;

    /*!
     * \brief Nombre qui sert à la probabilité d'avoir un loot
     */


    const int KLootRate = 3;

    /*!
     * \brief Caractère qui sert à mettre en pause le jeu
     */

    const char KPause = 'p';

    /*!
     * \brief Caractère qui sert à activer le bouclier
     */

    const char KActiveShield = 's';

    /*!
     * \brief Caractère d'affichage du bouclier
     */

    const char KShield = '_';

    /*!
     * \brief Caractère d'affichage du bonus rajoutant de la vie
     */

    const char KLootLife = '*';

    /*!
     * \brief Caractère d'affichage du bonus rajoutant du score
     */

    const char KLootScore = '$';

    /*!
     * \brief Caractère d'affichage du tir du bazooka
     */

    const char KBazooka = '^';

    /*!
     * \brief Caractère qui sert à activer le bazooka
     */

    const char KActiveBazooka ='b';

    /*!
     * \brief Alias réinitialisant la couleur du texte du terminal
     */

    const std::string KReset   ("0");

    /*!
     * \brief Alias mettant en noir la couleur du texte du terminal.
     */
    const std::string KNoir    ("30");
    /*!
     * \brief Alias mettant en rouge la couleur du texte du terminal.
     */
    const std::string KRouge   ("31");

    /*!
     * \brief Alias mettant en vert la couleur du texte du terminal.
     */
    const std::string KVert    ("32");

    /*!
     * \brief Alias mettant en jaune la couleur du texte du terminal.
     */
    const std::string KJaune   ("33");

    /*!
     * \brief Alias mettant en bleu la couleur du texte du terminal.
     */
    const std::string KBleu    ("34");

    /*!
     * \brief Alias mettant en mangenta la couleur du texte du terminal.
     */
    const std::string KMAgenta ("35");

    /*!
     * \brief Alias mettant en cyan la couleur du texte du terminal.
     */
    const std::string KCyan    ("36");

    // Constantes pour les touches
    /*!
     * \brief Alias vers la touche servant à se déplacer à droite.
     */
    const char KRight               = 67;  // déplacement vers la droite

    /*!
     * \brief Alias vers la touche servant à se déplacer à gauche.
     */
    const char KLeft                = 68;  // Déplacement vers la gauche

    /*!
     * \brief Alias vers la touche servant à lancer une torpille.
     */
    const char KShoot               = ' ';  // Lancer de torpille

    /*!
     * \brief Alias vers la touche servant à sauter deux cases vers la gauche.
     */
    const char KLJump               = 'w';  // Lancer de torpille

    /*!
     * \brief Alias vers la touche servant à sauter deux cases vers la droite.
     */
    const char KRJump               = 'x';  // Lancer de torpille

    //  Constantes liées à l'envahisseur
    /*!
     * \brief Couleur de l'envahisseur.
     */
    const std::string KInvadersColor (KRouge);  // Couleur de l'envahisseur

    /*!
     * \brief Couleur de l'envahisseur2.
     */
    const std::string KInvadersColor2 (KJaune);  // Couleur de l'envahisseur

    /*!
     * \brief Couleur de l'envahisseur 3
     */

    const std::string KInvadersColor3 (KCyan);

    /*!
     * \brief Couleur de l'envahisseur 4
     */

    const std::string KInvadersColor4 (KVert);

    /*!
     * \brief Caractèrere formant l'envahisseur.
     */
    const char KInsideInvader       = 'W';  // caractèrere formant l'envahisseur

    /*!
     * \brief Caractèrere formant l'envahisseur 2
     */
    const char KInsideInvader2      = 'Y';  // caractèrere formant l'autre envahisseur

    /*!
     * \brief Caractère formant l'envahisseur 3
     */

    const char KInsideInvader3 = 'M';

    /*!
     * \brief Caractère de l'envahisseur 4
     */

    const char KInsideInvader4 = 'I';

    /*!
     * \brief Caractèrere formant le missile.
     */
    const char KMissile             = 'T';  // missile

    /*!
     * \brief Caractère formant le deuxième missile de l'envahisseur plus puissant
     */

    const char KMissile2            = 'V';

    /*!
     * \brief Nombre de caractères qui forment l'envahisseur.
     */
    const unsigned KInvadersSize    =  18;   // nombre de caractères qui forment l'envahisseur

    /*!
     * \brief Nombre de caractères qui forment l'envahisseur 2.
     */
    const unsigned KInvadersSize2    =  18;   // nombre de caractères qui forment l'autre envahisseur

    /*!
     * \brief Nombre de caractères qui forment le 3 ème envahisseur .
     */

    const unsigned KInvadersSize3    = 18;

    /*!
     * \brief Nombre de fois où l'envahisseur tire un missile par rapport à son déplacement.
     */
    const unsigned KMissileRatio = 2; // nombre de fois où l'envahisseur tire un missile par rapport à son déplacement

    // Constantes liées au joueur
    /*!
     * \brief Couleur liée à mes objets (vaisseaux et tropilles).
     */
    const std::string KMyColor (KBleu); // Ma couleur



    /*!
     * \brief Caractèrere formant mon vaisseau.
     */
    const char KInsideMe            = 'A'; // caractèrere formant mon vaisseau

    /*!
     * \brief Caractèrere formant ma torpille.
     */
    const char KTorpedo             = '|'; // caractèrere formant ma torpille

    /*!
     * \brief Nombre de caractères qui forment mon vaisseau.
     */
    const unsigned KMySize          = 1; //  nombre de caractères qui forment mon vaisseau


    /*!
     * \brief Nombre de fois où c'est le tour du joueur pour un tour de l'envahisseur.
     */
    const unsigned KRatioMeInvaders = 4;    // Nombre de fois où c'est le tour du joueur pour un tour de l'envahisseur


    // Constantes liées à l'eapace (l'écran)
    /*!
     * \brief Alias vers une case vide à l'écran.
     */
    const char KEmpty               = ' ';  // case vide de l'écran
    /*!
     * \brief Nombre de lignes de l'écran (de l'espace).
     */
    const unsigned KSizeLine   = 15;   // Nombre de lignes de l'écran (de l'espace)

    /*!
     * \brief Numéro de colonne où commence l'envahisseur.
     */
    const unsigned KBegInvader = 0;    // Numéro de colonne où commence l'envahisseur

    /*!
     * \brief Numéro de colonne où commence le joueur.
     */
    const unsigned KBegMe      = KSizeLine / 2;  // Numéro de colonne où commence le joueur

   /*!
    * \brief Nombre de colonnes de l'écran (de l'espace).
    */
   const unsigned KSizeSpace  = 30;   // Nombre de colonnes de l'écran (de l'espace)

   /*!
    * \brief Alias vers une ligne vide de l'esapce.
    */
   const std::string KEmptyLine (KSizeSpace, KEmpty);  // Une ligne vide de la matrice

}//namespace
