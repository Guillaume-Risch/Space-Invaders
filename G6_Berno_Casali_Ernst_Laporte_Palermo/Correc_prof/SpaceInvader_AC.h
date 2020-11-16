#pragma once

/*!
  * \file SpaceInvader_AC.h
  * \author Alain Casali Marc Laporte
  * \date 7 janvier 2016
  * \brief Fichier décrivant l'ensemble des signatures vers les fonctions utilisées dans le jeu
  * \version 1.0
  * \bug Aucun connu
  */

#include "MyType_AC.h"
namespace nsSpaceInvader_AC
{
    /*!
    * \fn Couleur
     * \param[in] Coul couleur du texte
     * \brief Fonction permettant de changer la couleur du texte.
     */
    void Couleur (const std::string & Coul);

    /*!
     * \fn ClearScreen
     * \brief Fonction effaçant le contenu de l'écran
     */
    void ClearScreen ();

    /*!
     * \fn unsigned AfficherScore (unsigned & score)
     * \brief Cette fonction affiche le score en fin de partie elle ajoute le score (param 1) du joueur avec son nombre de vie restants * 100
     * \param[in,out] Score Score du joueur
     */

    unsigned AfficherScore(unsigned & score);
    /*!
     * \fn Pause
     * \brief Permet de mettre en pause en appuyant 'p'
     */

    void Pause(void);

    /*!
     * \fn void PutCVPosition (const CVPosition & VPos, char Car, CVString & Space)
     * \brief Permet d'insérer le carcactère passé en second paramètre à toutes les positions souhaitées (1er paramètre) de l'espace de jeu (3ème paramètre).
     * \param[in] VInvaders Vecteur d'invaders
     * \param[in] Car Caractère à insérer dans l'esapce
     * \param\[in, out] Space Espace de jeu
     */

    void PutCVPosition (const CVInvaders & VInvaders, char Car, CVString & Space);

    /*!
     * \fn PutAllObjects (const CAObject & Obj, CVString & Space)
     * \brief Vide l'espace de jeu, puis insère tous les objets du jeu.
     * \param Obj [in] Liste des objets à insérer
     * \param Space [in, out] Espace de jeu
     */
    void PutAllObjects (const CAObject & Obj, CVString & Space);

    /*!
     * \fn DisplaySpace (const CVString & Space, unsigned & tourJ)
     * \brief Permet d'afficher l'espace de jeu et le score en fonction de la personne qui joue (Joueur 1, Joueur 2, mode solo)
     * \param [in] Space Espace de jeu
     * \param [in,out] tourJ Tour du joueur
     */
    void DisplaySpace (const CVString & Space,unsigned & tourJ);

    /*!
     *\fn InitSpace (CVString & Space, CAObject & Obj)
     * \brief Permet d'initialiser l'espace de jeu et de définir les coordonnées des objets à placer au lancement du jeu.
     * \param Space [out] Espace de jeu
     * \param Obj [ou] Liste des objets à placer au début du jeu
     */
    void InitSpace (CVString & Space, CAObject & Obj);

    /*!
     *\fn MaxX(const CVInvaders & VInvaders, UnInvader & MaxInvader)
     * \brief Trouve le maximum d'un vecteur de CPosition de la coordonées en X (abscisse).
     * \param VInvaders [in] Vecteur d'Invaders
     * \param MaxInvader [out] Valeur maximale pour X
     */
    void MaxX (const CVInvaders & VInvaders, UnInvader & MaxInvader);

    /*!
     *\fn MaxX(const CVInvaders & VInvaders, UnInvader & MaxInvader)
     * \brief Trouve le maximum d'un vecteur de VInvader de la coordonées en Y (ordonnée).
     * \param VInvaders [in] Vecteur d'Invaders
     * \param MaxInvader [out] Valeur maximale pour Y
     */
    void MaxY (const CVInvaders & VInvaders, UnInvader & MaxInvader);

