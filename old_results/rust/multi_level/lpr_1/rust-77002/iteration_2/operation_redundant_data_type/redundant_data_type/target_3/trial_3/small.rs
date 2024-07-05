fn main() {
    fn f(a: &[usize], b: &[usize], _n: usize, _g: usize, _h: usize) -> [usize; 4] {
        let mut l = [0usize; 4];
        l[0] = b[1] as usize;
        l
    }

    const p: [[usize; 4]; 4] = [[0usize, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [0usize, 1, 0, 0];
    l = f(&p[0], &l, 4usize, 4usize, 4usize);
    println!("{:?}", l);
}