use std::convert::TryFrom;

const e: i32 = 7;
const f: i32 = 1 << 12;
const w: usize = f as _;

enum j {
  k(u64),
  l(i32),
  m,
}

fn n(
  aa: i32,
  o: &[[i32; 2]; 16],
  p: i32,
  q: i32,
  ab: i32,
  ac: &mut [bool],
  ad: &mut [i32]
) -> j {
  let mut ae = String::new();
  let mut t = 0;
  let y = q;
  let mut u = t;
  let mut af = true;
  let ag = 1 << ab;
  let mut ah = 0;
  let mut z: [[i32; 2]; 16] = Default::default();
  for i in 1..=ab {
    t = t.max(o[a!{i, usize} + 1][1] - o[a!{i, usize} + 1][0])
  }
  while u < y {
    for i in 0..ag {
      let s = ad[i] + u;
      if ac[a!{s, usize}] {
        af = false;
        break;
      }
      ad[ag + i] = s;
      ac[a!{s, usize}] = true;
      ah += 1;
    }
    if af {
      z[a!{ab, usize} + 2][0] = std::i32::MAX;
      for i in 1..ab + 2 {
        z[a!{i, usize}][0] = o[a!{i, usize}][0].min(u + o[a!{i, usize} - 1][0]);
        z[a!{i, usize}][1] = o[a!{i, usize}][1].max(u + o[a!{i, usize} - 1][1]);
      }
    }
    for i in 0..ah {
      ac[a!{ad[ag + a!{i, usize}] , usize}] = false;
    }
    u += 1;
  }
  j::l(p)
}

let e = 7;
let f = 1 << 12;
let w = f as usize;

enum j {
  k(u64),
  l(i32),
  m,
}

fn n(
  aa: i32,
  o: &[[i32; 2]; 16],
  p: i32,
  q: i32,
  ab: i32,
  ac: &mut [bool],
  ad: &mut [i32]
) -> j {
  let mut ae = String::new();
  let mut t = 0;
  let y = q;
  let mut u = t;
  let mut af = true;
  let ag = 1 << ab;
  let mut ah = 0;
  let mut z: [[i32; 2]; 16] = Default::default();
  for i in 1..=ab {
    t = t.max(o[a!{i, usize} + 1][1] - o[a!{i, usize} + 1][0])
  }
  while u < y {
    for i in 0..ag {
      let s = ad[i] + u;
      if ac[a!{s, usize}] {
        af = false;
        break;
      }
      ad[ag + i] = s;
      ac[a!{s, usize}] = true;
      ah += 1;
    }
    if af {
      z[a!{ab, usize} + 2][0] = std::i32::MAX;
      for i in 1..ab + 2 {
        z[a!{i, usize}][0] = o[a!{i, usize}][0].min(u + o[a!{i, usize} - 1][0]);
        z[a!{i, usize}][1] = o[a!{i, usize}][1].max(u + o[a!{i, usize} - 1][1]);
      }
    }
    for i in 0..ah {
      ac[a!{ad[ag + a!{i, usize}] , usize}] = false;
    }
    u += 1;
  }
  j::l(p)
}

let mut ac = [false; w];
let mut ad = [0i32; 1 << e];
let mut o: [[i32; 2]; 16] = Default::default();
o[1][0] = std::i32::MAX;

match n(e, &o, f, f, 0, &mut ac, &mut ad) {
  j::k(s) => Some(s),
  l => None,
}