use std::collections::VecDeque;

fn main() {
    VecDeque::with_capacity(32);
    VecDeque::push_front(7);
    VecDeque::push_front(6);
    VecDeque::push_front(5);
    VecDeque::push_front(4);
    VecDeque::push_front(3);
    VecDeque::push_front(2);
    VecDeque::push_front(1);
    VecDeque::push_front(0);
    VecDeque::reserve(24);
    println!();
    VecDeque::push_back(0xD9);
}