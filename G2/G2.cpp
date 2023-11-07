/*
Créez une classe Complex qui représente un nombre complexe, avec une partie réelle et une partie imaginaire, toutes deux de type double.
Implémentez les opérateurs +, =, +=, *, == et != pour cette classe.
Ajoutez également une surcharge de l'opérateur << pour afficher un complexe sur la sortie standard
Testez les opérateurs en effectuant quelques opérations sur des nombres complexes.
Ajoutez deux opérateurs de cast pour convertir un objet Complex en double et en int.
La conversion en double se fait en renvoyant la partie réelle de l'objet Complex.
La conversion en int se fait en tronquant la partie réelle de l'objet Complex
Ajoutez une fonction prenant en paramètre un double, peut-on appeler cette fonction en lui passant directement un Complex ?
Comment faire pour empêcher ça ?
Ajoutez un opérateur d'addition avec un type entier et vérifier que l'on peut faire Complex + 10, peut-on faire 10 + Complex ?
*/
#include <iostream>

int main() {
    // Complex a(2.0, 3.0);
    // Complex b(4.0, -5.0);

    // std::cout << "a = " << a << std::endl;
    // std::cout << "b = " << b << std::endl;

    // std::cout << "a + b = " << a + b << std::endl;
    // std::cout << "a + 10 = " << a + 10 << std::endl;
    // std::cout << "a + 10 = " << 10 + a << std::endl;
    // std::cout << "a * b = " << a * b << std::endl;

	// a += b;
	// std::cout << "a += b " << a << std::endl;

    // std::cout << "(a == b) = " << (a == b) << std::endl;
    // std::cout << "(a != b) = " << (a != b) << std::endl;

    // std::cout << "real_a = " << static_cast<double>(a) << std::endl;
    // std::cout << "int_a = " << static_cast<int>(a) << std::endl;
	// func(a);

    return 0;
}
