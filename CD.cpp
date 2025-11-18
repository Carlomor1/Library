#include "CD.h"
#include <iostream>
using namespace std;

// Constructor vacío
CD::CD() {
    title = "";
    artist = "";
    year = 0;
    available = true;
}

// Constructor con parámetros
CD::CD(string t, string a, int y) {
    title = t;
    artist = a;
    year = y;
    available = true;
}

// Getters
string CD::getTitle() const {
    return title;
}

string CD::getArtist() const {
    return artist;
}

int CD::getYear() const {
    return year;
}

bool CD::isAvailable() const {
    return available;
}

// Setters
void CD::setTitle(string t) {
    title = t;
}

void CD::setArtist(string a) {
    artist = a;
}

void CD::setYear(int y) {
    year = y;
}

void CD::setAvailable(bool a) {
    available = a;
}

// Mostrar información del CD
void CD::printInfo() const {
    cout << "Título: " << title << endl;
    cout << "Artista: " << artist << endl;
    cout << "Año: " << year << endl;
    cout << "Disponible: " << (available ? "Sí" : "No") << endl;
}
