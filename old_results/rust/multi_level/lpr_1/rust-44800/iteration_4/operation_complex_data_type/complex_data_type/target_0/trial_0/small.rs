use std::collections::VecDeque;

fn main() {
    let mut new_variable_capacity: u8 = 32;
    let mut new_variable_elements: [u8; 32] = [0; 32];
    let mut new_variable_length: usize = 0;

    let mut i: u8;

    for i in (0..=7).rev() {
        new_variable_elements[i as usize] = i;
        new_variable_length += 1;
    }

    let new_variable = VecDeque::from((new_variable_elements[..new_variable_length]).to_vec());

    new_variable.reserved(new_variable_capacity as usize - new_variable_length);

    println!();

    new_variable.push_back(0xD9);
}