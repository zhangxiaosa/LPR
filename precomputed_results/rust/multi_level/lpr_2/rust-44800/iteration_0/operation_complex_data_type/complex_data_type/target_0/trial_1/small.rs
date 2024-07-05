use std::collections::VecDeque;

struct d {
  data: Vec<u8>,
}

fn main() {
  let mut k = VecDeque::with_capacity(32);
  let mut g = d {
    data: Vec::with_capacity(20),
  };
  let b = 0x45;
  g.data.push(b);
  g.data.push(20);
  let hw = 0b1000_10_00;
  g.data.push(hw);
  g.data.push(hw);
  for b in g.data.iter() {
    k.push_front(*b);
  }
  g.data.push(hw);
  g.data.push(hw);
  let a1 = 1;
  let a2 = 2;
  let a3 = 3;
  let a4 = 4;
  let a5 = 5;
  let a6 = 6;
  g.data.push(a1);
  g.data.push(a2);
  g.data.push(a3);
  g.data.push(a4);
  g.data.push(a5);
  g.data.push(a6);
  g.data.push(55);
  g.data.push(55);
  g.data.push(hw);
  g.data.push(hw);
  k.reserve(g.data.len());
  let fcs = [0xD9];
  println!();
  k.extend(&fcs);
}