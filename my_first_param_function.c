#include <stdio.h>

void detonation_in(int seconds_left) {
  printf("detonation in... %d seconds.\n", seconds_left);
}

int main() {
  int timer = 10;

  while (timer > 0) {
    detonation_in(timer);
    timer--;
  }

  return 0;
}
