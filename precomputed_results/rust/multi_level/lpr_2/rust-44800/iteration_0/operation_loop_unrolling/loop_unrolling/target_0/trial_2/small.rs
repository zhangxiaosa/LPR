use std::collections::VecDeque;

struct d {
    data: Vec<u8>,
}

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g = d {
        data: Vec::with_capacity(20),
    };
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 0b1000_10_00;
    g.data.push(hw);
    g.data.push(hw);
    for b in g.data.iter() {
        k.push_front(*b);
    }
    g.data.push(hw);
    g.data.push(hw);
    let addr = [1, 2, 3, 4, 5, 6];

    // Loop unrolling for addr.iter()
    let addr_iter = addr.iter();
    let (b1, rest1) = (*addr_iter.next().unwrap(), addr_iter);
    g.data.push(b1);
    
    let (b2, rest2) = (*rest1.next().unwrap(), rest1);
    g.data.push(b2);
    
    let (b3, rest3) = (*rest2.next().unwrap(), rest2);
    g.data.push(b3);
    
    let (b4, rest4) = (*rest3.next().unwrap(), rest3);
    g.data.push(b4);
    
    let (b5, rest5) = (*rest4.next().unwrap(), rest4);
    g.data.push(b5);
    
    let (b6, _) = (*rest5.next().unwrap(), rest5);
    g.data.push(b6);
    // End of loop unrolling for addr.iter()
    
    for &b in addr.iter() {
        g.data.push(b);
    }
    
    for &b in addr.iter() {
        g.data.push(b);
    }
    
    g.data.push(55);
    g.data.push(55);
    g.data.push(hw);
    g.data.push(hw);
    k.reserve(g.data.len());
    let fcs = [0xD9];
    println!();
    k.extend(&fcs);
}