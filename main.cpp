#include "Player.h"

int main() {
    Player* players[5] = {
        new Sniper("s1mple"),
        new Leader("karrigan", "Rush B"),
        new Terrorist("frozen"),
        new Terrorist("ropz"),
        new Terrorist("skullz")
    };

    cout << "Дії гравців FaZe Clan:\n";
    for (int i = 0; i < 5; ++i) {
        cout << " ";
        players[i]->Action();
    }

    cout << "\nГравець Counter-Terrorist:\n";
    CounterTerrorist* ct = new CounterTerrorist("rain");
    cout << " ";
    ct->Defuse(10);
    cout << " ";
    ct->Defuse(10, true);
    cout << " ";
    ct->ShowInfo();
    delete ct;

    cout << "\nІнформація про гравців FaZe Clan:\n";
    for (int i = 0; i < 5; ++i) {
        cout << " ";
        players[i]->ShowInfo();
        delete players[i];
    }

    return 0;
}
