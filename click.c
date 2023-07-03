/*
** EPITECH PROJECT, 2022
** B-MUL-100-LIL-1-1-myhunter-nicolas1.nguyen
** File description:
** click
*/

#include <my_hunter.h>

void get_mouse_pos(game_t *g)
{
    g->mouse = sfMouse_getPositionRenderWindow(g->w->window);
}

void is_on_target2(game_t *g, enemy_t *enemy)
{
    if (enemy->scale.x < 0 &&
        g->mouse.x <= enemy->pos.x &&
        g->mouse.x >= enemy->pos.x
        - enemy->rect.width * ABS((int)enemy->scale.x) &&
        g->mouse.y >= enemy->pos.y &&
        g->mouse.y <= enemy->pos.y
        + enemy->rect.height * ABS((int)enemy->scale.y)) {
        enemy->is_dead = true;
        g->score += 100;
        my_printf("You Caught A Pokemon ! Score = %d\n", g->score);
    }
}

void is_on_target(game_t *g, enemy_t *enemy)
{
    if (enemy->scale.x > 0 &&
        g->mouse.x >= enemy->pos.x &&
        g->mouse.x <= enemy->pos.x +
        enemy->rect.width * ABS((int)enemy->scale.x) &&
        g->mouse.y >= enemy->pos.y &&
        g->mouse.y <= enemy->pos.y
        + enemy->rect.height * ABS((int)enemy->scale.y)) {
        enemy->is_dead = true;
        g->score += 100;
        my_printf("You Caught A Pokemon ! Score = %d\n", g->score);
    }
    is_on_target2(g, enemy);
}

void is_button_pressed(game_t *game, enemies_t *e, sfMouseButton button)
{
    if (sfMouse_isButtonPressed(button)) {
        get_mouse_pos(game);
        is_on_target(game, e->pikachu);
        is_on_target(game, e->pidget);
        is_on_target(game, e->charizard);
        is_on_target(game, e->charmander);
        is_on_target(game, e->eevee);
    }
}
