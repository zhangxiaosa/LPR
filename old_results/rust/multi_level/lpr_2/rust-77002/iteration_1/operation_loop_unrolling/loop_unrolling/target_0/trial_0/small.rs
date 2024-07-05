fn main() {
    fn f(a: &[i64], b: &[[i64; 4]]) -> [[i64; 4]; 4] {
        let mut l = [[0; 4]; 4];

        // Unrolled loop iteration 0
        let i = 0;

        for j in 0..2 {
            l[i][j] = b[2][2];
        }

        // Unrolled loop iteration 1
        let i = 1;

        for j in 0..2 {
            l[i][j] = b[2][2];
        }

        l
    }

    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&[], &l);
    println!("{:?}", l);
}