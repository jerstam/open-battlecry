#pragma once

#include "../base/types.h"

typedef struct font_t font_t;
typedef struct image_t image_t;
typedef struct config_t config_t;
typedef struct texture_t texture_t;
typedef struct render_target_t render_target_t;
typedef struct SDL_Window SDL_Window;

extern config_t* c_render_vsync;
extern config_t* c_render_scale;

void renderer_init(void* window_handle);
void renderer_quit(void);
void renderer_draw(void);
void renderer_present(void);

texture_t renderer_create_texture(image_t* image);
void renderer_destroy_texture(texture_t texture);

void renderer_add_sprite(texture_t );
void renderer_add_text(font_t* font, int16_t x, int16_t y, const char* text);