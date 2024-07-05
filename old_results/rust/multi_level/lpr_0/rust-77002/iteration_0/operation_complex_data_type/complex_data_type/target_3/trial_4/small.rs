fn main() {
    const d: usize = 4;

    fn f(a: &Vec<Vec<i64>>, b: &Vec<Vec<i64>>, g: usize, h: usize) -> Vec<Vec<i64>> {
        let mut l = vec![vec![0; d]; d];
        let i = 0;
        l[i][0] = b[0][0];
        l
    }

    const p: Vec<Vec<i64>> = vec![
        vec![0, 1, 0, 0],
        vec![0, 0, 1, 0],
        vec![0, 0, 0, 1],
        vec![1, 2, 2, 2]
    ];
    let mut l: Vec<Vec<i64>> = vec![
        vec![1, 0, 0, 0],
        vec![0, 1, 0, 0],
        vec![0, 0, 1, 0],
        vec![0, 0, 0, 1]
    ];
    l = f(&p, &l, d, d);
    println!("{:?}", l);
}