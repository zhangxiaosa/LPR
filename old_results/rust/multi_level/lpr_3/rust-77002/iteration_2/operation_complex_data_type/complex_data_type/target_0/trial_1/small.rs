fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
        let mut l_inner_0 = 0i64;
        let mut l_inner_1 = 0i64;
        let mut l_inner_2 = 0i64;
        let mut l_inner_3 = 0i64;
        
        l_inner_0 = l[0];
        
        [l_inner_0, l_inner_1, l_inner_2, l_inner_3]
    }
    
    let mut l_0 = 1i64;
    let mut l_1 = 0i64;
    let mut l_2 = 0i64;
    let mut l_3 = 0i64;
    
    l_0 = f(&[l_0, l_1, l_2, l_3], &[l_0, l_1, l_2, l_3], 4)[0];
    
    println!("{:?}", [l_0, l_1, l_2, l_3]);
}