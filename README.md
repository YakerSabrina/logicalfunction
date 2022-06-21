Dans ce programme C++ j'ai crée les tables logiques AND, OR, XOR, en utilisant l'évalution en cours circuit qui permet d'optimiser l'éxécution du code
c'est à dire pour la table AND si le compilateur détecte qu'une condition est fausse, cela ne sert à rien d'évaluer le reste de l'éxpression puisque le 
résultat est surement faux, table de vérité <<AND>>&&
  
Avec le OR le méme pricipe s'applique, si l'une des expressions est évaluée à true, alors selon la table de verité de l'opérateur <<OR>>, le résultat sera true
  
Le OR est dit inclusif : il est vrai si a ou b sont vrais, ou les deux sont vrais
Le OR est dit exclusif(XOR) : si a et b renvoit la méme chose -> false
                              si a vrai et b false ou l'inverse -> vrai
