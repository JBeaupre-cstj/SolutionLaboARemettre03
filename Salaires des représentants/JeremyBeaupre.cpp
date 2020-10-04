//But: Entrer les ventes brutes hebdomadaires de chaque repr�sentant et calculer et afficher son salaire
// entrer -1 �a la valeur des ventes pour quitter le programme
// * Les repr�sentants re�oivent 250$ / semaines + 7.5% de leurs ventes brutes / semaine
//Auteur: J�r�my Beaupr�
//Date: 04 / 10 / 2020

//inclusion de biblioth�que
#include <iostream>

using namespace std; //Utilisation de l'espace de nom standard 

int main()
{
	setlocale(LC_ALL, "");

	//tout d'abord ont cr�e des constantes
	// 1- 250$
	// 2- 7.5%

	const int SALAIRE_DE_BASE = 250;
	const float POURCENT_SUPPL = 7.5;

	//ensuite on cr�e des variables 
	// une pour enregistrer le salaire total
	// une pour enregistrer le montant des ventes brutes

	float salaireTotal;
	float venteBrute;

	//on commence par demander � l'utilisateur les ventes brutes 
	cout << "Veuillez entrer le montant des ventes brutes du repr�sentant : ";
	cin >> venteBrute;

	//ensuite on cr�e une boucle pour pouvoir la quitter � l'aide de -1
	while (venteBrute != -1)
	{
		// ensuite on cr�e une autre boucle pour emp�cher l'utilisateur d'inscrire un nombre n�gatif
		while (venteBrute < 0)
		{
			cout << "Le montant ne peut �tre n�gatif : ";
			cin >> venteBrute;
		}

		//Maintenant on peut calculer le 7.5%
		salaireTotal = (venteBrute / 100)/*pour le m�tre sur 100*/ * POURCENT_SUPPL;/*qui �quivaut � 7.5*/
		// on ajoute le 250$ de base 
		salaireTotal = salaireTotal + SALAIRE_DE_BASE;/*qui est de 250$*/

		//maintenant on affiche le salaire du repr�sentant
		cout << "Voici le salaire total du repr�sentant : " << salaireTotal << "$"<< endl << endl;

		//finalement on redemande � l'utilisateur les ventes brutes sinon il ne pourra pas sortir de la boucle 
		cout << "Veuillez entrer le montant des ventes brutes du repr�sentant : ";
		cin >> venteBrute;
		salaireTotal = 0; //Pour remettre le salaire total � 0, puisqu'on y fait que des additions les chiffre s'accumuleront 
	}

	return 0;
}


/* Plan de test :

TEST 1 :
Veuillez entrer le montant des ventes brutes du repr�sentant : 1000
Voici le salaire total du repr�sentant : 325$

TEST 2 :
Veuillez entrer le montant des ventes brutes du repr�sentant : 15625
Voici le salaire total du repr�sentant : 1421.88$

TEST 3 : 
Veuillez entrer le montant des ventes brutes du repr�sentant : -725
Le montant ne peut �tre n�gatif : 725
Voici le salaire total du repr�sentant : 304.37

TEST 4 : 
Veuillez entrer le montant des ventes brutes du repr�sentant : -1
*fermeture du programme*

*/
