fn main() {
    fn f(a: &[i64], b: &[i64], _n: i64, _g: i64, _h: i64) -> [i64; 4] {
        let mut result = [0; 4];
        result[0] = b[1];
        result
    }

    let p_0 = [0, 1, 0, 0];
    let p_1 = [0, 0, 1, 0];
    let p_2 = [0, 0, 0, 1];
    let p_3 = [1, 2, 2, 2];

    let mut l = [0, 1, 0, 0];
    l = f(&p_0, &l, 4, 4, 4);

    println!("{:?}", l);
}