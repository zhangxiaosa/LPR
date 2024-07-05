use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

fn main() {
    let mut k = {
        let c = {
            let mut buf = VecDeque::new();
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

    // Unrolled loop iteration 1
    k.c.push_front(g.data[0]);

    // Unrolled loop iteration 2
    k.c.push_front(g.data[1]);

    // Unrolled loop iteration 3
    k.c.push_front(g.data[2]);

    // Unrolled loop iteration 4
    k.c.push_front(g.data[3]);

    // Unrolled loop iteration 5
    k.c.push_front(g.data[4]);

    // Unrolled loop iteration 6
    k.c.push_front(g.data[5]);

    // Unrolled loop iteration 7
    k.c.push_front(g.data[6]);

    // Unrolled loop iteration 8
    k.c.push_front(g.data[7]);

    // Unrolled loop iteration 9
    k.c.push_front(g.data[8]);

    // Unrolled loop iteration 10
    k.c.push_front(g.data[9]);

    // Unrolled loop iteration 11
    k.c.push_front(g.data[10]);

    // Unrolled loop iteration 12
    k.c.push_front(g.data[11]);

    // Unrolled loop iteration 13
    k.c.push_front(g.data[12]);

    // Unrolled loop iteration 14
    k.c.push_front(g.data[13]);

    // Unrolled loop iteration 15
    k.c.push_front(g.data[14]);

    // Unrolled loop iteration 16
    k.c.push_front(g.data[15]);

    // Unrolled loop iteration 17
    k.c.push_front(g.data[16]);

    // Unrolled loop iteration 18
    k.c.push_front(g.data[17]);

    // Unrolled loop iteration 19
    k.c.push_front(g.data[18]);

    // Unrolled loop iteration 20
    k.c.push_front(g.data[19]);

    let g = {
        let data = {
            let mut buf = Vec::with_capacity(30);
            let hw = 0b1000_10_00;
            buf.push(hw);
            buf.push(hw);

            // First unrolled block
            buf.push(1);
            buf.push(2);
            buf.push(3);
            buf.push(4);
            buf.push(5);
            buf.push(6);

            // Second unrolled block
            buf.push(1);
            buf.push(2);
            buf.push(3);
            buf.push(4);
            buf.push(5);
            buf.push(6);

            // Third unrolled block
            buf.push(1);
            buf.push(2);
            buf.push(3);
            buf.push(4);
            buf.push(5);
            buf.push(6);

            buf.push(55);
            buf.push(55);
            buf.push(hw);
            buf.push(hw);
            buf
        };
        d { data }
    };

    k.c.reserve_exact(g.data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}