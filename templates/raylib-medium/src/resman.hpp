#pragma once
#ifndef H_RESMAN
#define H_RESMAN
#include <raylib.h>
#define MAX_TEXTURE_COUNT 64
#define MAX_SFX_COUNT 64

extern Texture texs[MAX_TEXTURE_COUNT];
extern Sound sfx[MAX_SFX_COUNT];

int alloc_tex(const char* no_path_name);
void load_tex(const char* no_path_name, int expected_id);
int alloc_sfx(const char* no_path_name);
void load_sfx(const char* no_path_name, int expected_id);

void close_resman();

#endif
