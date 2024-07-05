#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();
fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n = {
        let mut ae = (0, 0, [0], 0);
        let q = (0, 0, [0; 3], 0);
        {
            unsafe {
                z.hash(&mut a);
                z.hash(&mut a);
                0.hash(&mut a);
                0.hash(&mut a);
            }
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };
    {
        let mut t: (
            *const usize,
            (usize, i8),
            (char, i32, (isize,), u64),
            char,
            ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]),
            *const u8,
        ) = (
            ptr::null(),
            (0, 0),
            ('a', 0, (0,), 0),
            'a',
            ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
            ptr::null(),
        );
        loop {
            let ae = 0;
            t.0 = ptr::addr_of!(t.1 .0);
            t.4 .0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
            {
                unsafe {
                    0.hash(&mut a);
                    0.hash(&mut a);
                    n.hash(&mut a);
                    0.hash(&mut a);
                }
            }
            match t.4 .0 .2 {
                9 => {
                    unsafe {
                        z.hash(&mut a);
                        [0; 7].hash(&mut a);
                        -9223372036854775808_isize.hash(&mut a);
                        k.hash(&mut a);
                    }
                    [0; 2].hash(&mut a);
                    return [13; 2];
                }
                _ => {
                    unsafe {
                        *(ptr::addr_of_mut(*ag)) = 88_usize;
                    }
                }
            }
        }
    }
}
fn main() {
    {
        println!("{:?}", {
            let mut z = [56_isize; 7];
            let i = 15609822513776909592_usize;
            let j = 652623562_i32;
            let k = 18399139786288871729_u64;
            let aa = [0];
            let n = {
                let mut ae = (0, 0, [0], 0);
                let q = (0, 0, [0; 3], 0);
                {
                    unsafe {
                        z.hash(&mut a);
                        z.hash(&mut a);
                        0.hash(&mut a);
                        0.hash(&mut a);
                    }
                    q.hash(&mut a);
                    ae.hash(&mut a);
                }
                ptr::addr_of_mut!(ae.3)
            };
            {
                let mut t: (
                    *const usize,
                    (usize, i8),
                    (char, i32, (isize,), u64),
                    char,
                    ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]),
                    *const u8,
                ) = (
                    ptr::null(),
                    (0, 0),
                    ('a', 0, (0,), 0),
                    'a',
                    ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
                    ptr::null(),
                );
                loop {
                    let ae = 0;
                    t.0 = ptr::addr_of!(t.1 .0);
                    t.4 .0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
                    {
                        unsafe {
                            0.hash(&mut a);
                            0.hash(&mut a);
                            n.hash(&mut a);
                            0.hash(&mut a);
                        }
                    }
                    match t.4 .0 .2 {
                        9 => {
                            unsafe {
                                z.hash(&mut a);
                                [0; 7].hash(&mut a);
                                -9223372036854775808_isize.hash(&mut a);
                                j.hash(&mut a);
                            }
                            k.hash(&mut a);
                            [112; 6].hash(&mut a);
                            1.hash(&mut a);
                            0.hash(&mut a);
                            4.hash(&mut a);
                            ().hash(&mut a);
                            ().hash(&mut a);
                            [0].hash(&mut a);
                            aa.hash(&mut a);
                            [13; 2].hash(&mut a);
                            [0; 2].hash(&mut a);
                        }
                        _ => {
                            unsafe {
                                *(ptr::addr_of_mut(*&mut 88_usize)) = 88_usize;
                            }
                        }
                    }
                }
            }
            [13; 2]
        });
    }
    unsafe {
        println!("hash: {}", a.finish());
    }
}