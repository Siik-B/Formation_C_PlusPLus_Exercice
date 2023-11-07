# Exercices formation C++ - 2023

Besoin pour la formation
- gcc / g++ :
`sudo apt update`
`sudo apt install build-essential libssl-dev`
- cmake
`sudo apt-get install cmake`
- gdb
`sudo apt-get install gdb`
- vscode
`sudo apt install ./<file>.deb`

## A0 : HelloWorld
 - Elle consiste d’un fichier  *.cpp implémentant la fonction int main()
 - Utiliser un environnement de développement intégré (IDE)
 - Ecrivez une application console affichant “Hello World”

## A1 : Utiliser les types primitifs
 - Créer 4 fonctions prenant chacune un argument et une valeur de retour. Y compris double, int, bool , void
 - Ces fonctions afficheront leur nom et leur valeur d'argument
 - Appeler ces fonctions
 - Afficher la mémoire occupée par certains types: bool, int, float, double, char, wchar_t en utilisant sizeof
 - Bonus: Changer l'architecture ciblée en x86, que se passe-t-il? Quel est le type size_t ? Quelle est sa taille de mémoire ?
 - Bonus: Trouver les valeurs min et max pouvant être contenu dans: int, unsigned int, char, unsigned char

## A2 : Utiliser le contrôle d'execution
 - Définir un nombre const que l'utilisateur devra deviner
 - Dire à l'utilisateur de deviner ce nombre
 - Stocker l'entrée donnée par l'utilisateur en utilisant std::cin (l'opposé de std::cout)
 - Indiquer à l'utilisateur si le numéro fourni est correct, plus petit ou plus grand
 - Continuer à demander à l'utilisateur tant qu'il ne devine pas correctement
 - Arrêter le programme si l'utilisateur a échoué plus de 5 fois
 - Bonus: Que se passe-t-il si l'utilisateur fournit une lettre? Corriger ça avec cin.fail ()
 - Bonus: Que se passe-t-il si le nombre à deviner vaut 077?
 - Bonus: Afficher le nombre à deviner de manière binaire (utiliser #include <bitset>)
 - Bonus: Afficher le nombre à deviner en binaire (sinon en décimal ce serait trop facile à deviner…)
 - Bonus: Faite en sorte que l'application puisse prendre le nombre à deviner en tant que paramètre. (Utiliser une option -i pour définir la valeur en int ou bien -b pour la définir en binaire)

## A3 : Utiliser les valeurs, pointeurs et références
 - Créer une variable, un pointeur et une référence pointant sur la variable. Imprimer leur valeur, leur adresse
 - Créer trois fonctions void (qui ne retourne rien):
    - addByValue qui prend, ajoute 10 à un int puis l’affiche
    - addByAddress qui prend, ajoute 10 à un int * puis l’affiche
    - addByReference qui prend, ajoute 10 à un int & puis l’affiche
 - Appeler ces fonctions et afficher la valeur du paramètre avant et après l'appel
 - Bonus: Peut-on faire le pointeur, pointer vers la valeur stockée à côté de la variable d'origine? Quelle est la nouvelle adresse? Peut-on modifier cette valeur?
 - Bonus: Créer un pointeur pointant sur le premier pointeur. Peut-on augmenter la valeur du pointeur de 1? Quelle est la nouvelle adresse?
 - Bonus: Créer un pointeur constant sur un entier constant

## A4 : Utiliser les includes
 - Refactorer l’exercise A3  avec les définitions des fonctions dans un header Add.h et leur implémentation dans un fichier cpp Add.cpp
 - Créer une deuxième fonction addByReference dans Add.h
 - Implémenter la deuxième fonction dans Add.cpp.
 - Appeler ces fonctions depuis le fichier main.cpp
 - Bonus: Changer le fichier main.cpp en utilisant using namespace
 - Bonus: Créer un troisième addByReference qui prend un second argument (la valeur à ajouter)
 - Bonus: Créer un quatrième addByReference qui prend un deuxième argument (la valeur à ajouter) mais un nombre non signé
 - Bonus: Peut-on créer un cinquième addByReference qui renvoie un bool si l'opération a réussi?

## B1 : Utiliser string, référence et pointeur
 - Créez deux fonctions, une qui prend une string* et une qui prend une string&. Chacune de ces fonctions doit modifier l'objet string externe de manière unique (en utilisant append ou assign).
 - N'oublier pas d'ajouter #include <string> au fichier.
 - Dans main(), créer et initialiser un objet string, afficher-le, puis le transmettre à chacune des deux fonctions en affichant les résultats.
 - Bonus: Créer une C-style string. Le convertir en string
 - Bonus: Créer une C-style string à partir d’une string (de 2 manières différentes)
 - Bonus: Demander le nom de l'utilisateur (avec std :: cin) et affichez-le en utilisant une string
 - Bonus: Demander le nom de l'utilisateur et affichez-le en utilisant un buffer char[5] Que se passe-t-il si l'utilisateur fournit 5 caractères ou plus?


## B2 : Utiliser static_cast
 - Créer 2 variables de type int et float. Initialiser le float.
 - Assignez le float à l'int sans cast et avec static_cast. Voir l'avertissement lors de l'utilisation de la conversion automatique
 - Rassignez l'int au float sans cast et avec static_cast.
 - Créer un pointeur void* et le setter à  l'adresse de l'int. Créer un pointeur float* et l’affecter au pointeur void* (dangereux). Utiliser le C-cast ou le static cast pour effectuer l'opération
 - Créer une fonction: void func (int) {}
 - L’appeler avec le float à l'aide de la conversion implicite et du static_cast
 - Bonus: Définir un tableau de double. Prendre l'adresse de départ de ce tableau et utilisez static_cast pour le convertir en void *. Ecrire une fonction qui prend un void*, un nombre (indiquant un nombre d'octets) et une valeur (indiquant la valeur à laquelle chaque octet doit être défini) comme arguments. La fonction doit définir chaque octet de la plage spécifiée sur la valeur spécifiée. Essayez la fonction sur le tableau de double.

## B3 : Utiliser const_cast
 - Créez une variable int et une const int initialisé avec le int
 - Transformer la variable const int en int& et modifié sa valeur
 - Créer une structure Object contenant un membre int et une fonction f constante qui prend un paramètre int modifiant la valeur du membre
 - Créer un Object et appeler la fonction f
 - Utiliser const_cast sur this dans la fonction f pour modifier la valeur du membre

## B4 : Utiliser reinterpret_cast
 - Créer un tableau de 10 int sans l’initialisé
 - Créer une fonction print qui prend en paramètre un int* et size_t et affiche les éléments
 - Afficher toute les valeurs du tableau en utilisant votre fonction print.
 - Utiliser reinterpret_cast pour le convertir en un pointeur int*. Utiliser le pointeur pour mettre toutes les valeurs du tableau à 0.
 - Afficher toute les valeurs du tableau en utilisant le pointeur int* et la fonction print puis essayer d’utiliser un reinterpret_cast pour la ramener en type tableau.
 - Afficher également les valeurs en utilisant la variable d'origine.
 - Bonus: Créer une fonction qui prend un pointeur sur un tableau de double et une valeur indiquant la taille de ce tableau. La fonction doit imprimer chaque élément du tableau. Créer maintenant un tableau de double et initialiser chaque élément à zéro, puis utiliser la fonction pour imprimer le tableau. Ensuite, utiliser reinterpret_cast pour convertir l'adresse de départ du tableau en un unsigned char*, et assigner chaque octet du tableau à 1. Maintenant, utiliser la fonction d’affichage pour imprimer les résultats. Pourquoi chaque élément n'a pas été défini sur la valeur 1.0?

## B5 : Utiliser enums
 - Créer deux énumérations de Couleur et de Fruit
 - Créer une fonction qui prend en paramètre un Fruit et qui retourne sa Couleur
 - Créer et initialisé une variable Fruit, appeler cette fonction et afficher sa valeur de retour
 - Est-il possible de comparer un fruit avec une couleur?
 - Maintenant les convertir en enum  class. Ce qui se passe-t-il ?
 - Bonus: Trouver un moyen plus élégant d'afficher les valeurs énumérées

## B6 : Utiliser auto et decltype
 - Déclarer une variable auto dans la fonction main et l’initialisé avec une chaine de caractère
 - Ecrire une fonction prenant en paramètre un std::string et un char et qui retourne le nombre de fois que le char est visible dans le string en utilisant un for loop
 - Essayé d’appeler cette fonction et stocker sa valeur de retour dans la variable auto
 - Utiliser une variable déclaré avec decltype pour stocker la valeur de retour
 - Bonus : Déclarer std::vector< int > v = { 1, 2, 3 } et écrire une fonction permettant d’afficher son contenu
 - Bonus : Ecrire une fonction permettant d’incrémenter chaque élément du vector d’une valeur passé en paramètre en utilisant un for loop
 - Bonus : Stocker le pointeur de cette fonction dans une variable auto et l’appeler

## C1 : Utiliser les constructeurs
 - Créer une classe Tree avec un seul membre privé height et sans constructeur.
 - Instancier-le dans le main()
 - Ajouter un constructeur paramétré et essayer de compiler…
 - Ajouter un constructeur par défaut et compiler
 - Instancier la classe à l'aide des deux constructeurs
 - Bonus: Mettre une valeur par défaut au constructeur paramétré
 - Bonus: Implémenter le constructeur par défaut avec le mot clé = default

## C2 : Utiliser les copies constructeurs
 - Créer une classe Branch qui définit un constructeur de copie affichant uniquement un message. Créer également un constructeur par défaut (le compilateur ne l'ajoute que s'il n'y a pas du tout de constructeur)
 - Créer une classe Fruit contenant une private string, un constructeur paramétré qui prend et définit le nom du fruit et une fonction d’affichage const qui affiche le nom.
 - Créer une classe Tree avec un membre Branch et un membre Fruit. Le constructeur par défaut de Tree appelle le constructeur paramétré Fruit avec une valeur spécifique. Ajouter également une fonction d’affichage qui appelle la fonction d’affichage Fruit.
 - Dans main(), instancier un Tree avec le constructeur par défaut. Appelez sa fonction d’affichage. Puis instancier une autre instance de Tree en copiant la première instance. Appeler la fonction d’affichage sur la deuxième instance
 - Bonus: Ajouter à la classe Fruit, Fruit (const Fruit &) = delete;

## C3 : Utiliser allocation dynamique
 - Mettre à jour l'exercice C2
 - Ajoutez une surcharge de l’operator<<() pour afficher la hauteur de l'arbre. L’operator<<() prend en paramètre une référence sur std::ostream et une référence constante à un Tree. Il retourne une référence au même std::ostream. L'implémentation est similaire à celle utilisée avec std :: cout.
 - Implémenter un destructeur dans Tree ~Tree() qui affiche son nom
 - Créer une fonction growTree() qui retourne une instance de Tree et prend en paramètre la hauteur nécessaire
 - Dans la fonction main(), instancier des arbres et afficher leur hauteur
 - Quand utiliser le mot-clé delete?

## C4 : Utiliser unique_ptr
 - Modifier la classe Tree pour contenir une string et imprimer un message avec la string dans le constructeur (paramétrée avec la chaîne) et le destructeur.
 - Mettre à jour sa fonction print() pour utiliser cette string également
 - Ajouter une nouvelle fonction fictive void someMethod (Tree * iTree) {};
 - Créer une fonction void testUniquePtr () contenant les éléments suivants:
 - Créer un unique_ptr ptr1 sur une nouvelle instance de la classe et appeler la fonction print a partir de ptr1
 - Appeler la someMethod avec le ptr1 (utiliser ptr1.get ())
 - Déplacer la propriété de ptr1 vers un nouveau unique_ptr ptr2 à l'aide de std::move (ptr1). ptr1 est maintenant vide.
 - Utiliser la méthode reset de ptr1 pour lui affecter un nouveau pointeur.
 - Utiliser la méthode reset de ptr2 pour lui affecter un nouveau pointeur. Le premier objet sera supprimé puisqu'il n'a plus de référence.
 - Utiliser la méthode reset de ptr1 sans paramètre pour le vider. Le deuxième objet sera supprimé.
 - À la fin de la fonction, le troisième objet sera également supprimé
 - Mettre à jour growTree () pour renvoyer un unique_ptr
 - Que se passe-t-il en utilisant std::move ?
 - Bonus:
    - Allouer dynamiquement un tableau d'arbre en utilisant new[]
    - Implémenter et appeler une fonction printForest() qui appelle print() pour chaque arbre de la forêt. Il prend un pointeur de forêt comme argument
    - Quand  utiliser le mot clé delete[] ?
    - Rendre l'utilisation de cette fonction plus sûre en stockant la forêt dans un unique_ptr

## C5 : Utiliser shared_ptr
 - Créer une fonction void testSharedPtr () contenant les éléments suivants (elle utilisera le même class Tree que le premier exemple avec unique_ptr):
   - Utiliser make_shared <Tree> (...) pour créer un nouveau shared_ptr appelé ptr sur un premier objet
   - Appeler print () et someMethod () avec le ptr
   - Créer un autre shared_ptr <Tree> appelé anotherPtr égal à ptr. Maintenant les deux pointent vers le premier objet
   - Utiliser la fonction reset de ptr pour l'affecter à une autre instance de Tree. Le premier objet ne sera pas supprimé à ce stade car anotherPtr le contient toujours
- Utiliser la fonction reset de anotherPtr sans argument, personne ne fait référence au premier objet, il sera supprimé
À la fin de testSharedPtr (), le deuxième objet sera supprimé car le dernier shared_ptr sortira du scope

## C6 : Utiliser l'héritage simple
 - Créer une classe IntegerManager qui a un membre int privé et 3 fonctions membres:
   - read () qui retourne l'int
   - set () pour assigner l'int
   - permute () qui multiplie le membre par une constante (= 42)
 - Créer une classe DoubleIntegerManager qui hérite d’IntegerManager. Elle redéfinit le «même» int et ajoute deux nouvelles fonctions: 
   - change () qui appelle permute () de la classe de base
   - set () qui définit l’int interne et appelle le set() de la classe de base
 - Dans le main (), afficher la taille de chaque classe (en utilisant sizeof ())
 - Instancier ensuite un élément de classe fille et appeler les fonctions: change (), read (), permute () et set ()

## C7 : Utiliser l'héritage multiple
 - Créer trois classes: Faculty, Student and TA (Teaching Assistant). Toutes affichent un message avec leur nom dans leur constructeur par défaut.
 - Faire en sorte que la classe TA hérite à la fois de la Faculty et de Student (noter l'ordre d'héritage).
 - Dans main (), créer une instance de TA et voir le résultat (et l'ordre d'appel).
 - Penser au problème du diamant suivant: Faire en sorte que les classes Faculty and Student héritent de la classe Person composée de 2 membres: Name et Age

## C8 : Problème du diamant
 - Mettre à jour le problème précédent en ajoutant le mot-clé virtual à l'héritage de Person par Student et Faculty
 - Créer une instance du nouveau TA et voir le résultat.
 - Le problème du diamant est résolu, mais on n’appelle pas le constructeur que l’on souhaite… 
 - Ajouter un appel direct au constructeur de Person dans le constructeur du TA 
 - Cet appel n’est autorisé que en utilisant le mot-clé virtual!
 - Créer une instance du nouveau TA et voir le résultat final.

## D1 : Utiliser les exceptions ou pas
 - Créer un projet, créer une fonction qui calcule la division euclidienne de 2 ints (dividende divisé par un diviseur)
 - Cette fonction calculera le reste et le quotient.
 - Appeler cette fonction plusieurs fois depuis le main (y compris la division par zéro)
 - Comment retourner les résultats?
 - Comment gérer les erreurs (division par zéro)?
 - Renvoyer un code d'erreur de style C ou lever une exception?
 - Que se passe-t-il si l'exception n'est pas interceptée?
 - Créer une nouvelle classe d'exception héritant de std :: exception
 - Catch std :: exception et la classe fille, quel devrait être l'ordre des catch?

 ## D2 : Utiliser les templates
 - Créer une classe Array template qui contient un tableau de taille fixe de 100 éléments de type T
 - Créez l' operator[]  pour pouvoir accéder à un élément par index et le renvoyer par référence (noter que la fonction peut être inline ou non)
 - Créer un fichier StackTemplate.h qui définit une classe StackTemplate à l'aide de la classe Array et ajouter les fonctions publiques suivantes: void push (const T &), T pop () et int size (). Noter que les templates sont généralement définis directement dans le fichier .h.
 - Importer le fichier d'en-tête et essayer-le avec au moins deux instances (int et string).
 - Bonus: mettre à jour le Array template pour ajouter la taille de la pile en tant que deuxième paramètre du template (avec une valeur par défaut de 100)

## D3 : Utiliser static et dynamique library
 - Créer un projet d’application console D3 et un projet vide Logger
 - Dans le projet Logger créer deux fichier Logger.h et Logger.cpp et écrire une fonction void log(std::string)
 - Changer les options de compilation de projet pour générer une library static
 - Appeler la fonction log depuis la fonction main du projet D3
 - Transformer le projet Logger pour générer une lib dynamique
 - Bonus : Renommé la dll généré lors de l’étape précédente et modifié la fonction log pour que celle-ci préfix le message avec la date courante
 - Bonus : Essayé maintenant d’intervertir les dlls
 - Bonus : Rajouter un paramètre à la fonction logger compiler et essayer de nouveau de permuter les dlls

## E1 : Opérations sur les strings
 - Créer une string, afficher sa size() et sa capacity()
 - Faire quelques manipulations (en utilisant insert, append et operator<<) qui modifieront automatiquement sa capacité, afficher sa size() et sa capacity() à nouveau
 - Utiliser reserve (int) pour prédéfinir sa capacité et l'afficher
 - Créer une fonction void replaceChars (string& modifyMe, string const & findMe, string const & newChars) qui recherche findMe dans la string modifyMe et la remplace par newChars
 - Essayer avec un exemple
 - Faire une comparaison des string avec les opérateur operator ==, operator != operator >, operator <, operator >=,et operator <=.  Utiliser également la fonction compare (string)
 - Utiliser l'opérateur [] et at () pour accéder aux caractères
 - Utiliser at() avec une position non existante pour lever une exception. Utiliser try {} catch (const exception & e) {} pour voir l’exception et afficher son message

 ## E2 : Vecteurs et premiers itérateurs
 - Créer des vecteurs basés sur des int :
   - Vide
   - Avec quatre valeurs
   - Itérant à travers le précédent (utiliser begin() et end() )
   - Une copie du  précédent
 - Créer un tableau de 4 int, créer un vecteur d'int à partir de l’array de la même manière qu’on utilise les itérateurs (mais dans ce cas, on utilise des pointeurs, le premier paramètre sera le premier élément et le second l’ élément après le dernier élément)
 - Afficher chaque élément avec la boucle for en utilisant std::vector<int>::iterator qui va de begin() à end()
 - Utiliser maintenant la boucle for basées sur des intervalles

## E3 : Conteneurs et polymorphisme
 - Même si les conteneurs contiennent des objets par valeur (copies d'objets), on souhaite parfois stocker des pointeurs afin de pouvoir faire référence à des objets à partir d'une hiérarchie et ainsi tirer parti du comportement polymorphe des classes représentées.
 - Créer une classe Shape. La rendre abstraite en ajoutant la fonction virtual void draw () = 0; Noter que le "= 0" oblige à implémenter draw () pour toutes les classes héritant de Shape. Ajouter également un destructeur virtuel virtual ~ Shape () {};
 - Créer trois classes dérivées Circle, Square et Triangle qui override la fonction virtuelle draw() et affichent un message spécifique dans celle-ci. Ajouter également des destructeurs pour chacun d’eux qui impriment un message
 - Définir 2 typedef: typedef std::vector<Shape*>Container; et typedef Container::iterator Iter;
 - Dans main(), créer un conteneur, utilisez la fonction push_back pour ajouter un new Circle, new Square et un new Triangle
 - Utiliser une boucle for avec le type défini Iter i qui va de begin() à end() et appeler la fonction draw avec la syntaxe: (*i)->draw();
 - Utiliser une autre boucle for pour appeler delete sur chacun d'eux
 - Bonus: remplacer le conteneur par une liste au lieu d'un vecteur et vérifier que le résultat est identique (quelle que soit la structure interne du conteneur, celui-ci doit se comporter de manière identique)

## E4 : Utiliser for_each/count_if
 - Instancier un vecteur d'int avec plusieurs valeurs.
 - Coder une fonction unaire qui prend en entrée un int et retourne true s’il s’agit d’un nombre pair.
 - Coder une fonction unaire qui prend en entrée un int et affiche sa valeur
 - Afficher toutes les valeurs du vecteur et afficher le nombre de valeurs paires
 - Bonus: Utiliser un objet foncteur pour afficher les valeurs. Il doit avoir une variable membre utilisée pour préfixer le message de sortie.
 - Bonus: Que faire si le foncteur implémente operator() sous un autre nom comme display(int i)?

## E5 : Utiliser sort
 - Créer un vecteur d’int avec plusieurs valeurs en position aléatoire, y compris des valeurs négatives
 - Trier les 4 premiers éléments et afficher les éléments du vecteur
 - Créer une fonction qui compare deux int dans un strict weak ordering mais avec leurs valeurs absolues
 - Trier le vecteur et afficher les éléments  du vecteur
 - Bonus: Convertir ce vecteur en liste. Que se passe-t-il ?

## E6 : Utiliser std::transform
 - Créer une fonction op_increase(int i) qui augmente i de 1
 - Créer deux vecteurs de int. Attribuer des valeurs au premier
 - Redimensionner le second à la taille du premier (en utilisant la fonction resize ())
 - Utiliser std::transform (l'opération unaire) pour appeler la fonction op_increase sur chaque élément du premier vecteur et stockez le résultat dans le second
 - Utiliser une autre transformation (opération binaire) pour appeler la fonction std::plus<int>() (qui additionne ses deux arguments) sur les deux vecteurs et stocke le résultat dans le premier

## E7 : Utiliser function lambda
 - Créer un  vector<int>  avec les valeurs suivantes: 4, 1, 3, 5, 2, 3, 1, 7
 - Créer une fonction  printVector(<vector<int> v) qui affiche toutes les valeurs du vecteur à l'aide d’une lambda et de for_each
 - Maintenant, créer les lambdas suivantes:
   - Rechercher le premier nombre supérieur à 4:  find_if(v.begin(), v.end(), [](int i) { ... });
   - Trier le vecteur par ordre décroissant: sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool { ... });
   - Compter les nombres supérieurs ou égaux à 5: count_if(v.begin(), v.end(), [](int a) { ... });
   - Supprimer les éléments en double qui sont côte à côte (déjà effectué par le tri): unique(v.begin(), v.end(), [](int a, int b) { ... });
   - Redimensionner le vecteur (utiliser le précédent résultat) resize(distance(v.begin(), p))
   - Calculer factorielle de 10 en utilisant un nouveau tableau contenant des données de 1 à 10: accumulate(arr, arr + 10, 1, [](int i, int j) { ... });
 - On peut aussi accéder à une lambda en la stockant dans une variable

## E8 : Utiliser function lambda avec capture
 - Créer deux vector<int> v1 et v2 avec les valeurs suivantes: {3, 1, 7, 9} et {10, 2, 7, 16, 9}
 - Créer une lambda qui accède à toutes les variables par référence et mets un int dans v1 et v2: auto pushinto = [&](int m) {...};
 - Créer une lambda qui accède à v1 en copiant et imprimant toutes ses valeurs avec une boucle for: [v1] () {{}}
 - Définir une variable int N = 5 et créer une lambda qui compare un vérifie si un int est supérieur à N en capturant N par valeur.auto upper_than_n = [N](){}
 - Rechercher le premier nombre supérieur à N avec find_if et cette lambda vector<int>::iterator q = find_if(v1.begin(), v1.end(), upper_than_n)
 - Changer la valeur de N et essayer à nouveau cette function
 - Modifier la lambda pour capturer N par référence

 ## F1 : Un exemple simple
 - Créer une fonction qui affiche un message
 - Appeler cette fonction dans un thread séparé
 - Lancer 50 threads, quel est le problème?
 - Trouver un moyen d'identifier chaque thread de manière unique
 - Passer des variables aux threads par: valeur, référence, pointeur
 - Bonus: Faire la fonction lancer une exception avec 10% de chance. Que se passe-t-il ?

## F2 : Utiliser locks
 - Corriger l’exercice F1 pour avoir un message lisible
 - Faire en sorte que la fonction callFromThread lock 2 mutex. Elle devrait les prendre en arguments
 - Appeler cette fonction via plusieurs threads depuis le main et avec des mutex donnés dans des ordres différents
 - Quel type de solution pour éviter un deadlock ?

## F3 : Utiliser async
 - Créer un programme qui additionnera les éléments d'un vecteur avec std::accumulate dans une tâche (async)
 - Appeler deux fois std::async (divisez le vecteur en deux)
 - Afficher la somme finale
 - Bonus: Faire le split générique par tranche de 1000 éléments
 - Bonus: Utiliser la récursivité

## F4 : Implementer un Pool de Threads
 - Implémenter un pool de threads pour utiliser les futures
 - Créer une classe Worker qui est la classe exécutée par les threads.
 - Son opérateur () devrait être une boucle infinie attendant des tâches (en utilisant std::condition_variable)
 - Créer une classe ThreadPool qui prend le nombre de threads à allouer.
 - Un de ses membres est un conteneur de tâches, les tâches sont des pointeurs de fonctions génériques (std::function)
 - Le constructeur doit allouer tous les workers
 - Le destructeur doit informer tous les workers d'arrêter puis les joindre
 - Coder une méthode enqueue() qui poussera une tâche donnée dans le conteneur

## G1 : Quelques design patterns
- Créer une classe TransportFactory en utilisant le DesignPattern Singleton
- Créer une classe Transport et 3 classes filles Voiture, Camion, Avion contenant une méthode print affichant leur nom de classe
- Ajouter une méthode dans TransportFactory create( std::string ) créant un Transport du bon type en fonction du nom passé en paramètre et retournant un shared_ptr sur ce dernier
- Stocker les Transports générés dans la Factory et les détruire à la destruction
- Faire une boucle qui lit l’entrée std::cin, génère des objets en fonction de la saisie utilisateur et ferme l’application lors de la saisie ‘exit’
- Bonus : Faire en sorte que les classes filles s’enregistrent automatiquement dans la Factory
