fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(z_decomposed);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, n);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));
}