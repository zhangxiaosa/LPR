fn b(f: f32, x: f64, y: u8, g: u16) {
}

fn h(z: [isize; 7]) -> [isize; 2] {
    o([13; 2], z, 15609822513776909592, z, z);
    b(652623562.0, 18399139786288871729.0, 0, 0);
    b([112.0; 6], 1.0, 0, 4);
    b((), (), [0], [0]);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    return ptr::addr_of_mut!(q.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7]) {
    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        match 0 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56_isize; 7], n, r);
                return;
            }
            _ => {
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h([56_isize; 7])
    );
}