use std::ptr;

fn main() {
    let a = DefaultHasher::new();

    fn b(f: u64, x: u64, y: u64, g: u64) {
        let mut a = a.clone();
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    fn h() -> [u64; 2] {
        let n = ac();
        b(652623562, 18399139786288871729, 0, 0);
        b(112, 1, 0, 4);
        b(0, 0, 0, 0);
        return [13, 13];
    }

    fn ac() -> *mut u64 {
        let mut ae = (0, 0, [0], 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
        b(0, 0, 0, 0);
        let a = a.clone();
        q.hash(&mut a);
        ae.hash(&mut a);
        return ptr::addr_of_mut!(ae.3);
    }

    fn o() {
        let mut t = (
            ptr::null(),
            (0, 0),
            ('a', 0, (0,), 0),
            'a',
            ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
            ptr::null(),
        );
        loop {
            let mut af = [56; 7];
            let ah = -9223372036854775808;
            let mut ae = 0;
            t.0 = ptr::addr_of!(t.1.0);
            t.4.0 = (f64::NAN, 1_102_345_069_964_335_552, 9);
            b(0, 0, 0, 0);
            match t.4.0.2 {
                9 => {
                    b(af, ae, ah, 0);
                    b([13; 2], [56; 7], 0, 0);
                    return;
                }
                _ => {
                    let mut ag = ptr::null_mut();
                    unsafe {
                        *ag = 88;
                    }
                }
            }
        }
    }

    println!("{:?}", h());
    {
        let a = a.clone();
        println!("hash: {}", a.finish());
    }
}