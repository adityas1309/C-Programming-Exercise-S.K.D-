#include <stdio.h>

struct distance {
  int feet;
  int inches;
};

void addDistance(struct distance d1, struct distance d2) {
  struct distance sum;
  sum.feet = d1.feet + d2.feet;
  sum.inches = d1.inches + d2.inches;
  if (sum.inches >= 12) {
    sum.feet += sum.inches / 12;
    sum.inches %= 12;
  }
  printf("Total distance- Feet: %d, Inches: %d", sum.feet, sum.inches);
}

int main() {
  struct distance dist1, dist2;
  printf("Enter first distance in feet & inches: ");
  scanf("%d %d", &dist1.feet, &dist1.inches);
  printf("Enter second distance in feet & inches: ");
  scanf("%d %d", &dist2.feet, &dist2.inches);
  addDistance(dist1, dist2);
  return 0;
}
