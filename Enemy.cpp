#include "Enemy.h"
#include "raymath.h"

Enemy::Enemy(Vector2 pos, Texture2D idle_texture, Texture2D run_texture, float enemySpeed)
{
    worldPos = pos;
    texture = idle_texture;
    idle = idle_texture;
    run = run_texture;
    width = texture.width/maxFrames;
    height = texture.height;
    speed = enemySpeed;
}

void Enemy::tick(float deltaTime)
{
    if (!getAlive()) {
        if (!IsSoundPlaying(enemyKilled) && !killed)
            PlaySound(enemyKilled);
        else 
            ResumeSound(enemyKilled);
            
        killed = true;
        return;
    }

    // get the velocity vector to the target
    velocity = Vector2Subtract(target->getScreenPos(), getScreenPos());
    if (Vector2Length(velocity) < radius) velocity = {};
    BaseCharacter::tick(deltaTime);

    if (CheckCollisionRecs(target->getCollisionRec(), getCollisionRec()))
    {
        target->takeDamage(damagePerSec * deltaTime);
    }
}

Vector2 Enemy::getScreenPos()
{
    return Vector2Subtract(worldPos, target->getWorldPos());
}
