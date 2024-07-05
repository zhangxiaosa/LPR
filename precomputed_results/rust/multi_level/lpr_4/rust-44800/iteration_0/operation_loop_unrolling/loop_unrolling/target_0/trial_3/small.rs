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
    let mut g = {
        let data = Vec::with_capacity(20);
        d { data }
    };
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

    // Loop unrolling starts here
    let mut iter = addr.iter();
    let mut b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);

    // Remaining loop unrolled two more times
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);

    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    b = *iter.next().unwrap();
    g_1.data.push(b);
    // Loop unrolling ends here

    g_1.data.push(55);
    g_1.data.push(55);
    g_1.data.push(hw_1);
    g_1.data.push(hw_1);
    k.c.reserve_exact(g_1.data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}