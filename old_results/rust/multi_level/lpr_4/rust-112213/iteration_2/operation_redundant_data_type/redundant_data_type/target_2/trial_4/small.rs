fn b(f: f64, x: usize, y: i8, g: u8) {
    f.to_ne_bytes();
    x.to_ne_bytes();
    y.to_ne_bytes();
    g.to_ne_bytes();
}

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    b(652623562_f64, 18399139786288871729_usize, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    b(p.to_ne_bytes(), p.to_ne_bytes(), 0, 0);
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    af = n;
    let ah = isize::MIN;
    let ae = 0;
    b(0, 0, n.to_ne_bytes(), 0);
    b(af.to_ne_bytes(), 56, n.to_ne_bytes(), r);
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32));
}