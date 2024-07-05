#![feature(const_hash)]
  use std::collections::hash_map::DefaultHasher;
  use std::hash::{Hash, Hasher};
  use std::ptr;
  static mut a: DefaultHasher = DefaultHasher::new();
  
  fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
      unsafe {
          f.hash(&mut a);
          x.hash(&mut a);
          y.hash(&mut a);
          g.hash(&mut a);
      }
  }
  
  fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
      let aa = 0;
      let (ae_0, ae_1, ae_2, ae_3) = (0, 0, [0; 1], 0);
      let (q_0, q_1, q_2, q_3) = (0, 0, [0; 3], 0);
      b(&z, &z, 0, 0);
      unsafe {
          q.hash(&mut a);
          ae.hash(&mut a);
      }
      let n = ptr::addr_of_mut!(ae_3);
      o([13; 2], z, i, z, z, j, n);
      b(j, k, 0, 0);
      b([112; 6], 1, 0, 4);
      let aa_0 = ();
      let aa_1 = ();
      let aa_2 = [0];
      let aa_3 = 0;
      b(aa_0, aa_1, aa_2, aa_3);
      return [13; 2];
  }
  
  fn o(
      z: [isize; 2],
      n: &mut [isize; 7],
      r: usize,
      mut af: [isize; 7],
      p: [isize; 7],
      s: i32,
      ag: *mut usize,
  ) {
      let mut t_0: *const usize = ptr::null();
      let mut t_1: (usize, i8) = (0, 0);
      let mut t_2: (char, i32, (isize,), u64) = ('a', 0, (0,), 0);
      let mut t_3: char = 'a';
      let mut t_4: ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]) = ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]);
      let mut t_5: *const u8 = ptr::null();
      loop {
          af = n;
          let ae = 0;
          t_0 = ptr::addr_of!(t.1 .0);
          t_4 .0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
          b(0, 0, n, 0);
          match t_4 .0 .2 {
              9 => {
                  b(af, ae, -9223372036854775808_isize, s);
                  b(&z, &p, n, r);
                  return;
              }
              _ => unsafe {
                  *ag = 88_usize;
              },
          }
      }
  }
  
  fn main() {
      println!(
          "{:?}",
          h(
              [56; 7],
              15609822513776909592,
              652623562,
              18399139786288871729,
          )
      );
      unsafe {
          println!("hash: {}", a.finish());
      }
  }
