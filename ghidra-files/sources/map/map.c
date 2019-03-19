void get_yy() {
  // this func actually does nothing
  int a = 0;
  a = a * 5;
  a = a + 1;
  return;
}


char get_char() {
  get_yy();
  int a = 0;
  for (int i = 0; i < 5; i++) {
    a += 1;
  }
  get_yy();
}
double f1(int x) {

  int y;
  y = get_y();
  return x * 55 * .5;
}


int get_y() {
  get_yy();
  char c;
  c = get_char();
  return -1;
}

int main(void) {
  get_y();
  double a = f1(5);
  get_yy();

  return 0;
}
