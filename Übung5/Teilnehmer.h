#ifndef UEBUNG5_7_TEILNEHMER_H
#define UEBUNG5_7_TEILNEHMER_H

#include <string>
#include <vector>

using namespace std;

class Teilnehmer {

public:
    explicit Teilnehmer(std::string);

    std::string gibNamen();

    void lerntKennen(Teilnehmer &);

    std::vector<Teilnehmer> druckeBekannte();

    bool compare(Teilnehmer);

private:
    std::string name;
    std::vector<Teilnehmer> bekannte;

};

inline Teilnehmer::Teilnehmer(std::string name) : name(name) {};

inline bool Teilnehmer::compare(Teilnehmer a) {
    return name == a.name;
}

#endif
