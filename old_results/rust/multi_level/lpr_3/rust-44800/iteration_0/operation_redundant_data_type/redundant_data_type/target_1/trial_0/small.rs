struct d {
    data: Vec<u8>,
}

fn main() {
    let mut k: Vec<u8> = {
        let c = {
            let mut buf = Vec::new();
            buf
        };
        c
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
    k.push(0);
    k.push(1);
    k.push(1);
    k.push(2);
    k.push(3);
    k.push(4);
    k.push(5);
    k.push(6);
    k.push(1);
    k.push(2);
    k.push(3);
    k.push(4);
    k.push(5);
    k.push(6);
    k.push(1);
    k.push(2);
    k.push(3);
    k.push(4);
    k.push(5);
    k.push(6);
    k.push(55);
    k.push(55);
    let hw = 0b1000_10_00;
    k.push(hw);
    k.push(hw);
    
    let fcs = [0xD9];
    println!();
    k.extend_from_slice(&fcs);
}