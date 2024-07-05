fn main() {
    fn f(a: &[i64], b: &[i64], _n: i64, _g: i64, _h: i64) -> [i64; 4] {
        let mut result = [0; 4];
        result[0] = b[1];
        result
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];

    let mut l_0 = 0;
    let mut l_1 = 1;
    let mut l_2 = 0;
    let mut l_3 = 0;
    let mut l = [l_0, l_1, l_2, l_3];
    l = f(&p[0], &l, 4, 4, 4);

    let l_0 = l[0];
    let l_1 = l[1];
    let l_2 = l[2];
    let l_3 = l[3];

    println!("{:?}", [l_0, l_1, l_2, l_3]);
}