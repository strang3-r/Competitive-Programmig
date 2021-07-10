#include <bits/stdc++.h>

int main() {
  int t;
  scanf("%d", &t);
  assert(1 <= t and t <= 100);
  while (t--) {
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    assert(1 <= a and a <= 1000 * 1000 * 1000);
    assert(1 <= b and b <= 1000 * 1000 * 1000);
    assert(1 <= n and n <= 1000 * 1000 * 1000);
    if (n % 2) a *= 2;
    if (a < b) std::swap(a, b);
    printf("%d\n", a / b);
  }
  return EXIT_SUCCESS;
}