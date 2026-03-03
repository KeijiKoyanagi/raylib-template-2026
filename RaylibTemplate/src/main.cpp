#include "raylib.h"

int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Raylib Template");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(DARKGRAY);

        DrawText("Raylib Template Ready", 400, 350, 30, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}