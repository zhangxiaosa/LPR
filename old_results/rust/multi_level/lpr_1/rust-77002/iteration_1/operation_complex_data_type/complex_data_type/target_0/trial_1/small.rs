fn main() {
    const d: usize = 4;

    fn f(a: &[i64], b: &[i64], n: usize, g: usize, h: usize) -> [i64; 4] {
        let mut l = [0; 4];
        for j in (0..h).step_by(2) {
            l[j] = b[1];
            l[j + 1] = b[1];
        }
        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let a0: [i64; 4] = p[0];
    let a1: [i64; 4] = [0, 1, 0, 0];
    let a2: usize = d;
    let a3: usize = d;
    let a4: usize = d;
    let result: [i64; 4] = f(&a0, &a1, a2, a3, a4);
    let l: [i64; 4] = result;
    println!("{:?}", l);
}