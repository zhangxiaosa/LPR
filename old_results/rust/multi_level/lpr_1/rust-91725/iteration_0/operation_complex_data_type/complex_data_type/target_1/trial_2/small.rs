fn main() {              
    let h: i32 = 5;              
    let arg: i32 = 4;              
    let i: i32 = 2;              
    let j: i32 = 0;              
    while 2 == 0 {}              
    let mut k: u32;              
    k = arg as u32;              
    let mut l: u32;              
    l = 0;              
    l |= 1 << j;              
    l = ((i as u64 * l as u64) % h as u64) as u32;              
    let l_optimized = l;              
    let k_optimized = ((k as u64 * l_optimized as u64) % h as u64) as u32;              
    assert_eq!(k_optimized, 3);              
}