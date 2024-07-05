fn main() {
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let mut l_optimized = [[0; 4]; 4];
    l_optimized[0][0] = l[0][0];
    // You can add more optimizations here if needed.
    println!("{:?}", l_optimized);
}