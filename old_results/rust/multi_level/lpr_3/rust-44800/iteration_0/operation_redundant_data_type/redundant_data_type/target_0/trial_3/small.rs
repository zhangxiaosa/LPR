struct a {
    c: Vec<u8>,
}

struct d {
    data: Vec<u8>,
}

fn main() {
    let mut k = {
        let c = {
            let mut buf = Vec::new();
            buf.reserve_exact(32);
            buf
        };
        a { c }
    };

    let g = {
        let data = {
            let mut buf = Vec::with_capacity(20);
            buf.push(0x45);
            buf.push(20);
            let hw = 20;
            buf.push(hw);
            buf.push(hw);
            buf.push(21);
            buf.push(21);
            buf.push(23);
            buf.push(23);
            buf
        };
        d { data }
    };

    k.c.push(0);
    k.c.push(1);
    k.c.push(1);
    k.c.push(2);
    k.c.push(3);
    k.c.push(4);
    k.c.push(5);
    k.c.push(6);
    k.c.push(1);
    k.c.push(2);
    k.c.push(3);
    k.c.push(4);
    k.c.push(5);
    k.c.push(6);
    k.c.push(1);
    k.c.push(2);
    k.c.push(3);
    k.c.push(4);
    k.c.push(5);
    k.c.push(6);
    k.c.push(55);
    k.c.push(55);

    let hw = 0b1000_10_00;
    k.c.push(hw);
    k.c.push(hw);
    k.c.reserve(g.data.len());

    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}