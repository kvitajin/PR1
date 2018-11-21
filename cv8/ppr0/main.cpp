#include <iostream>
#include <vector>

struct Player{
    int                 health;
    std::string         name;
    std::vector<int>    scores;
    std::vector<Player> otherPlazers;
    Player* enemy;

};
void setPlayerStats(Player& p, std::string name, int health){

    }
void addScoreToPlayer (Player* p, int score){

}
struct Node {
    int value;
    Node* next;
};
int main() {
    Player player;                      //tvoreno na zasobniku
    player.health=150;
    player.name="Adam";
    Player player2={222,"Pepa"};



    Player* p1=new Player;              //tvoreno na halde, nutno dealokovat
    p1->health=666;

    return 0;
}