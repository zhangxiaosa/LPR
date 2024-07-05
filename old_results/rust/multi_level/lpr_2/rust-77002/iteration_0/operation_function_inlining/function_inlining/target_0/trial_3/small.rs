fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    type e = [[i64; d]; d];
    
    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let q = { // inline function o
        let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
        let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
        for i in 0..d {
            for j in 0..d {
                for k in 0..d {
                    l[i][j] = l[k][j];
                }
            }
        }
        l
    };
    println!("{:?}", q);
}
