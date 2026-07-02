#include "raylib.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib CMake Test");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Raylib works!", 280, 200, 30, DARKGREEN);
        DrawCircle(400, 280, 50, SKYBLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}