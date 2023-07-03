/*
** EPITECH PROJECT, 2022
** B-MUL-100-LIL-1-1-myhunter-nicolas1.nguyen
** File description:
** animation
*/

#include <my_hunter.h>

void animation(enemy_t *enemy)
{
    if (enemy->is_dead) {
        sfSprite_setTextureRect(enemy->sprite, enemy->deathframe);
        enemy->speed = 0.0f;
        enemy->holdtime = 0.8f;
        enemy->is_dead = false;
    } else {
        if (enemy->iframe >= enemy->nframes)
            enemy->iframe = 0;
        enemy->speed = 200.0f;
        enemy->holdtime = 0.1f;
        sfSprite_setTextureRect(enemy->sprite, enemy->frames[enemy->iframe]);
    }
}

void set_animation(game_t *game, enemy_t *enemy)
{
    enemy->time += game->deltatime;
    while (enemy->time >= enemy->holdtime) {
        enemy->time -= enemy->holdtime;
        enemy->iframe++;
        animation(enemy);
    }
}

void set_movement(game_t *game, enemy_t *enemy)
{
    if (enemy->scale.x > 0) {
        if (enemy->pos.x + enemy->rect.width * enemy->scale.x < 0) {
            enemy->pos.x = 1920 + enemy->rect.width * enemy->scale.x;
            enemy->pos.y = rand() % 850;
        }
        enemy->pos.x -= enemy->speed * game->deltatime;
    } else {
        if (enemy->pos.x + enemy->rect.width * enemy->scale.x > 1920) {
            enemy->pos.x = 0 + enemy->rect.width * enemy->scale.x;
            enemy->pos.y = rand() % 850;
        }
        enemy->pos.x += enemy->speed * game->deltatime;
    }
    sfSprite_setPosition(enemy->sprite, enemy->pos);
    set_animation(game, enemy);
}
