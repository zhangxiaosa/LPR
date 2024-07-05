fn main() {
    let mut l: [[i64; 4]; 4] = [
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 1, 0],
        [0, 0, 0, 1],
    ];

    let result: [[i64; 4]; 4] = f(&l);

    println!("{:?}", result);
}

fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result: [[i64; 4]; 4] = [[0; 4]; 4];

    result[0] = b[0].clone();
    
    result
}