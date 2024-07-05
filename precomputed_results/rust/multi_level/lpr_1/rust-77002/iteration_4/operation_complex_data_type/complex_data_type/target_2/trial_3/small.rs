fn main() {
    let mut l: [i32; 4] = [0, 1, 0, 0];
    let mut result: [i32; 4] = [0, 0, 0, 0];
    result[0] = l[1];
    l = result;
}