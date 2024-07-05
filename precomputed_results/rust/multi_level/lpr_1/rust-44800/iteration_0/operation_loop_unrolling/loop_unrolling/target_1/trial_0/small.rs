use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k = a { c };
    let data = Vec::with_capacity(20);
    let mut g = d { data };
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 20;
    g.data.push(hw);
    g.data.push(hw);
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);
    g.data.push(23);

    // Loop unrolling optimization
    let data_len = g.data.len();
    let n = 4;
    let full_iterations = data_len / n;
    let remaining_elements = data_len % n;

    for i in 0..full_iterations {
        let index = i * n;
        let element_0 = g.data[index];
        let element_1 = g.data[index + 1];
        let element_2 = g.data[index + 2];
        let element_3 = g.data[index + 3];
        k.c.push_front(element_0);
        k.c.push_front(element_1);
        k.c.push_front(element_2);
        k.c.push_front(element_3);
    }

    for i in (full_iterations * n)..(full_iterations * n + remaining_elements) {
        let element = g.data[i];
        k.c.push_front(element);
    }
    // End of loop unrolling optimization

    let data = Vec::with_capacity(30);
    d { data };
    g.data.push(hw);
    g.data.push(hw);
    let addr = [1, 2, 3, 4, 5, 6];
    g.data.push(addr[0]);
    g.data.push(addr[1]);
    g.data.push(addr[2]);
    g.data.push(addr[3]);
    g.data.push(addr[4]);
    g.data.push(addr[5]);
    g.data.push(addr[0]);
    g.data.push(addr[1]);
    g.data.push(addr[2]);
    g.data.push(addr[3]);
    g.data.push(addr[4]);
    g.data.push(addr[5]);
    g.data.push(hw);
    g.data.push(hw);
    k.c.reserve(g.data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}