    /*!
     *\fn MinX (const CVInvaders & VInvaders, UnInvader & MinInvader)
     * \brief Trouve le minimum d'un vecteur de VInvader de la coordonées en X (abscisse).
     * \param VPos [in] Vecteur de VInvaders
     * \param MinPos [out] Valeur minimale pour X
     */
    void MinX (const CVInvaders & VInvaders, UnInvader & MinInvader);

    /*!
     *\fn MoveLeft (CVInvaders & VInvader)
     * \brief Simule un déplacement gauche en retranchant une unité de déplacement à toutes les abscisses des objets en paramètre.
     * \param VInvader [in, out] Vecteur de VInvader
     * \return Vrai si la plus petite des abscisses ne vaut pas 0, faux sinon
     */
    bool MoveLeft (CVInvaders & VInvader);

    /*!
     * \fn MoveRight (const CVString & Space, CVInvaders & VInvader)
     * \brief Simule un déplacement droit en ajoutant une unité de déplacement à toutes les abscisses des objets en paramètre.
     * \param Space [in] Espace de jeu
     * \param  VInvader [in, out] Vecteur de CVInvaders
     * \return Vrai si la plus grande des abscisses ne vaut pas n'est pas sur la dernière case de l'espace de jeu, faux sinon
     */
    bool MoveRight (const CVString & Space, CVInvaders & VInvader);

    /*!
     * \fn MoveDown (CVInvaders & VInvaders)
     * \brief Simule un déplacement bas en ajoutant une unité de déplacement à toutes les ordonnées des objets en paramètre.
     * \param VInvaders [in, out] Vecteur de CVInvaders
     */

    void MoveDown (CVInvaders & VInvaders);

    /*!
     * \fn MoveUp(CVInvaders & VInvaders)
     * \brief Simule un déplacement haut en ajoutant une unité de déplacement à toutes les ordonnées des objets en paramètre.
     * \param VInvaders [in, out] Vecteur de CVInvaders
     */
    void MoveUp (CVInvaders & VInvaders);

    /*!
     * \fn MoveMeRight
     * \brief La fonction qui permet de passer de la droite de la matrice à la gauche
     * \param Space  [in] Vecteur de string (l'espace)
     * \param VInvaders [in,out] Vecteur d'Invader (vaisseaux)
     * \return Vrai ou faux si on est au bout de la matrice du côté droit
     */

    bool MoveMeRight (const CVString & Space, CVInvaders & VInvaders);

    /*!
     * \fn MoveMeLeft
     * \brief La fonction qui permet de passer de la gauche de la matrice à la droite
     * \param Space  [in] Vecteur de string (l'espace)
     * \param VInvaders [in,out] Vecteur d'Invader (vaisseaux)
     * \return Vrai ou faux si on est au bout de la matrice du côté gauche
     */

    bool MoveMeLeft (const CVString & Space, CVInvaders & VInvaders);

    /*!
     * \fn ManageMe (const CVString & Space, CAObject &Obj)
     * \brief Simule le jeu du joueur. C'est ici que le joueur choisit ce qu'il fait. S'il décide de tirer, une tropille est lancée, d'une position au hasard, au dessus d'une de ses positions, d'activer le bouclier, de tirer une roquette de bazooka, de se déplacer de plusieurs cases
     * \param Space [in] Espace de jeu
     * \param Obj [in, out] Liste des objets du jeu
     */



    void ManageMe (const CVString & Space, CAObject &Obj);

    /*!
     * \fn ManageInvaders (const CVString & Space, CAObject &Obj, unsigned & Direction, unsigned & WhatInvaderDo)
     * \brief ManageInvaders Simule le jeu de l'envahisseur 1
     * \param Space [in] Espace de jeu
     * \param Obj [in, out] Liste des objets du jeu
     * \param Direction [in, out] Sens de déplacement de l'envahisseur
     * \param WhatInvaderDo [in, out] Ce que doit faire l'envahisseur (se déplacer ou lancer un missile, d'une position au hasard, au dessous d'une de ses positions).
     */
    void ManageInvaders (const CVString & Space, CAObject &Obj, unsigned & Direction, unsigned & WhatInvaderDo);

