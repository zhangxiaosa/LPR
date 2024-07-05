fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
        let mut l_inner = [0, 0, 0, 0];
        l_inner[0] = l[0];
        l_inner
    }
    
    let mut l = [1, 0, 0, 0];
    let a_ref = &l;
    let l_ref = &l;
    let h_val = 4;
    
    l = f(a_ref, l_ref, h_val);
    println!("{:?}", l);
}