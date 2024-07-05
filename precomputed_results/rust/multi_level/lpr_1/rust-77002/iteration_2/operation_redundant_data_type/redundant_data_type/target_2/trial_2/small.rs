fn main() {
    const d: i64 = 4;
    fn f(a: &[i32], b: &[i32], _n: i32, _g: i32, _h: i32) -> [i32; 4] {
        let mut l = [0i32; 4];
        l[0] = b[1] as i32;
        l
    }
    const p: [[i32; 4]; 4] = [[0i32, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [0i32, 1, 0, 0];
    l = f(&p[0], &l, d as i32, d as i32, d as i32);
    println!("{:?}", l as [i32; 4]);
}