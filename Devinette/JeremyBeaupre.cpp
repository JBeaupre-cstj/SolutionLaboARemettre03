//But: deviner un nombre aléatoire entre 0 et 100, l'utilisateur à 5 chance pour trouver le chiffre après quoi il aura perdu
//Auteur: Jérémy Beaupré
//Date: 04/10/2020

#include <iostream>
#include <time.h> // Pour srand() et rand()

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const int NB_ALEA_MAX = 101; //101 C'est parce que le rand() prend les valeur en dessous de 101 sois 100 nombre depuis 0 (dans time())
	const int CHANCE_MAX = 5;
	
	//Déclaration des variables
	int nombreAleatoire; //J'ai juste chance le iRandom pour le mettre conforme à nos règles de programmation
	int nombreChoisi;

	//Maintenant on crée un nombre aléatoire à l'aides des deux fonction srand(time(0)) qui ouvre un fonction d'horloge dans le programme
	// ont utilisera aussi rand() prendra le nombre sur lequel l'horlogue est pour le mettre dans nombreAleatoire

	srand(time(0));
	nombreAleatoire = rand() % NB_ALEA_MAX;

	//Maintenant on crée une boucle for pour le nombre de chance que l'utilisateur peut utiliser
	for (int nombreDeChance = 0; nombreDeChance < CHANCE_MAX; nombreDeChance++)
	{
		cout << "Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : ";
		cin >> nombreChoisi;

		if (nombreChoisi == nombreAleatoire)
		{
			cout << "Félicitation ! Vous avez deviner le nombre qui était de " << nombreAleatoire << "." << endl << endl;
			nombreDeChance = CHANCE_MAX;
		}
		else
		{
			cout << "Perdu !" << endl;

			if (nombreAleatoire < nombreChoisi)
			{
				cout << "tips : Le nombre aléatoire est plus petit que " << nombreChoisi << endl << endl;
			}
			else
			{
				cout << "tips : Le nombre aléatoire est plus grand que " << nombreChoisi << endl << endl;
			}

			if (nombreDeChance == (CHANCE_MAX -1))
			{
				cout << "Désoler, c'était ta dernière chance..." << endl << endl;
			}
		}

	}

	
	return 0;
}

/*Plan de test

TEST 1 : 
Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 50
Perdu !
tips : Le nombre aléatoire est plus grand que 50

Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 75
Perdu !
tips : Le nombre aléatoire est plus petit que 75

Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 60
Perdu !
tips : Le nombre aléatoire est plus petit que 60

Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 55
Perdu !
tips : Le nombre aléatoire est plus grand que 55

Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 58
Perdu !
tips : Le nombre aléatoire est plus petit que 58

Désoler, c'était ta dernière chance...


TEST 2 :
Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 50
Félicitation ! Vous avez deviner le nombre qui était de 50.

HAHA quel chance ! XD



TEST 3 :
Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 50
Perdu !
tips : Le nombre aléatoire est plus petit que 50

Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 25
Perdu !
tips : Le nombre aléatoire est plus grand que 25

Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 35
Perdu !
tips : Le nombre aléatoire est plus petit que 35

Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 30
Perdu !
tips : Le nombre aléatoire est plus petit que 30

Entrer un nombre entre 0 et 100 que vous penser être la valeur du nombre aléatoire : 28
Félicitation ! Vous avez deviner le nombre qui était de 28

*/