    /*!
     * \fn ManageInvaders (const CVString & Space, CAObject &Obj, unsigned & Direction, unsigned & WhatInvaderDo)
     * \brief ManageInvaders Simule le jeu de l'envahisseur 2
     * \param Space [in] Espace de jeu
     * \param Obj [in, out] Liste des objets du jeu
     * \param Direction [in, out] Sens de déplacement de l'envahisseur
     * \param WhatInvaderDo [in, out] Ce que doit faire l'envahisseur (se déplacer ou lancer un missile, d'une position au hasard, au dessous d'une de ses positions).
     */
    void ManageInvaders2 (const CVString & Space, CAObject &Obj, unsigned & Direction, unsigned & WhatInvaderDo);

    /*!
     * \fn ManageInvaders (const CVString & Space, CAObject &Obj, unsigned & Direction, unsigned & WhatInvaderDo)
     * \brief ManageInvaders Simule le jeu de l'envahisseur 3
     * \param Space [in] Espace de jeu
     * \param Obj [in, out] Liste des objets du jeu
     * \param Direction [in, out] Sens de déplacement de l'envahisseur
     * \param WhatInvaderDo [in, out] Ce que doit faire l'envahisseur (se déplacer ou lancer un missile, d'une position au hasard, au dessous d'une de ses positions).
     */
    void ManageInvaders3 (const CVString & Space, CAObject &Obj, unsigned & Direction, unsigned & WhatInvaderDo);

    /*!
     * \fn ManageInvaders (const CVString & Space, CAObject &Obj, unsigned & Direction, unsigned & WhatInvaderDo)
     * \brief ManageInvaders Simule le jeu de l'envahisseur 4
     * \param Space [in] Espace de jeu
     * \param Obj [in, out] Liste des objets du jeu
     * \param Direction [in, out] Sens de déplacement de l'envahisseur
     * \param WhatInvaderDo [in, out] Ce que doit faire l'envahisseur (se déplacer ou lancer un missile, d'une position au hasard, au dessous d'une de ses positions).
     */


    void ManageInvaders4 (const CVString & Space, CAObject &Obj, unsigned & Direction, unsigned & WhatInvaderDo);

    /*!
     * \fn CollisionBetweenObjectsAndEnnemies ( CVInvaders & Objects, CVInvaders & StarShips,CAObject & Obj,unsigned & tourJ,const unsigned & nbviemoins, const unsigned & scoreadd)
     * \brief Gère les collisions entre les objets et les vaisseaux. Si une collision est détéctée (même coordonées pour un objet et une partie d'un vaisseau), l'objet et la partie du vaisseau diparaissent
     * \param Objects [in, out] Vecteur des positions des objects à traiter
     * \param StarShips [in, out] Vecteur des positions des vaisseaux à traiter
     * \param Obj [in,out] Vecteur d'Objets
     * \param tourJ [in,out] Entier non signé qui sert pour le tour du joueur
     * \param nbviemoins [in] Entier non signé qui sert au nombre de pts de vie à enlever
     * \param scoreadd [in] Entier non signé qui sert à définir le nombre de pts
     */
    void CollisionBetweenObjectsAndEnnemies (CVInvaders & Objects, CVInvaders & StarShips,CAObject & Obj,unsigned & tourJ,const unsigned & nbviemoins, const unsigned & scoreadd);

