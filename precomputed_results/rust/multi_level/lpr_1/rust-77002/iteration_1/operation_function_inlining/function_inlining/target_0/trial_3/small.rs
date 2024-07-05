fn main() {
    const d: usize = 4;
    
    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    
    let mut l_inline = l;
    for i in 0..d {
        for j in (0..d).step_by(2) {
            for k in 0..d {
                l_inline[j] = l_inline[j + 1];
            }
        }
    }
    
    l = l_inline;
    
    println!("{:?}", l);
}