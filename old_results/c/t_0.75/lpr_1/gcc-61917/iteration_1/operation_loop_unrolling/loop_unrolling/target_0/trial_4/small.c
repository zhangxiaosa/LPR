unsigned l;
volatile unsigned m[5][8];
unsigned p1;
unsigned o;

int main()
{
  for (; l >= -4; l++)
  {
    // Unrolled loop body
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
  }

  if (p1)
    m[2][5];
}