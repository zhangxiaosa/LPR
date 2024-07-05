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

    // Loop unrolling: for &b in addr.iter()
    {
        let &b = &1;
        g.data.push(b);
    }
    {
        let &b = &2;
        g.data.push(b);
    }
    {
        let &b = &3;
        g.data.push(b);
    }
    {
        let &b = &4;
        g.data.push(b);
    }
    {
        let &b = &5;
        g.data.push(b);
    }
    {
        let &b = &6;
        g.data.push(b);
    }

    // Loop unrolling: for &b in addr.iter()
    {
        let &b = &1;
        g.data.push(b);
    }
    {
        let &b = &2;
        g.data.push(b);
    }
    {
        let &b = &3;
        g.data.push(b);
    }
    {
        let &b = &4;
        g.data.push(b);
    }
    {
        let &b = &5;
        g.data.push(b);
    }
    {
        let &b = &6;
        g.data.push(b);
    }

    g.data.push(hw);
    g.data.push(hw);
    k.c.reserve(g.data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}