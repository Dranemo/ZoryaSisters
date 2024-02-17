# Zorya Sisters  
## Projet réalisé en trois semaines dans la cadre de mes études au [Gaming Campus](https://gamingcampus.fr) avec un template fournie.
### Projet réalisé en C++ avec SMFL.
### Acuellement non continué.

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


### Lancer le jeu avec la solution:

- Aller dans l'explorateur de solution et faire un clic droit sur Game.
- Cliquer sur "Propriétés", en haut de la fenêtre aller dans "Configuration" et "Plateforme" et indiquer "Toutes les plateformes".
- Cliquer sur "Débogage" et coller " $(SolutionDir) " dans "Répertoire de travail".
- Répéter les 3 étapes précédentes mais avec "SFMLEngine" dans l'explorateur de solution.

- Installer "openal32.dll".
- Lancer une fois le programme afin de creer le dossier "x64".
- Déplacer "openal32.dll" dans le dossier "Debug" qui se situe dans le dossier "x64".

Vous pouvez ensuite relancer le programme afin de tester le jeu !


### Bug connus :
- Incompréhension sur ce qui a des collision ou non.
- Changer de poupée sur le lit juste en dessous de la fenêtre à gauche de l'ours permet de passer au dessus de la fenêtre.
- Problèmes de sprites qui disparaissent.
- Problème avec la force qui pousse quand on est au dessus des éléments, créant ainsi des problèmes comme avec le livre qui bloque toute progression si on ne peut plus sauter par dessus.
- Parfois, l'inversion de gravité permet de passer directement au dessus des premiers livres.
- Le sprite de la lampe ne se reset pas lors d'un retour checkpoint.
- Bouton dans l'écran de chargement disant "retour au jeu" au lieu de "Jouer"
- Assigner plusieurs fois le même pouvoir :
  * Lancer le jeu.
  * Retour checkpoint.
  * Desactiver le pouvoir de la grande poupée sans en réassigner une nouvelle.
  * Assigner le pouvoir à une autre poupée.
  * Lancer le jeu.
- Si on touche le toit avec l'inversion de gravité, on reste bloqué en haut.


### Solution prévue :
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



### Crédits :  

Nous avons créé ce jeu sous le nom de notre studio fictif : **Darwin's Studio**.  

Melvin Guellaff - [GitHub](https://github.com/Mguellaff) - [LinkedIn](https://www.linkedin.com/in/melvin-guellaff-353628202/)  
Yanaël Caillot - [GitHub](https://github.com/Dranemo) - [LinkedIn](https://www.linkedin.com/in/ycaillot/)  
Evan Choquet - [GitHub](https://github.com/Snip2Fou) - [LinkedIn](https://www.linkedin.com/in/evan-choquet-a9031b265/)  
David De Oliveira - [GitHub](https://github.com/Vindiss) - [LinkedIn](https://www.linkedin.com/in/david-de-oliveira-bb48941b0/)  
Axel Gathelier - [GitHub](https://github.com/GolfOcean334) - [LinkedIn](https://www.linkedin.com/in/axel-gathelier-13198b252/)  

Intervenant nous ayant fourni la template :
Adrien Bourgois - [GitHub](https://github.com/AdrienBourgois) - [LinkedIn](https://www.linkedin.com/in/adrienbourgois/)
