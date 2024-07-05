use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn main() {
    let f: isize = 56;
    let x: usize = 15609822513776909592;
    let y: i32 = 652623562;
    let z: [isize; 7] = [f; 7];
    let n: *mut isize = ac(z);
    let r: usize = 0;
    let af: [isize; 7] = [f; 7];
    let ag: *mut isize = ptr::null_mut();
    let t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0.0, 0, 0), [0.0], (0, 0), 0, (0, 0), [0.0]), ptr::null());

    fn b(f: isize, x: usize, y: i32, g: isize) {
        unsafe {
            f.hash(&mut a);
            x.hash(&mut a);
            y.hash(&mut a);
            g.hash(&mut a);
        }
    }

    fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
        let mut ae: (isize, isize, [isize; 1], isize) = (0, 0, [0], 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
        b(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        return [f; 2];
    }

    fn ac(p: [isize; 7]) -> *mut isize {
        let mut ae: (isize, isize, [isize; 1], isize) = (0, 0, [0], 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
        b(p, p, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        return ptr::addr_of_mut!(ae.3);
    }

    fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
        let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0.0, 0, 0), [0.0], (0, 0), 0, (0, 0), [0.0]), ptr::null());
        loop {
            af = n;
            let ah: isize = -9223372036854775808;
            let ae: isize = 0;
            t.0 = ptr::addr_of!(t.1.0);
            t.4.0 = (f64::NAN, 1102345069964335552, 9);
            b(0, 0, n, 0);
            match t.4.0.2 {
                9 => {
                    b(af, ae, ah, 0);
                    b(z, [56; 7], n, r);
                    return;
                }
                _ => unsafe {
                    *ag = 88;
                },
            }
        }
    }

    println!("{:?}", h(z, x, y));
    unsafe {
        println!("hash: {}", a.finish());
    }
}