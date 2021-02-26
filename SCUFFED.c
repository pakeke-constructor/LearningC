
#include <stdio.h>
#include <stdlib.h>

typedef struct Vec2{
  int y;
  int x;
} Vec2;

typedef struct Player {
  int *y;
  int *x;
} Player;

int main(){
  Vec2 *v = malloc(sizeof(Vec2));
  Player p;

  p.x = &v->x;
  p.y = &v->y;

  free(v);
  
  printf("%d", *p.x);
  return 0;
};

/*
Yeah, this is scuffed.

after the call to free, p.x and p.y are pointing to memory
that no longer belongs to this program. So its likely that accessing `*p.x` will
segfault. 
This is called "pointer aliasing", and the .x and .y members are called
"hanging pointers" (after the call to free, obviously)


*/

