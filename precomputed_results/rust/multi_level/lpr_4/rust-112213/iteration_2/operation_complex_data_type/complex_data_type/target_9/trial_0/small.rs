#![feature(const_hash)]

static mut a_0: u64 = 0;

fn b(f_0: u64, x_0: u64, y_0: u64, g_0: u64) {
    unsafe {
        x_0.hash(&mut a_0);
        y_0.hash(&mut a_0);
        g_0.hash(&mut a_0);
    }
}

fn h() -> [isize; 2] {
    let z_0 = [56; 7];
    let n_0 = ac(z_0);
    o([13, 13], z_0, 15609822513776909592, z_0, z_0, n_0);
    b(652623562, 18399139786288871729, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return [13, 13];
}

fn ac(p_0: [isize; 7]) -> u64 {
    let mut ae_0 = (0, 0, [0], 0);
    let q_0 = (0, 0, [0; 3], 0, 0);
    b(p_0, p_0, 0, 0);
    unsafe {
        ae_0.hash(&mut a_0);
    }
    return ae_0.3 as u64;
}

fn o(z_0: [isize; 2], n_0: [isize; 7], r_0: usize, af_0: [isize; 7], _: [isize; 7], ag_0: *mut isize) {
    let mut t_0 = (
        std::ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((std::f64::NAN, 1102345069964335552, 9), [0.0], (0, 0), 0, (0, 0), [0.0]),
        std::ptr::null()
    );
    loop {
        af_0 = n_0;
        let ah_0 = -9223372036854775808;
        let ae_0 = 0;
        t_0.0 = std::ptr::addr_of!(t_0.1 .0);
        t_0.4 .0 = (std::f64::NAN, 1102345069964335552, 9);
        b(0, 0, n_0, 0);
        match t_0.4 .0 .2 {
            9 => {
                b(af_0, ae_0, ah_0, 0);
                b(z_0, [56; 7], n_0, r_0);
                return;
            }
            _ => unsafe {
                *ag_0 = 88;
            },
        }
    }
}

fn main() {
    println!("{:?}", h());
    unsafe {
        println!("hash: {}", a_0);
    }
}