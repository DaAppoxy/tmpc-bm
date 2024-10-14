#include <raylib.h>
#include <raymath.h>

const float XMAX = 1600.f, YMAX = 900.f;
Vector2 mpo;
Vector2 mdt;
float dt;


int main()
{
  SetTargetFPS(60);
  InitWindow(XMAX, YMAX, "uwu");

  while (!WindowShouldClose())
  {
    BeginDrawing();
      ClearBackground(BLACK);

      

      DrawFPS(0, 0);
    EndDrawing();
    mpo = GetMousePosition();
    mdt = GetMouseDelta();
    dt = GetFrameTime();
  }

  CloseWindow();
  return 0;
}

