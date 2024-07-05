fn a() -> &i32 {
  let c;
  c
}

fn d() {
  let c;
  assert_eq!(a, c);
}