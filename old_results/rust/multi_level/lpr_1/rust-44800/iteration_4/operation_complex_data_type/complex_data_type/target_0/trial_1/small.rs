use std::collections::VecDeque;

fn main() {
    let mut new_variable: VecDeque<u8> = VecDeque::with_capacity(32);
    new_variable.push_front(7);
    new_variable.push_front(6);
    new_variable.push_front(5);
    new_variable.push_front(4);
    new_variable.push_front(3);
    new_variable.push_front(2);
    new_variable.push_front(1);
    new_variable.push_front(0);
    new_variable.reserve(24);

    let var_0 = new_variable.pop_front().unwrap();
    let var_1 = new_variable.pop_front().unwrap();
    let var_2 = new_variable.pop_front().unwrap();
    let var_3 = new_variable.pop_front().unwrap();
    let var_4 = new_variable.pop_front().unwrap();
    let var_5 = new_variable.pop_front().unwrap();
    let var_6 = new_variable.pop_front().unwrap();
    let var_7 = new_variable.pop_front().unwrap();

    println!();

    let var_8 = 0xD9;
}