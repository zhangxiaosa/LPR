fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        let mut l_inner = [0, 0, 0, 0];
        l_inner[0] = l[0];
        l_inner
    }
    let mut l = [1, 0, 0, 0];
    let l_temp = f(&l);
    let l_element_0 = l_temp[0];
    let l_element_1 = l_temp[1];
    let l_element_2 = l_temp[2];
    let l_element_3 = l_temp[3];
    let l = [l_element_0, l_element_1, l_element_2, l_element_3];
    println!("{:?}", l);
}