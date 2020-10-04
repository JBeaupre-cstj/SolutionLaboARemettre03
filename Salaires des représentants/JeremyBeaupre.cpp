//But: Entrer les ventes brutes hebdomadaires de chaque représentant et calculer et afficher son salaire
// entrer -1 èa la valeur des ventes pour quitter le programme
// * Les représentants reçoivent 250$ / semaines + 7.5% de leurs ventes brutes / semaine
//Auteur: Jérémy Beaupré
//Date: 04 / 10 / 2020

//inclusion de bibliothèque
#include <iostream>

using namespace std; //Utilisation de l'espace de nom standard 

int main()
{
	setlocale(LC_ALL, "");

	//tout d'abord ont crée des constantes
	// 1- 250$
	// 2- 7.5%

	const int SALAIRE_DE_BASE = 250;
	const float POURCENT_SUPPL = 7.5;

	//ensuite on crée des variables 
	// une pour enregistrer le salaire total
	// une pour enregistrer le montant des ventes brutes

	float salaireTotal;
	float venteBrute;

	//on commence par demander à l'utilisateur les ventes brutes 
	cout << "Veuillez entrer le montant des ventes brutes du représentant : ";
	cin >> venteBrute;

	//ensuite on crée une boucle pour pouvoir la quitter à l'aide de -1
	while (venteBrute != -1)
	{
		// ensuite on crée une autre boucle pour empêcher l'utilisateur d'inscrire un nombre négatif
		while (venteBrute < 0)
		{
			cout << "Le montant ne peut être négatif : ";
			cin >> venteBrute;
		}

		//Maintenant on peut calculer le 7.5%
		salaireTotal = (venteBrute / 100)/*pour le mêtre sur 100*/ * POURCENT_SUPPL;/*qui équivaut à 7.5*/
		// on ajoute le 250$ de base 
		salaireTotal = salaireTotal + SALAIRE_DE_BASE;/*qui est de 250$*/

		//maintenant on affiche le salaire du représentant
		cout << "Voici le salaire total du représentant : " << salaireTotal << "$"<< endl << endl;

		//finalement on redemande à l'utilisateur les ventes brutes sinon il ne pourra pas sortir de la boucle 
		cout << "Veuillez entrer le montant des ventes brutes du représentant : ";
		cin >> venteBrute;
		salaireTotal = 0; //Pour remettre le salaire total à 0, puisqu'on y fait que des additions les chiffre s'accumuleront 
	}

	return 0;
}


/* Plan de test :

TEST 1 :
Veuillez entrer le montant des ventes brutes du représentant : 1000
Voici le salaire total du représentant : 325$

TEST 2 :
Veuillez entrer le montant des ventes brutes du représentant : 15625
Voici le salaire total du représentant : 1421.88$

TEST 3 : 
Veuillez entrer le montant des ventes brutes du représentant : -725
Le montant ne peut être négatif : 725
Voici le salaire total du représentant : 304.37

TEST 4 : 
Veuillez entrer le montant des ventes brutes du représentant : -1
*fermeture du programme*

*/
