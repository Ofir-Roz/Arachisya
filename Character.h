#ifndef CHARACTER_H
#define CHARACTER_H

#include "raylib.h"
#include "BaseCharacter.h"

class Character : public BaseCharacter
{
public:
    Character(int winWidth, int winHeight);
    virtual void tick(float deltaTime) override;
    virtual Vector2 getScreenPos() override;
    Rectangle getWeaponCollisionRec() { return weaponCollisionRec; }
    float getHealth() const { return health; }
    void takeDamage(float damage);
private:
    int windowWidth{};
    int windowHeight{};
    Texture2D weapon{LoadTexture("characters/weapon_laser_sword.png")};
    Rectangle weaponCollisionRec{};
    Sound stride = LoadSound("nature_tileset/16_human_walk_stone_3.wav");
    Sound attack = LoadSound("nature_tileset/07_human_atk_sword_2.wav");
    float health {100.f};
};

#endif