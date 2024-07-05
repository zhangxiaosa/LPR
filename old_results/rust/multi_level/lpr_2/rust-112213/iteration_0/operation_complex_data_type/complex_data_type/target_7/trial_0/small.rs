fn b(f: u64, x: u64, y: u64, g: u64) {
    a = a.wrapping_add(f);
    a = a.wrapping_add(x);
    a = a.wrapping_add(y);
    a = a.wrapping_add(g);
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let ab: [isize; 2] = [13; 2];
    o(ab, z, i, z, z, j);
    b(j.into(), k.into(), 0, 0);
    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut usize) {
    af.copy_from_slice(&n);
    let _ = unsafe { ag.as_mut() };
}

fn main() {
    let result = h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64);
}