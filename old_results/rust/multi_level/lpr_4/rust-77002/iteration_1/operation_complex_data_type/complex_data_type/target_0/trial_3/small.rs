fn main() {
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let mut b = [[0; 4]; 4];

    for i in 0..4 {
        for j in 0..4 {
            b[i][j] = l[i][j];
        }
    }

    l = f(&b);
    println!("{:?}", l);
}

fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result = [[0; 4]; 4];

    for i in 0..4 {
        for j in 0..4 {
            result[i][j] = b[i][j];
        }
    }

    result
}