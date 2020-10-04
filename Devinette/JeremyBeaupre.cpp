//But: deviner un nombre al�atoire entre 0 et 100, l'utilisateur � 5 chance pour trouver le chiffre apr�s quoi il aura perdu
//Auteur: J�r�my Beaupr�
//Date: 04/10/2020

#include <iostream>
#include <time.h> // Pour srand() et rand()

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const int NB_ALEA_MAX = 101; //101 C'est parce que le rand() prend les valeur en dessous de 101 sois 100 nombre depuis 0 (dans time())
	const int CHANCE_MAX = 5;
	
	//D�claration des variables
	int nombreAleatoire; //J'ai juste chance le iRandom pour le mettre conforme � nos r�gles de programmation
	int nombreChoisi;

	//Maintenant on cr�e un nombre al�atoire � l'aides des deux fonction srand(time(0)) qui ouvre un fonction d'horloge dans le programme
	// ont utilisera aussi rand() prendra le nombre sur lequel l'horlogue est pour le mettre dans nombreAleatoire

	srand(time(0));
	nombreAleatoire = rand() % NB_ALEA_MAX;

	//Maintenant on cr�e une boucle for pour le nombre de chance que l'utilisateur peut utiliser
	for (int nombreDeChance = 0; nombreDeChance < CHANCE_MAX; nombreDeChance++)
	{
		cout << "Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : ";
		cin >> nombreChoisi;

		if (nombreChoisi == nombreAleatoire)
		{
			cout << "F�licitation ! Vous avez deviner le nombre qui �tait de " << nombreAleatoire << "." << endl << endl;
			nombreDeChance = CHANCE_MAX;
		}
		else
		{
			cout << "Perdu !" << endl;

			if (nombreAleatoire < nombreChoisi)
			{
				cout << "tips : Le nombre al�atoire est plus petit que " << nombreChoisi << endl << endl;
			}
			else
			{
				cout << "tips : Le nombre al�atoire est plus grand que " << nombreChoisi << endl << endl;
			}

			if (nombreDeChance == (CHANCE_MAX -1))
			{
				cout << "D�soler, c'�tait ta derni�re chance..." << endl << endl;
			}
		}

	}

	
	return 0;
}

/*Plan de test

TEST 1 : 
Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 50
Perdu !
tips : Le nombre al�atoire est plus grand que 50

Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 75
Perdu !
tips : Le nombre al�atoire est plus petit que 75

Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 60
Perdu !
tips : Le nombre al�atoire est plus petit que 60

Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 55
Perdu !
tips : Le nombre al�atoire est plus grand que 55

Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 58
Perdu !
tips : Le nombre al�atoire est plus petit que 58

D�soler, c'�tait ta derni�re chance...


TEST 2 :
Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 50
F�licitation ! Vous avez deviner le nombre qui �tait de 50.

HAHA quel chance ! XD



TEST 3 :
Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 50
Perdu !
tips : Le nombre al�atoire est plus petit que 50

Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 25
Perdu !
tips : Le nombre al�atoire est plus grand que 25

Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 35
Perdu !
tips : Le nombre al�atoire est plus petit que 35

Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 30
Perdu !
tips : Le nombre al�atoire est plus petit que 30

Entrer un nombre entre 0 et 100 que vous penser �tre la valeur du nombre al�atoire : 28
F�licitation ! Vous avez deviner le nombre qui �tait de 28

*/