fn main() {
    let mut l = [0, 1, 0, 0];
    let b_value: &[i32; 4] = &l;
    let b_element_1: i32 = b_value[1];
    let mut result = [0; 4];
    result[0] = b_element_1;
    l = result;
    println!("{:?}", l);
}