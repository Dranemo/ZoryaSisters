# Zorya Sisters  

## Table of Content

1. [Francais](#Francais)
   1. [Lancer avec la solution](#RunFr)
   2. [Bugs connus](#GlitchesFr)
   3. [Solution prévue](#SolutionFr)
   4. [Credits](CreditsFr)
2. [English](#Anglais)
   1. [Run with the solution](#RunEn)
   2. [Known glitches](#GlitchEn)
   3. [Planned Solution](#SolutionEn)
   4. [Credits](#CreditsEn)

## Francais <a name="Francais"></a>

***Projet réalisé en trois semaines dans la cadre de mes études au [Gaming Campus](https://gamingcampus.fr) avec un template fournie.***
Projet réalisé en **C++ avec SMFL**.  
Francais uniquement.  
*Acuellement non continué.*  

Zorya Sisters est un platformer/puzzle 2D développé avec SFML. 

Incarnez les soeurs Zorya, des poupées russes souhaitant quitter la maison de leur propriétaire à tout prix. En utilisant leurs différents pouvoirs; surmontez les obstacles et les énigmes qui se dressent devant vous !  

Ce jeu est un de nos projet d'études, nous l'avons développé en trois semaines. Si nous avions prévu de le sortir sur Steam ou Itch.io, le plan aurait été de créer plusieurs mondes à la manière des jeux Mario : chaque pièce de la maison aurait représenté un monde contenant plusieurs niveaux à l'intérieur. Mais dû à un manque de temps, nous avons décidé de créé un seul niveau permettant d'introduire les différentes mécaniques.  

Le but du jeu est d'arriver à la sortie du niveau (dans celui ci, le trou de souris) grâce à trois poupées. Chacune des poupée a un pouvoir propre à elle que le joueur peut choisir au début et à chaque retour à un checkpoint. Un checkpoint est créé à chaque changement de poupée. Mais une fois sorti d'une poupée, la nouvelle ne peut pas rentrer dans l'ancienne. Alors il faut bien choisir ses actions.  

Il existe 5 pouvoirs pour le moment :
- La force permettant de pousser les objets.
- Le dash permettant de foncer dans une direction.
- Le Double-Saut
- L'inversion de gravité permettant d'inverser la gravité ***une seule fois***.
- L'invicibilité


### Lancer le jeu avec la solution <a name="RunFr"></a>

- Aller dans l'explorateur de solution et faire un clic droit sur Game.
- Cliquer sur "Propriétés", en haut de la fenêtre aller dans "Configuration" et "Plateforme" et indiquer "Toutes les plateformes".
- Cliquer sur "Débogage" et coller " $(SolutionDir) " dans "Répertoire de travail".
- Répéter les 3 étapes précédentes mais avec "SFMLEngine" dans l'explorateur de solution.

- Installer "openal32.dll".
- Lancer une fois le programme afin de creer le dossier "x64".
- Déplacer "openal32.dll" dans le dossier "Debug" qui se situe dans le dossier "x64".

Vous pouvez ensuite relancer le programme afin de tester le jeu !


### Bug connus <a name="GlitchesFr"></a>

- Incompréhension sur ce qui a des collision ou non.
- Changer de poupée sur le lit juste en dessous de la fenêtre à gauche de l'ours permet de passer au dessus de la fenêtre.
- Problèmes de sprites qui disparaissent.
- Problème avec la force qui pousse quand on est au dessus des éléments, créant ainsi des problèmes comme avec le livre qui bloque toute progression si on ne peut plus sauter par dessus.
- Parfois, l'inversion de gravité permet de passer directement au dessus des premiers livres.
- Le sprite de la lampe ne se reset pas lors d'un retour checkpoint.
- Bouton dans l'écran de chargement disant "retour au jeu" au lieu de "Jouer"
- Assigner plusieurs fois le même pouvoir :
  * Lancer le niveau.
  * Retour checkpoint.
  * Desactiver le pouvoir de la grande poupée sans en réassigner une nouvelle.
  * Assigner le pouvoir à une autre poupée.
  * Lancer le jeu.
- Si on touche le toit avec l'inversion de gravité, on reste bloqué en haut.


### Solution prévue <a name="SolutionFr"></a>
- Pour la première poupée : 
  * Prendre l'inversion de gravité.
  * Monter sur l'étagère.
  * Changer de poupée devant les livres. 
- Pour la seconde poupée :
  * Prendre la force.
  * Passer de l'autre coté des livres.
  * Pousser le livre pour qu'il tombe de l'étagère.
  * Sauter sur le lit pour éteindre la lampe avec l'interrupteur.
  * Descendre du lit en sautant par dessus le livre.
  * Monter sur la chaise, le bureau, la lampe et l'étagère avec les deux livres couchés.
  * Chaner de poupée sur les deux livres.
- Pour la troisième poupée :
  * Prendre le double saut.
  * Sauter sur le tableau.
  * Sauter au dessus de l'étagère.
  * Arriver au trou de souris.



### Credits <a name="CreditsFr"></a>

Nous avons créé ce jeu sous le nom de notre studio fictif : **Darwin's Studio**.  

Melvin Guellaff - [GitHub](https://github.com/Mguellaff) - [LinkedIn](https://www.linkedin.com/in/melvin-guellaff-353628202/)  
Yanaël Caillot - [GitHub](https://github.com/Dranemo) - [LinkedIn](https://www.linkedin.com/in/ycaillot/)  
Evan Choquet - [GitHub](https://github.com/Snip2Fou) - [LinkedIn](https://www.linkedin.com/in/evan-choquet-a9031b265/)  
David De Oliveira - [GitHub](https://github.com/Vindiss) - [LinkedIn](https://www.linkedin.com/in/david-de-oliveira-bb48941b0/)  
Axel Gathelier - [GitHub](https://github.com/GolfOcean334) - [LinkedIn](https://www.linkedin.com/in/axel-gathelier-13198b252/)  

Intervenant nous ayant fourni la template :  

Adrien Bourgois - [GitHub](https://github.com/AdrienBourgois) - [LinkedIn](https://www.linkedin.com/in/adrienbourgois/)


## English <a name="Anglais"></a>

***Project completed in three weeks as part of my studies at [Gaming Campus](https://gamingcampus.fr) with a provided template.***  
Project implemented in **C++ with SFML**.  
Only in french  
*Currently not continued.*

Zorya Sisters is a 2D platformer/puzzle game developed with SFML.

Take on the role of the Zorya sisters, Russian dolls eager to leave their owner's house at all costs. By using their different powers, overcome obstacles and puzzles that stand in your way!

This game is one of our study projects, developed in three weeks. If we had planned to release it on Steam or Itch.io, the idea was to create multiple worlds in the style of Mario games: each room in the house would represent a world containing several levels inside. But due to a lack of time, we decided to create a single level introducing the various mechanics.  

The goal of the game is to reach the level exit (in this case, the mouse hole) using three dolls. Each doll has a unique power that the player can choose at the beginning and each time they return to a checkpoint. A checkpoint is created with each doll change. However, once out of a doll, the new one cannot enter the old one. So, careful decision-making is required.  

There are currently 5 powers:
- Strength allowing the pushing of objects.
- Dash allowing a dash in a direction.
- Double Jump.
- Gravity inversion allowing a one-time gravity inversion.
- Invincibility.

### Run the game with the solution <a name="RunEn"></a>

- In the solution explorer, right-click on Game.
- Click on "Properties", at the top of the window, go to "Configuration" and "Platform" and set it to "All Platforms".
- Click on "Debug" and paste " $(SolutionDir) " into "Working Directory".
- Repeat the previous 3 steps but with "SFMLEngine" in the solution explorer.

- Install "openal32.dll".
- Run the program once to create the "x64" folder.
- Move "openal32.dll" to the "Debug" folder inside the "x64" folder.

You can then relaunch the program to test the game!

### Known Glitches <a name="GlitchEn"></a>

- Inconsistency regarding what has collision or not.
- Changing dolls on the bed just below the window and on the left of the bear allows passing over the window.
- Sprite issues that disappear.
- Problem with strength pushing when above elements, causing issues like with the book blocking all progress if you can no longer jump over it.
- Sometimes, gravity inversion allows passing directly over the first books.
- The lamp sprite does not reset during a checkpoint return.
- Button in the loading screen says "Retour au jeu" instead of "Play".
- Assigning the same power multiple times:
  * Launch the level.
  * Return to checkpoint.
  * Disable the power of the big doll without assigning a new one.
  * Assign the power to another doll.
  * Launch the game.
- If you touch the ceiling with gravity inversion, you get stuck at the top.

### Planned Solution <a name="SolutionEn"></a>
- For the first doll:
  * Take gravity inversion.
  * Climb on the shelf.
  * Change doll in front of the books.
- For the second doll:
  * Take strength.
  * Go to the other side of the books.
  * Push the book so that it falls from the shelf.
  * Jump on the bed to turn off the lamp with the switch.
  * Get off the bed by jumping over the book.
  * Climb on the chair, desk, lamp, and shelf with the two lying books.
  * Change doll on the two books.
- For the third doll:
  * Take double jump.
  * Jump on the board.
  * Jump over the shelf.
  * Reach the mouse hole.

### Credits <a name="CreditsEn"></a>

We created this game under the name of our fictional studio: **Darwin's Studio**.

Melvin Guellaff - [GitHub](https://github.com/Mguellaff) - [LinkedIn](https://www.linkedin.com/in/melvin-guellaff-353628202/)  
Yanaël Caillot - [GitHub](https://github.com/Dranemo) - [LinkedIn](https://www.linkedin.com/in/ycaillot/)  
Evan Choquet - [GitHub](https://github.com/Snip2Fou) - [LinkedIn](https://www.linkedin.com/in/evan-choquet-a9031b265/)  
David De Oliveira - [GitHub](https://github.com/Vindiss) - [LinkedIn](https://www.linkedin.com/in/david-de-oliveira-bb48941b0/)  
Axel Gathelier - [GitHub](https://github.com/GolfOcean334) - [LinkedIn](https://www.linkedin.com/in/axel-gathelier-13198b252/)  

Instructor who provided the template:

Adrien Bourgois - [GitHub](https://github.com/AdrienBourgois) - [LinkedIn](https://www.linkedin.com/in/adrienbourgois/)
