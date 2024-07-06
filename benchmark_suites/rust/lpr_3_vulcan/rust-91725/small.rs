fn c(union:u32,_      :u32,d:u32)->u32{
    (true as u64*c    as u64%d as u64) as u32
}
fn d(u32:u32,g  : u32) -> u32 {
    let mut k
      = g  ;
    k = c(k, g, u32);
    k
}
fn main() {
    assert_eq!(d(5, 4), 3);
}
