/*
** EPITECH PROJECT, 2022
** B-MUL-100-LIL-1-1-myhunter-nicolas1.nguyen
** File description:
** tools
*/

#include <my_hunter.h>

window_t *create_window(void)
{
    window_t *window = malloc(sizeof(window_t));

    window->mode = (sfVideoMode){1920, 1080, 32};
    window->title = "My Pokemon Hunter";
    window->style = sfResize | sfClose;
    window->window = sfRenderWindow_create(window->mode, window->title,
                                                    window->style, NULL);
    if (!window)
        return NULL;
    return window;
}

background_t *create_background(const char *filename)
{
    background_t *background = malloc(sizeof(background_t));

    background->texture = sfTexture_createFromFile(filename, NULL);;
    background->sprite = sfSprite_create();
    sfSprite_setTexture(background->sprite, background->texture, sfTrue);
    if (!background)
        return NULL;
    return background;
}

enemy_t *create_enemy(const char *path, sfVector2f p, sfVector2f s, sfIntRect r)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));

    enemy->texture = sfTexture_createFromFile(path, NULL);;
    enemy->sprite = sfSprite_create();
    enemy->speed = 200.0f;
    enemy->pos = p;
    enemy->scale = s;
    enemy->rect = r;
    enemy->time = 0.0f;
    enemy->is_dead = false;
    sfSprite_setTexture(enemy->sprite, enemy->texture, sfTrue);
    sfSprite_setScale(enemy->sprite, enemy->scale);
    if (!enemy)
        return NULL;
    return enemy;
}
