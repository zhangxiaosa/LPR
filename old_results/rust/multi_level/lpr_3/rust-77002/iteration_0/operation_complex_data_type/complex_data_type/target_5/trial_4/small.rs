fn main() {
    const d: usize = 4;

    fn f(a_rows: usize, a_cols: usize, a_elements: Vec<Vec<i64>>, b_rows: usize, b_cols: usize, b_elements: Vec<Vec<i64>>, n: usize, g: usize, h: usize) -> Vec<Vec<i64>> {
        let mut l_elements = vec![vec![0i64; d]; d];
        for i in 0..n {
            for j in 0..h {
                let temp_j = j;
                let k = 0;
                l_elements[i][temp_j] = b_elements[k][temp_j];
            }
        }
        l_elements
    }
    
    const p_elements: Vec<Vec<i64>> = vec![vec![0, 1, 0, 0], vec![0, 0, 1, 0], vec![0, 0, 0, 1], vec![1, 2, 2, 2]];
    let mut l_elements = vec![vec![1i64, 0, 0, 0], vec![0, 1, 0, 0], vec![0, 0, 1, 0], vec![0, 0, 0, 1]];
    let l_elements = f(p_elements.len(), p_elements[0].len(), p_elements, l_elements.len(), l_elements[0].len(), l_elements, d, d, d);
    let q = l_elements;
    println!("{:?}", q);
}