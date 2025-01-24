/*
Ranking gry NewCSShooter przechowywany jest na serwerze w następujący sposób:
MystiqueHero;1365;6890;15210
Frizz;5400;6200;11000
Każdy wiersz reprezentuje statystyki rozegranych meczy dla danego użytkownika.
Pojedynczy wiersz zawiera następujące informacje oddzielone od siebie średnikiem:
nazwa użytkownika, ilość wygranych meczy, ilość rozegranych meczy, ilość dokonanych likwidacji. 
Przykład 
    MystiqueHero;1365;6890;15210,
można zinterpretować, że gracz MystiqueHero wygrał 1365 meczy
na 6890 wszystkich rozegranych meczy
i dokonał 15210 likwidacji.

Zbuduj ranking graczy obliczając ich wynik rankingowy.
Napisz funkcję, która przyjmuje dynamiczną tablicę napisów (c-string),
w której w każdym elemencie przechowywany jest zapis statystyki danego gracza
oraz drugą taką tablicę  wyjściową na wyniki.
Funkcja powinna w drugą tablicę wyjściową wpisać informacje o graczu
oraz jego wynik liczony w następujący sposób:
wygrane mecze  + wszystkie mecze + ilość likwidacji.
Możesz założyć że nazwa użytkownika to nie więcej niż 12 znaków
oraz całkowity wynik to liczba całkowita złożona z maksymalnie 10 cyfr.
Napisz program testujący zaimplementowaną funkcję.
IN:
[
"MystiqueHero;1365;6890;15210",
"Frizz;5400;6200;11000",
"Ziemniak;9965;11000;73000",
"Evel00na;10;10;90"
]
OUT:
[
"MystiqueHero 23465", //(bo 1365 + 6890 + 15210 = 23465)
"Frizz 22600",
"Ziemniak 93965",
"Evel00na 110",
]
*/

#include <cstring>
#include <iostream>

void initLeaderboard(char* players[], int playercount, char* results[]) {
    for (int i = 0; i < playercount; i++) {
        // create a copy of the player data for us to work on
        char playerCopy[50];
        // when working with strings, always use strcpy from cstring to hard copy data
        std::strcpy(playerCopy, players[i]);
        // an array holding 4 pointers to strings of any length
        char* playerTokenized[4];
        // strtok splits a string based on a delimiter and stores a pointer to it's result in the token variable
        char* token = std::strtok(playerCopy, ";");
        for (int j = 0; (j < 4) && (token != NULL); j++) {
            // copy the token over to our data array
            playerTokenized[j] = token;
            token = std::strtok(NULL, ";");
        }
        int score = std::atoi(playerTokenized[1]) + std::atoi(playerTokenized[2]) + std::atoi(playerTokenized[3]);
        results[i] = new char[50];
        std::sprintf(results[i], "%s %d", playerTokenized[0], score);
    }
}

int main() {
    int playercount = 4;
    char** ranking = new char*[playercount];
    ranking[0] = new char[50]; std::strcpy(ranking[0], "MystiqueHero;1365;6890;15210");
    ranking[1] = new char[50]; std::strcpy(ranking[1], "Frizz;5400;6200;11000");
    ranking[2] = new char[50]; std::strcpy(ranking[2], "Ziemniak;9965;11000;73000");
    ranking[3] = new char[50]; std::strcpy(ranking[3], "Evel00na;10;10;90");

    char** results = new char*[playercount];
    initLeaderboard(ranking, playercount, results);
    for (int i = 0; i < playercount; i++) {
        std::cout << results[i] << std::endl;
        delete[] results[i];
    }
    delete[] results;

    for (int i = 0; i < playercount; i++) {
        delete[] ranking[i];
    }
    delete[] ranking;
}