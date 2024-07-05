fn main() {
    let mut new_variable = VecDeque::with_capacity(32);
    new_variable.push_front(7);
    new_variable.push_front(6);
    new_variable.push_front(5);
    new_variable.push_front(4);
    new_variable.push_front(3);
    new_variable.push_front(2);
    new_variable.push_front(1);
    new_variable.push_front(0);
    println!();
    new_variable.push_back(0xD9);
}