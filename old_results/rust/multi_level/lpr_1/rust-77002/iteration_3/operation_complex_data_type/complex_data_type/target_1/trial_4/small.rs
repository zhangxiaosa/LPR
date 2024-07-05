fn main() {
    let mut p = [[0_i64; 4]; 4];
    let p0 = p[0];
    let p1 = p[1];
    let p2 = p[2];
    let p3 = p[3];

    let mut l = [0, 1, 0, 0];
    {
        let a = &p0;
        let b = &l;
        let _n = 4;
        let _g = 4;
        let _h = 4;
        let mut result = [0; 4];
        result[0] = b[1];
        l = result;
    }

    println!("{:?}", l);
}