    /*!
     * \fn CollisionBetweenObjectsAndI
     * \brief Gère les collisions entre les missiles et nous
     * \param Objects [in,out] Vecteur d'Invaders (objets)
     * \param StarShips [in,out] Veteurs d'Invaders (vaisseaux)
     * \param nbviemoins [in] Entier non signé
     */
    void CollisionBetweenObjectsAndI (CVInvaders & Objects, CVInvaders & StarShips, const unsigned & nbviemoins);


    /*!
     * \fn CollisionBetweenMissilesAndTorpedos
     * \brief Gère les collisions entre les missiles et torpedos
     * \param Missiles [in,out] Vecteur d'invaders (missile)
     * \param Torpedos [in,out] Vecteur d'invaders (torpille)
     */

    void CollisionBetweenMissilesAndTorpedos (CVInvaders & Missiles, CVInvaders & Torpedos);

    /*!
     * \fn CollisionBetweenLootsAndI
     * \brief Gère les collisions entre les bonus et le joueur
     * \param Objects [in,out] Vecteur d'Invaders (bonus)
     * \param StarShips [in,out] Vecteur d'Invaders (vaisseaux)
     */

    void CollisionBetweenLootsAndI (CVInvaders & Objects, CVInvaders & StarShips);

    /*!
     * \brief CollisionBetweenShieldAndMissile
     * \param Objects [in,out] Vecteur d'invaders (missiles)
     * \param Shield [in,out] Vecteur d'invaders (bouclier)
     */
    void CollisionBetweenShieldAndMissile (CVInvaders & Objects, CVInvaders & Shield);

    /*!
     * \fn ManageCollisions
     * \brief Gère toutes les collisions du jeu
     * \param [in, out] Obj Liste des objets du jeu
     */

    void ManageCollisions (CAObject & Obj);

    /*!
     * \fn Victory
     * \brief Teste si l'envahisseur ou si le joueur ont gagné.
     * \param Space [in] Espace de jeu
     * \param Obj [in] Liste des objets du jeu
     * \return 0 si ni l'envahisseur ou le joueur ont gagné, 1 si c'est l'envahiseur et 2 si c'est le joueur
     */
    unsigned Victory (const CVString & Space, const CAObject & Obj);

    /*!
     * \fn DeleteMissiles
     * \brief Supprime les missiles qui sortent de l'espace de jeu.
     * \param [in] Space Espace de jeu
     * \param Missiles [in, out] Vecteur des positions des missiles
     */
    void DeleteMissiles (const CVString & Space, CVPosition & Missiles);

    /*!
     * \fn DeleteMissiles
     * \brief Supprime les tropilles qui sortent de l'espace de jeu.
     * \param Torpedos [in, out] Vecteur des positions des torpilles
     */
    void DeleteTorpedos (CVPosition & Torpedos);

    /*!
     * \fn SpaceInvaders
     * \brief Fonction principale du jeu sans option.
     */
    unsigned SpaceInvaders (unsigned & tourJ);

    /*!
     * \fn void ShowFile (const string & FileName)
     * \brief Permet d'afficher le contenu d'un fichier à l'écran.
     * \param FileName [in] Chemin vers le fichier à afficher
     */
    void ShowFile (const std::string & FileName);

    /*!
     * \fn void set_input_mode (void)
     * \brief Permet d'activer la saisie à la volée. Utile pour gérer les déplacement du joueur sans appuyer sur la touche entrée.
     * si le joueur ne joue pas pendant 3 10ème de seconde, alors il pert une action. <br><br>
     * voir : http://www.gnu.org/software/libc/manual/html_node/Noncanon-Example.html et http://man7.org/linux/man-pages/man3/termios.3.html
     */
    void set_input_mode (void);

    /*!
     * \fn int ppal()
     * \brief Fonction principale du jeu.
     * <ol>
     *  <li> Initilalise la graine du générateur aléatoire,
     *  <li> active la saisie à la volée,
     *  <li> lance le jeu et
     *  <li> affiche le résultat
     * </ol>
     */
    unsigned ppal (const std::string & Path,unsigned tourJ);
}//namespace
