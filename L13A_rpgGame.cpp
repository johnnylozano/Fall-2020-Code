/*
Class: CSE 1321L
Section: 18
Term: Fall2020
Instructor: Keerthi Manchukonda
Name: Johnny Lozano
Lab#: 13A

===RPG-Game=====================================================================
- User inputs number of enemies, damage by enemies, hero HP, and hero damage
- Program uses OOP to simulate game to determine if the hero wins or loses
================================================================================
*/

#include <iostream>

using namespace std;

class Hero
{
    int hp;
    int damage;
    bool alive;
public:
    Hero(int hp, int damage)
    {
        this->hp = hp;
        this->damage = damage;
        alive = true;
    }
    int getDamage()
    {
        return damage;
    }
    int getHP()
    {
        return hp;
    }
    bool isAlive()
    {
        return alive;
    }
    void takeDamage(int damageOccured)
    {
        hp -= damageOccured;

        if (hp <= 0)
            alive = false;
    }
};
class Enemy
{
    int hp;
    int damage;
    bool alive;
public:
    Enemy(int hp, int damage)
    {
        this->hp = hp;
        this->damage = damage;
        alive = true;
    }
    int getDamage()
    {
        return damage;
    }

    int getHP()
    {
        return hp;
    }

    bool isAlive()
    {
        return alive;
    }

    void takeDamage(int damageOccured)
    {
        hp -= damageOccured;

        if (hp <= 0)
            alive = false;
    }
};
int getAlive(Enemy** enemies, int enemy_count)
{
    int alives = 0;
    for (int i = 0; i < enemy_count; ++i)
    {
        if (enemies[i]->isAlive())
            ++alives;
    }

    return alives;
}
void print_hp(Enemy** enemies, int enemy_count)
{
    for (int i = 0; i < enemy_count; ++i)
    {
        cout << "|" << enemies[i]->getHP();
    }
}
int main()
{
    int enemy_count, enemy_damage;
    int hero_damage, hero_hp;

    cout << "\nEnter number of Enemies: ";
    cin >> enemy_count;

    cout << "Enter the enemy damage: ";
    cin >> enemy_damage;

    cout << "Enter the hero's starting HP: ";
    cin >> hero_hp;

    cout << "Enter the hero's damage: ";
    cin >> hero_damage;

    Hero hero(hero_hp, hero_damage);

    Enemy** enemies = new Enemy * [enemy_count];

    for (int i = 0; i < enemy_count; ++i)
    {
        enemies[i] = new Enemy(10 + (2 * i), enemy_damage);
    }

    bool gameOver = false;
    int enemies_alive = enemy_count;
    int round = 0;

    do
    {
        hero.takeDamage(enemies_alive * enemy_damage);

        for (int i = 0; i < enemy_count; ++i)
        {
            if (enemies[i]->isAlive())
            {
                enemies[i]->takeDamage(hero.getDamage());
            }
        }

        enemies_alive = getAlive(enemies, enemy_count);
        gameOver = !hero.isAlive() || enemies_alive == 0;

        cout << "\n==== After round " << ++round << " ====";
        cout << "\nNum enemies left: " << enemies_alive << "\n";
        print_hp(enemies, enemy_count);
        cout << "\nHero HP: " << hero.getHP();

    } while (!gameOver);
    if (hero.isAlive())
        cout << "\nHero wins!\n";
    else
        cout << "\nEnemies win!\n";

    for (int i = 0; i < enemy_count; ++i)
    {
        delete enemies[i];
    }

    delete[] enemies;

    return 0;
}