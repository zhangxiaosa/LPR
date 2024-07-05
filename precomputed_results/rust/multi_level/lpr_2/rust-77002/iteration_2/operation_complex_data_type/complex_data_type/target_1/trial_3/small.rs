fn main() {
    fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
        let mut l = [[0; 4]; 4];
        l[0][0] = b[2][2];
        l
    }

    let row1 = [1, 0, 0, 0];
    let row2 = [0, 1, 0, 0];
    let row3 = [0, 0, 1, 0];
    let row4 = [0, 0, 0, 1];

    let l = f(&[row1, row2, row3, row4]);
    println!("{:?}", l);
}