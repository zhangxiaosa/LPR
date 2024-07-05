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

  let addr_0 = 1;
  let addr_1 = 2;
  let addr_2 = 3;
  let addr_3 = 4;
  let addr_4 = 5;
  let addr_5 = 6;

  g.data.push(addr_0);
  g.data.push(addr_1);
  g.data.push(addr_2);
  g.data.push(addr_3);
  g.data.push(addr_4);
  g.data.push(addr_5);

  g.data.push(55);
  g.data.push(55);

  g.data.push(hw);
  g.data.push(hw);

  k.reserve(g.data.len());

  let fcs = [0xD9];
  println!();
  k.extend(&fcs);
}