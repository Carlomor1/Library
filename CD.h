#ifndef CD_H
#define CD_H

#include <string>
#include <iostream>
using namespace std;

class CD {
private:
    int id;
    string title;
    string artist;
    bool loaned;

public:
    CD(int id, const string& title, const string& artist)
        : id(id), title(title), artist(artist), loaned(false) {}

    int getId() const { return id; }
    string getTitle() const { return title; }
    string getArtist() const { return artist; }
    bool isLoaned() const { return loaned; }

    void setLoaned(bool l) { loaned = l; }

    void printInfo() const {
        cout << "CD ID: " << id << " | Title: " << title
             << " | Artist: " << artist
             << " | Loaned: " << (loaned ? "Yes" : "No") << endl;
    }
};

#endif
