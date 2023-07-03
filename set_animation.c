/*
** EPITECH PROJECT, 2022
** B-MUL-100-LIL-1-1-myhunter-nicolas1.nguyen
** File description:
** set_animation
*/

#include <my_hunter.h>

void set_frames(enemy_t *enemy, int nframes, int translt, sfIntRect deathframe)
{
    enemy->nframes = nframes;
    enemy->iframe = 0;
    enemy->deathframe = deathframe;
    enemy->frames = malloc(sizeof(sfIntRect) * nframes);
    for (int i = 0; i < enemy->nframes; i++) {
        enemy->frames[i] = (sfIntRect){enemy->rect.left + i * translt,
                enemy->rect.top, enemy->rect.width, enemy->rect.height};
    }
    sfSprite_setTextureRect(enemy->sprite, enemy->frames[0]);
}

void set_frames_charizard(enemy_t *enemy, int nframes, sfIntRect deathframe)
{
    enemy->nframes = nframes;
    enemy->iframe = 0;
    enemy->deathframe = deathframe;
    enemy->frames = malloc(sizeof(sfIntRect) * nframes);
    enemy->frames[0] = (sfIntRect){0, 172, 125, 73};
    enemy->frames[1] = (sfIntRect){125, 168, 124, 77};
    enemy->frames[2] = (sfIntRect){249, 168, 131, 77};
    enemy->frames[3] = (sfIntRect){380, 168, 130, 77};
    enemy->frames[4] = (sfIntRect){510, 167, 127, 78};
    sfSprite_setTextureRect(enemy->sprite, enemy->frames[0]);
}

void set_frames_pidget(enemy_t *enemy, int nframes, sfIntRect deathframe)
{
    enemy->nframes = nframes;
    enemy->iframe = 0;
    enemy->deathframe = deathframe;
    enemy->frames = malloc(sizeof(sfIntRect) * nframes);
    enemy->frames[0] = (sfIntRect){0, 1, 51, 51};
    enemy->frames[1] = (sfIntRect){51, 1, 57, 51};
    enemy->frames[2] = (sfIntRect){108, 1, 49, 51};
    sfSprite_setTextureRect(enemy->sprite, enemy->frames[0]);
}

void set_frames_pikachu(enemy_t *enemy, int nframes, sfIntRect deathframe)
{
    enemy->nframes = nframes;
    enemy->iframe = 0;
    enemy->deathframe = deathframe;
    enemy->frames = malloc(sizeof(sfIntRect) * nframes);
    enemy->frames[0] = (sfIntRect){0, 101, 56, 44};
    enemy->frames[1] = (sfIntRect){56, 101, 58, 44};
    enemy->frames[2] = (sfIntRect){114, 98, 54, 47};
    enemy->frames[3] = (sfIntRect){168, 98, 58, 47};
    enemy->frames[4] = (sfIntRect){231, 108, 57, 37};
    sfSprite_setTextureRect(enemy->sprite, enemy->frames[0]);
}

void set_frames_eevee(enemy_t *enemy, int nframes, sfIntRect deathframe)
{
    enemy->nframes = nframes;
    enemy->iframe = 0;
    enemy->deathframe = deathframe;
    enemy->frames = malloc(sizeof(sfIntRect) * nframes);
    enemy->frames[0] = (sfIntRect){0, 90, 43, 43};
    enemy->frames[1] = (sfIntRect){43, 88, 39, 45};
    enemy->frames[2] = (sfIntRect){82, 91, 37, 42};
    enemy->frames[3] = (sfIntRect){119, 91, 34, 42};
    enemy->frames[4] = (sfIntRect){153, 91, 36, 42};
    enemy->frames[5] = (sfIntRect){189, 91, 39, 42};
    enemy->frames[6] = (sfIntRect){228, 91, 43, 42};
    sfSprite_setTextureRect(enemy->sprite, enemy->frames[0]);
}
