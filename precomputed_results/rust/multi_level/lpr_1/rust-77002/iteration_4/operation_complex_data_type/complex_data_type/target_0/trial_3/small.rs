fn main() {
    let l = [0, 1, 0, 0];
    let b = &l[1]; // Optimize: directly assign the value at index 1 of l to b
    println!("{:?}", b);
}