fn main() {
    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    {
        let a = &p[0];
        let b = &[0, 1, 0, 0];
        let _n = 4;
        let _g = 4;
        let _h = 4;
        let mut result = [0; 4];
        result[0] = b[1];
    }
    println!();
}