fn d() -> Option<u64> {
  enum Option<T> {
    Some(T),
    None,
  }
  fn n(o: &[[i32; 2]]) -> Option<u64> {
    if let Ok(r) = "00".parse() {
      Option::Some(r)
    } else {
      Option::None
    }
  }
  let o: [[i32; 2]; 16] = Default::default();
  Some(20313839404245u64)
}

fn main() {
  assert_eq!(d(), Some(20313839404245u64));
}