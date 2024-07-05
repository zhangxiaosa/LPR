fn main() {
    fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
        let mut l = [[0; 4]; 4];
        l[0][0] = b[0][0];
        l
    }

    let mut l = [[0; 4]; 4];
    for i in 0..4 {
        for j in 0..4 {
            l[i][j] = 1;
            if i == j {
                l[i][j] = 1;
            } else {
                l[i][j] = 0;
            }
        }
    }

    let result = f(&l);

    println!("{:?}", result);
}