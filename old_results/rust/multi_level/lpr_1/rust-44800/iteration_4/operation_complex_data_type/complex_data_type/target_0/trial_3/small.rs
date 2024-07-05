fn main() {
    let mut new_variable_elements: [u8; 32] = [0; 32];
    let mut new_variable_front: usize = 0;
    let mut new_variable_back: usize = 0;

    new_variable_elements[new_variable_front] = 7;
    new_variable_front += 1;

    new_variable_elements[new_variable_front] = 6;
    new_variable_front += 1;

    new_variable_elements[new_variable_front] = 5;
    new_variable_front += 1;

    new_variable_elements[new_variable_front] = 4;
    new_variable_front += 1;

    new_variable_elements[new_variable_front] = 3;
    new_variable_front += 1;

    new_variable_elements[new_variable_front] = 2;
    new_variable_front += 1;

    new_variable_elements[new_variable_front] = 1;
    new_variable_front += 1;

    new_variable_elements[new_variable_front] = 0;
    new_variable_front += 1;

    new_variable_back = new_variable_front;

    let new_variable_capacity: usize = 32;
    let new_variable_length: usize = new_variable_front;

    let new_variable = VecDeque::from(new_variable_elements[..new_variable_front].to_vec());
    new_variable.reserve(new_variable_capacity - new_variable_length);
    println!();

    new_variable.push_back(0xD9);
}
