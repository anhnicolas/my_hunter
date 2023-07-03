/*
** EPITECH PROJECT, 2022
** B-MUL-100-LIL-1-1-myhunter-nicolas1.nguyen
** File description:
** my_hunter
*/

#include <my_hunter.h>

void destroy_all2(game_t *g, enemies_t *e)
{
    free(g->w);
    free(g->b);
    free(g);
    free(e->pikachu);
    free(e->pikachu->frames);
    free(e->pidget);
    free(e->pidget->frames);
    free(e->charizard);
    free(e->charizard->frames);
    free(e->charmander);
    free(e->charmander->frames);
    free(e->eevee);
    free(e->eevee->frames);
    free(e);
}

void destroy_all(game_t *g, enemies_t *e)
{
    sfTexture_destroy(g->b->texture);
    sfSprite_destroy(g->b->sprite);
    sfTexture_destroy(e->pikachu->texture);
    sfSprite_destroy(e->pikachu->sprite);
    sfTexture_destroy(e->pidget->texture);
    sfSprite_destroy(e->pidget->sprite);
    sfTexture_destroy(e->charizard->texture);
    sfSprite_destroy(e->charizard->sprite);
    sfTexture_destroy(e->charmander->texture);
    sfSprite_destroy(e->charmander->sprite);
    sfTexture_destroy(e->eevee->texture);
    sfSprite_destroy(e->eevee->sprite);
    sfClock_destroy(g->clock);
    sfRenderWindow_destroy(g->w->window);
    destroy_all2(g, e);
}

void main_loop(game_t *g, enemies_t *e)
{
    g->deltatime = 0;
    sfRenderWindow_setFramerateLimit(g->w->window, 60);
    while (sfRenderWindow_isOpen(g->w->window)) {
        g->elapsedtime = sfClock_restart(g->clock);
        event_loop(g, e);
        display_entity(g, e);
        g->elapsedtime = sfClock_getElapsedTime(g->clock);
        g->deltatime = sfTime_asSeconds(g->elapsedtime);
    }
}

void create_all_enemies(game_t *g, enemies_t *e)
{
    e->pikachu = create_enemy("img/Pikachu.png", (sfVector2f){1700, 700},
                                            (sfVector2f){3, 3},
                                            (sfIntRect){2, 101, 54, 44});
    set_frames_pikachu(e->pikachu, 5, (sfIntRect){0, 51, 55, 45});
    e->pidget = create_enemy("img/Pidgeotto.png", (sfVector2f){50, 350},
                                                (sfVector2f){-3, 3},
                                                (sfIntRect){0, 1, 51, 51});
    set_frames_pidget(e->pidget, 3, (sfIntRect){0, 53, 72, 57});
    e->charizard = create_enemy("img/Charizard.png", (sfVector2f){2300, 150},
                                                (sfVector2f){3, 3},
                                                (sfIntRect){0, 173, 125, 73});
    set_frames_charizard(e->charizard, 5, (sfIntRect){0, 80, 91, 85});
    e->charmander = create_enemy("img/Charmander.png", (sfVector2f){-400, 550},
                                                (sfVector2f){-3, 3},
                                                (sfIntRect){0, 76, 40, 39});
    set_frames(e->charmander, 6, 40, (sfIntRect){0, 40, 35, 34});
    e->eevee = create_enemy("img/Eevee.png", (sfVector2f){2500, 600},
                                                (sfVector2f){3, 3},
                                                (sfIntRect){0, 90, 43, 43});
    set_frames_eevee(e->eevee, 7, (sfIntRect){0, 41, 40, 46});
}

int main(int ac, char **av, char **env)
{
    if (env[0] == NULL)
        return 84;
    else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        write(1,
        "my_hunter game : scoring in terminal, exit with close button\n"
        , 61);
        return 0;
    } else {
        game();
        return 0;
    }
}
