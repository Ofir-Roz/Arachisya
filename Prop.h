#include "raylib.h"

class Prop
{
public:
    Prop(Vector2 pos, Texture2D tex, float objectSize);
    void Render(Vector2 knightPos);
    Rectangle getCollisionRec(Vector2 knightPos);
private:
    Vector2 worldPos{};
    Texture2D texture{};
    float scale{};
};
