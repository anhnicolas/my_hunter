/*
** EPITECH PROJECT, 2022
** B-MUL-100-LIL-1-1-myhunter-nicolas1.nguyen
** File description:
** main_loop
*/

#include <my_hunter.h>

void event_loop(game_t *g, enemies_t *e)
{
    while (sfRenderWindow_pollEvent(g->w->window, &g->event)) {
        if (g->event.type == sfEvtClosed)
            sfRenderWindow_close(g->w->window);
        if (g->event.type == sfEvtMouseButtonPressed) {
            is_button_pressed(g, e, sfMouseLeft);
        }
    }
}

void animated_entity(game_t *g, enemies_t *e)
{
    set_movement(g, e->pikachu);
    set_movement(g, e->pidget);
    set_movement(g, e->charizard);
    set_movement(g, e->charmander);
    set_movement(g, e->eevee);
}

void display_entity(game_t *g, enemies_t *e)
{
    animated_entity(g, e);
    sfRenderWindow_clear(g->w->window, sfBlack);
    sfRenderWindow_drawSprite(g->w->window, g->b->sprite, NULL);
    sfRenderWindow_drawSprite(g->w->window, e->pikachu->sprite, NULL);
    sfRenderWindow_drawSprite(g->w->window, e->pidget->sprite, NULL);
    sfRenderWindow_drawSprite(g->w->window, e->charizard->sprite, NULL);
    sfRenderWindow_drawSprite(g->w->window, e->charmander->sprite, NULL);
    sfRenderWindow_drawSprite(g->w->window, e->eevee->sprite, NULL);
    sfRenderWindow_display(g->w->window);
}

void game(void)
{
    game_t *g = malloc(sizeof(game_t));
    enemies_t *e = malloc(sizeof(enemies_t));

    g->w = create_window();
    g->b = create_background("img/background_1.jpg");
    g->clock = sfClock_create();
    g->score = 0;
    create_all_enemies(g, e);
    main_loop(g, e);
    destroy_all(g, e);
}
