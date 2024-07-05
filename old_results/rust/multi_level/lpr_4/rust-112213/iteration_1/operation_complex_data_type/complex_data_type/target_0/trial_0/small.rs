fn main() {
    let mut a: u64 = 0;

    fn b(f: u64, x: u64, y: u64, g: u64) {
        a = a.wrapping_add(f);
        a = a.wrapping_add(x);
        a = a.wrapping_add(y);
        a = a.wrapping_add(g);
    }

    fn h() -> [isize; 2] {
        let aa: [usize; 1] = [0];
        let z: [isize; 7] = [0; 7];
        let n = ac(z);
        o([13; 2], z, 15609822513776909592, z, z, n);
        b(652623562, 18399139786288871729, 0, 0);
        b([112; 6], 1, 0, 4);
        b(0, 0, [0], aa[0]);
        return [13; 2];
    }

    fn ac(p: [isize; 7]) -> isize {
        let mut ae: isize = 0;
        let q: isize = 0;
        b(p[0], p[1], 0, 0);
        ae.hash(&mut a);
        return ae;
    }

    fn o(z: [isize; 2], n: [isize; 7], r: usize, af: [isize; 7], _: [isize; 7], _: *mut isize) {
        let mut t: isize = 0;
        let ah: isize = -9_223_372_036_854_775_808;
        let ae: isize = 0;
        af = n;
        t = t.wrapping_add(0);
        t = t.wrapping_add(1);
        t = t.wrapping_add(0);
        t = t.wrapping_add(0);
        match t {
            9 => {
                b(af, ae, ah, 0);
                b(z[0], 56, n[0], r);
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }

    println!("{:?}", h());
    println!("hash: {}", a);
}
