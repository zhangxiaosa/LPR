use std::collections::VecDeque;

fn main() {
    let mut k_c_capacity: usize = 32;
    let mut k_c_elements: VecDeque<u8> = VecDeque::new();
    let mut k_c_additional_capacity: usize = 24;
    let k_c_new_elements = [0, 1, 2, 3, 4, 5, 6, 7];
    let k_c_new_element_count: usize = k_c_new_elements.len();
    let k_c_new_pushed_element: u8 = 0xD9;

    let mut k_c = VecDeque::with_capacity(k_c_capacity);

    for &elem in k_c_new_elements.iter().rev() {
        k_c.push_front(elem);
    }

    k_c.reserve(k_c_additional_capacity);

    println!();

    k_c.push_back(k_c_new_pushed_element);
}
