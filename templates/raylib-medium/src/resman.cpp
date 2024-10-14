#include "resman.hpp"
#include <cassert>
#include <raylib.h>

Texture texs[MAX_TEXTURE_COUNT];
Sound sfx[MAX_SFX_COUNT];
int texc = 0;
int sfxc = 0;
int alloc_tex(const char* name)
{
  if (texc >= MAX_TEXTURE_COUNT)
  {
    TraceLog(LOG_WARNING, "RESMAN: Maximum amount of textures reached (%i) !", MAX_TEXTURE_COUNT);
    return 0;
  }
  texs[texc] = LoadTexture(TextFormat("res/%s", name));
  return texc++;
}
void load_tex(const char* name, int expid)
{
  const int res = alloc_tex(name);
  assert(res == expid);
}
int alloc_sfx(const char* name)
{
  if (sfxc >= MAX_TEXTURE_COUNT)
  {
    TraceLog(LOG_WARNING, "RESMAN: Maximum amount of textures reached (%i) !", MAX_TEXTURE_COUNT);
    return 0;
  }
  sfx[sfxc] = LoadSound(TextFormat("res/%s", name));
  return sfxc++;
}
void load_sfx(const char* name, int expid)
{
  const int res = alloc_tex(name);
  assert(res == expid);
}

void close_resman()
{
  for (int i = 0; i < texc; i++)
  {
    UnloadTexture(texs[i]);
  }
  for (int i = 0; i < sfxc; i++)
  {
    UnloadSound(sfx[i]);
  }
}


