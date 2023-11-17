/*
Créez une boucle infinie dans votre programme qui lit les inputs clavier à l’aide de la fonction std::cin
Créez des fonctions sans paramètres et retournant void pour: fermer l’application, afficher l’heure, écrire « Hello world » dans la console
Utilisez un conteneur associatif pour associé respectivement ces fonctions avec les mots clés « exit », « time » et « hello »
Appelez de manière générique les fonctions du conteneur associatif lorsque leur mot clé est saisie
*/
#include <iostream>
#include <map>
#include <functional>
#include <chrono>

class Drone
{
    public:
        void turn_off()
        {
            if( _signalTurnOff )
                _signalTurnOff();
        }

        std::function<void()> _signalTurnOff = nullptr;
};

bool running = true;


std::string get_time()
{
    auto timenow = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	return std::ctime(&timenow);
}

int main() {

    Drone drone;
    // drone._signalTurnOff = say_goodbye();

    drone.turn_off();
    return 0;
}
