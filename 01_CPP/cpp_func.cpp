#include <iostream>
#include <array>
#include <vector>
using namespace std;


//L'objectif du jour est de voir les fonctions ainsi que les vecteurs

int add(int a, int b) {
        return a + b;
    }

int square(int x) {
    return x * x;
}

int sumOfSquare(int a, int b) {
    return square(a) * square(b);
}

int getMax(std::array <int, 5>numbers) {
    int max = numbers[0];

    for(int i = 1; i < 5; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

void swapNumbers(int& a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main () {
    int a;
    int b;

    cout << "Enter number a : ";
    cin >> a;
    cout << "Enter number b : ";
    cin >> b;

    cout << add(a, b) << endl;
    cout << square(a) << endl;
    cout << square(b) << endl;
    cout << sumOfSquare(a, b) << endl;

    std::array <int, 5>numbers = {4, 5, 8, 17, 1};

    cout << getMax(numbers) << endl;

    swapNumbers(a, b);
    cout << a << " " << b << endl;

    std::vector<int> nbr = {10, 20, 30, 40, 50};
    
    cout << nbr[1] << endl;
    cout << nbr.size() << endl;
    
    nbr[1] = 11;
    cout << nbr[1] << endl;
    nbr.push_back(60);
    cout << nbr[1] << endl;
    cout << nbr.size() << endl;

    for(int i = 0; i < nbr.size(); i++) {
        cout << nbr[i] << endl;
    }

}
