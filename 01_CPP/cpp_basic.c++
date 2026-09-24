#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age : ";
    cin >> age;

    if(age >= 18) {
        cout << "You're an adult" << endl;
    } else if (age >= 12) {
        cout << "You're a teenager" << endl;
    } else if(age < 12) {
        cout << "You're a child" << endl;
    } else {
        cout << "I think there's a problem" << endl;
    }

    //C'est un script simple pour avoir une 1ère approche des variables ainsi que des conditions
    //Il vérifie l'âge et indique la période de la vie de l'user

    int nbr_1;
    int nbr_2;
    int nbr_3;

    cout << "Enter number 1 : ";
    cin >> nbr_1;
    cout << "Enter number 2 : ";
    cin >> nbr_2;
    cout << "Enter number 3 : ";
    cin >> nbr_3;

    int list_nbr[3] = {nbr_1, nbr_2, nbr_3};
    int max = list_nbr[0];

    for(int i = 0; i < 3; i++) {
        if (max < list_nbr[i]) {
            max = list_nbr[i];
            cout << max << endl;
        }
    }

    //De nouveau un petit script pour voir les boucles, ainsi que les tableaux
    //L'objectif est de voir comment se déplacer dans une liste, ce qui aidera pour les algo à l'avenir
    return 0;
}

//L'objectif du jour est de voir les fonctions ainsi que les vecteurs

int add(int a, int b) {
        return a + b;
    }

int second_day () {
    int a;
    int b;

    cout << "Enter number a : ";
    cin >> a;
    cout << "Enter number b : ";
    cin >> b;

    cout << add;
}