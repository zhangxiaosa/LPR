fn main() {
  const d: usize = 4;
  type e = [[i64; d]; d];
  fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
    let mut l = e::default();

    let i_0 = 0;
    let i_1 = 1;
    let i_2 = 2;
    let i_3 = 3;

    for j in 0..h {
      for k in 0..g {
        l[i_0][j] = b[k][j];
      }
    }

    for j in 0..h {
      for k in 0..g {
        l[i_1][j] = b[k][j];
      }
    }

    for j in 0..h {
      for k in 0..g {
        l[i_2][j] = b[k][j];
      }
    }

    for j in 0..h {
      for k in 0..g {
        l[i_3][j] = b[k][j];
      }
    }

    l
  }

  const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
  let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
  l = f(&p, &l, d, d, d);
  println!("{:?}", l);
}