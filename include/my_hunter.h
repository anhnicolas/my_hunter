/*
** EPITECH PROJECT, 2022
** B-MUL-100-LIL-1-1-myhunter-nicolas1.nguyen
** File description:
** my_hunter
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <my_printf.h>
#include <my_utils.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#ifndef MY_HUNTER_H_
    #define MY_HUNTER_H_

typedef struct window_s {
    sfRenderWindow *window;
    sfVideoMode mode;
    const char *title;
    sfUint32 style;
} window_t;

typedef struct background_s {
    sfTexture *texture;
    sfSprite *sprite;
} background_t;

typedef struct enemy_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfIntRect *frames;
    sfIntRect deathframe;
    bool is_dead;
    float speed;
    float holdtime;
    float time;
    int nframes;
    int iframe;
} enemy_t;

typedef struct game_s {
    window_t *w;
    background_t *b;
    sfEvent event;
    sfClock *clock;
    sfTime elapsedtime;
    float deltatime;
    sfVector2i mouse;
    int score;
} game_t;

typedef struct enemies_s {
    enemy_t *pikachu;
    enemy_t *pidget;
    enemy_t *charizard;
    enemy_t *charmander;
    enemy_t *eevee;
} enemies_t;

window_t *create_window(void);
background_t *create_background(const char *);
enemy_t *create_enemy(const char *, sfVector2f, sfVector2f, sfIntRect);
void game(void);
void event_loop(game_t *, enemies_t *);
void display_entity(game_t *, enemies_t *);
void get_position(game_t *, enemies_t *);
void is_button_pressed(game_t *, enemies_t *, sfMouseButton);
void set_movement(game_t *, enemy_t *);
void set_frames(enemy_t *, int, int, sfIntRect);
void set_frames_charizard(enemy_t *enemy, int nframes, sfIntRect);
void set_frames_pidget(enemy_t *enemy, int nframes, sfIntRect deathframe);
void set_frames_pikachu(enemy_t *enemy, int nframes, sfIntRect deathframe);
void set_frames_eevee(enemy_t *enemy, int nframes, sfIntRect deathframe);
void destroy_all(game_t *g, enemies_t *e);
void main_loop(game_t *g, enemies_t *e);
void create_all_enemies(game_t *g, enemies_t *e);

#endif /* !MY_HUNTER_H_ */
