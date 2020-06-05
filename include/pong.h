//
// Created by vitalijbukatkin on 31.05.2020.
//

#ifndef PONG_PONG_H
#define PONG_PONG_H

#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include "util/events.h"
#include "util/render.h"

#define GAME_TITLE "Pong"
#define MAX_SCORE 10

#ifdef DEBUG
#define RESOURCES_PATH "../share/pong-0.1/themes/space/"
#else
#define RESOURCES_PATH "/usr/local/share/pong-0.1/themes/space/"
#endif

#define HAPTIC_STRENGTH 0.7f
#define HAPTIC_LONG 500

static int SCREEN_WIDTH = 1280;
static int SCREEN_HEIGHT = 800;
static int BALL_SPEED = 35;

extern SDL_Joystick *joystick;
extern SDL_Haptic *haptic;

typedef struct {
    SDL_Texture *background;
    SDL_Texture *ball;
    SDL_Texture *ball_active;
    SDL_Texture *deck;
} TexturesPack;

typedef struct {
    Mix_Chunk *beep;
} SoundsPack;

typedef struct {
    TTF_Font *main;
} FontsPack;

extern TexturesPack textures;
extern FontsPack fonts;
extern SoundsPack sounds;

#endif //PONG_PONG_H