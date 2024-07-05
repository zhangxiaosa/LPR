fn main() {
    let p_0_0: i64 = 0;
    let p_0_1: i64 = 1;
    let p_0_2: i64 = 0;
    let p_0_3: i64 = 0;
    let p_1_0: i64 = 0;
    let p_1_1: i64 = 0;
    let p_1_2: i64 = 1;
    let p_1_3: i64 = 0;
    let p_2_0: i64 = 0;
    let p_2_1: i64 = 0;
    let p_2_2: i64 = 0;
    let p_2_3: i64 = 1;
    let p_3_0: i64 = 1;
    let p_3_1: i64 = 2;
    let p_3_2: i64 = 2;
    let p_3_3: i64 = 2;

    let mut l_0: i64 = 0;
    let mut l_1: i64 = 1;
    let mut l_2: i64 = 0;
    let mut l_3: i64 = 0;

    {
        let a = &[p_0_0, p_0_1, p_0_2, p_0_3];
        let b = &[l_0, l_1, l_2, l_3];
        let _n: i64 = 4;
        let _g: i64 = 4;
        let _h: i64 = 4;
        let mut result = [0; 4];
        result[0] = b[1];
        l_0 = result[0];
        l_1 = result[1];
        l_2 = result[2];
        l_3 = result[3];
    }

    println!("{:?}", [l_0, l_1, l_2, l_3]);
}