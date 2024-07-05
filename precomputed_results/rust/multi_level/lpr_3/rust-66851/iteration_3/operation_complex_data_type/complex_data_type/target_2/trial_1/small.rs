fn d() -> u64 {
  fn n(o: &[[i32; 2]]) -> u64 {
    let mut ae = String::new();
    ae += "00";
    if let Ok(r) = ae.parse() {
      r
    } else {
      0
    }
  }
  let o: [[i32; 2]; 16] = Default::default();
  if n(&o) != 0 {
    20313839404245u64
  } else {
    0
  }
}

fn main() {
  assert_eq!(d(), 20313839404245u64);
}