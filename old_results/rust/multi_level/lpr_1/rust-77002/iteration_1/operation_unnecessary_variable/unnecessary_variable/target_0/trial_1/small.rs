fn main() {
    const d: usize = 4;

    fn f(a: &[i64], b: &[i64], n: usize, g: usize, h: usize) -> [i64; 4] {
        let mut l = [0; 4];
        for j in (0..h/2) {
            let even_index = 2 * j;
            l[even_index] = b[1];
            l[even_index + 1] = b[1];
        }
        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [0, 1, 0, 0];
    l = f(&p[0], &l, d, d, d);
    println!("{:?}", l);
}