fn main() {
    let mut l = [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1];
    let mut l_temp = [0; 16];
    l_temp[0] = l[0];

    // Inline the function body
    let mut l = l_temp;

    println!("{:?}", l);
}