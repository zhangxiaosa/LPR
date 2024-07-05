use std::collections::VecDeque;

fn main() {
    let new_variable: VecDeque<u8> = {
        let mut temp = VecDeque::with_capacity(56);
        temp.extend(vec![0, 1, 2, 3, 4, 5, 6, 7]);
        temp
    };

    println!();
}