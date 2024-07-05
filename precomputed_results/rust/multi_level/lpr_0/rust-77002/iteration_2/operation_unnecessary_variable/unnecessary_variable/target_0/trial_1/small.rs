const L_0: [i64; 16] = [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1];

fn f(b: &[i64; 16]) -> [i64; 16] {
    *b
}

fn main() {
    let result = f(&L_0);
    println!("{:?}", result);
}