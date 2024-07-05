fn main() {
    let c = VecDeque::<u8>::with_capacity(32);
    let mut k = a { c };

    let mut g = {
        let data = Vec::<u8>::with_capacity(20);
        d { data }
    };
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 20;
    g.data.push(hw as u8);
    g.data.push(hw as u8);
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);
    g.data.push(23);
    k.c.reserve(g.data.len());
    for b in g.data.iter() {
        k.c.push_front(*b);
    }

    let mut g_1 = {
        let data = Vec::<u8>::with_capacity(30);
        d { data }
    };
    let hw_1 = 0b1000_10_00;
    g_1.data.push(hw_1 as u8);
    g_1.data.push(hw_1 as u8);
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        g_1.data.push(b);
    }
    for &b in addr.iter() {
        g_1.data.push(b);
    }
    for &b in addr.iter() {
        g_1.data.push(b);
    }
    g_1.data.push(55);
    g_1.data.push(55);
    g_1.data.push(hw_1 as u8);
    g_1.data.push(hw_1 as u8);
    k.c.reserve(g_1.data.len());
    for b in g_1.data.iter() {
        k.c.push_front(*b);
    }
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}