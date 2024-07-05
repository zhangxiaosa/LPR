use std::collections::VecDeque;

fn main() {
    let mut k = {
        let mut c = VecDeque::with_capacity(32);
        c.push_front(7);
        c.push_front(6);
        c.push_front(5);
        c.push_front(4);
        c.push_front(3);
        c.push_front(2);
        c.push_front(1);
        c.push_front(0);
        let g = {
            let mut data = Vec::with_capacity(30);
            let hw = 0b1000_10_00;
            data.push(hw);
            data.push(hw);
            let addr = [1, 2, 3, 4, 5, 6];
            data.extend_from_slice(&addr);
            data.extend_from_slice(&addr);
            data.extend_from_slice(&addr);
            data.push(55);
            data.push(55);
            data.push(hw);
            data.push(hw);
            data
        };
        c.reserve(g.len());
        c.extend(&[0xAA]);
        k { c }
    };
}
