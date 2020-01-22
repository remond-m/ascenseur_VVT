// TP2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "TP2.h"

#include "gtest\gtest.h"

using namespace std;

void sort(int num[], int nb_element) {
	int j;
	bool ag = true;		//set ag to true to begin rst pass
	int temp;			//holding variable

	while (ag) {
		//set ag to false awaiting a possible swap
		ag = false;
		for (j = 0; j < nb_element - 1; j++) {
			//change to > for ascending sort
			if (num[j] < num[j + 1]) {
				temp = num[j];			//swap elements
				num[j] = num[j + 1];
				num[j + 1] = temp;
				ag = true;				//shows a swap occured
			}
		}
	}
	cout << "ok";
}

bool test(int tab[], int length, int oracle[], int numTest) {
	int i;
	sort(tab, length);

	for (i = 0; i < length; i++) {
		if (tab[i] != oracle[i]) {
			cout << "TEST " << numTest << ": NOK" << endl;
			return false;
		}
	}
	cout << "TEST " << numTest << ": OK" << endl;
	return true;
}

TEST(groupe1, scenario2)
{

}


int main()
{
	testing::InitGoogleTest();

	RUN_ALL_TESTS();
	
	//TEST1 classic tab
	int num1[] = { 0,2,1 };
	int oracle1[] = { 2,1,0 };
	int length = sizeof(num1) / sizeof(int);
	test(num1, length, oracle1, 1);

	//TEST2 empty tab
	int num2[1];
	int oracle2[1];
	length = sizeof(num2) / sizeof(int);
	test(num2, length, oracle2, 2);

	//TEST3 tab with positive and negative elements
	int num3[] = { -2,100000,0 };
	int oracle3[] = { 100000,0,-2 };
	length = sizeof(num3) / sizeof(int);
	test(num3, length, oracle3, 3);

	//TEST4 only one element
	int num4[] = { 23 };
	int oracle4[] = { 23 };
	length = sizeof(num4) / sizeof(int);
	test(num4, length, oracle4, 4);

	//TEST5 2 tab containing 2 identical elements 
	int num5[] = { 32, 4, 32, 6 };
	int oracle5[] = { 32, 32, 6, 4 };
	length = sizeof(num5) / sizeof(int);
	test(num5, length, oracle5, 5);
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
