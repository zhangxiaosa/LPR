use std::collections::VecDeque;

fn main() {
    let mut k_c_capacity: usize = 32;
    let mut g_data_vec: Vec<i32> = Vec::new();
    let fcs_array: [u8; 1] = [0xD9];
    let k_c_front_elements: [i32; 8] = [7, 6, 5, 4, 3, 2, 1, 0];
    let additional_elements: Vec<i32> = vec![20, 20, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 20, 20];
    let k_c_capacity_reserved: usize = g_data_vec.len();

    let mut k_c = VecDeque::with_capacity(k_c_capacity);
    k_c.extend(k_c_front_elements.iter().rev());
    k_c.extend(additional_elements.iter());

    println!();
    k_c.extend(&fcs_array);
}