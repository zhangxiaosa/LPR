
Before:
for (w = 3; w; w -= 1)
  if (an = 250) {
    ...
  }

After:
while (w-- > 0) {
  if (w == 250) {
    ...
  }
}
