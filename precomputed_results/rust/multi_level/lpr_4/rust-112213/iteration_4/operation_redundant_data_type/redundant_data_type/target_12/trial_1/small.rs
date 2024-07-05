fn b<f: Hash, w: Hash, d: Hash>(f: f, x: w, y: d) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
    }
}

fn ac(p: [isize; 7]) -> [isize; 7] {
    b(p, p, 0);
    ptr::addr_of_mut!(p[6])
}

fn o(z: [isize; 2], n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    loop {
        af = n;
        match () {
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 2]) -> [isize; 7] {
    let n = ac(z_decomposed);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, n);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 2]));
    unsafe {
        println!("hash: {}", a.finish());
    }
}