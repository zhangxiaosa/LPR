fn main() {
    fn f(b: &[i64]) -> [i64; 16] {
        let mut l = [0; 16];
        l[0] = b[0];
        l
    }

    let mut l = [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1];

    // Decomposed variables
    let b = &l;
    let mut l_optimized = [0; 16];

    for i in 0..16 {
        l_optimized[i] = l[i];
    }

    l_optimized = f(&b);
    println!("{:?}", l_optimized);
}