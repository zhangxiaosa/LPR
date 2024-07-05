fn main() {
    const p0_0: i64 = 0;
    const p0_1: i64 = 1;
    const p0_2: i64 = 0;
    const p0_3: i64 = 0;
    const p1_0: i64 = 0;
    const p1_1: i64 = 0;
    const p1_2: i64 = 1;
    const p1_3: i64 = 0;
    const p2_0: i64 = 0;
    const p2_1: i64 = 0;
    const p2_2: i64 = 0;
    const p2_3: i64 = 1;
    const p3_0: i64 = 1;
    const p3_1: i64 = 2;
    const p3_2: i64 = 2;
    const p3_3: i64 = 2;
    let mut l = [0, 1, 0, 0];
    {
        let a = &[p0_0, p0_1, p0_2, p0_3];
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