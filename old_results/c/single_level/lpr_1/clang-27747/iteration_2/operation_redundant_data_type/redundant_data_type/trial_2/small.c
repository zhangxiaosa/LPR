signed d : 18;
unsigned e;
unsigned f;
signed g;
signed h;

signed i_d : 18;
unsigned i_e;
unsigned i_f;
signed i_g;
signed i_h;

int main() {
  signed l_d = 24;
  unsigned l_e = 6738;
  unsigned l_f = 165;
  
  signed m = i_e;
  l_d = m;
  
  signed n = i_h && l_d;
  
  signed p = l_d | -(l_f && l_d) - n;
  i_g = p;
}