#include <raylib.h>
#include <raymath.h>
#include "resman.hpp"

const float XMAX = 1600.f, YMAX = 900.f;
Vector2 mpo;
Vector2 mdt;
Camera2D camera;
float dt;


int main()
{
  SetTargetFPS(60);
  InitWindow(XMAX, YMAX, "uwu");

  camera.offset = {XMAX/2.f, YMAX/2.f};
  camera.rotation = 0.f;
  camera.target = {XMAX/2.f, YMAX/2.f};
  camera.zoom = 1.f;  

  while (!WindowShouldClose())
  {
    BeginDrawing();
      ClearBackground(BLACK);

      BeginMode2D(camera);

      EndMode2D();

      DrawFPS(0, 0);
    EndDrawing();
    mpo = GetMousePosition();
    mdt = GetMouseDelta();
    dt = GetFrameTime();
  }

  close_resman();
  CloseWindow();
  return 0;
}

