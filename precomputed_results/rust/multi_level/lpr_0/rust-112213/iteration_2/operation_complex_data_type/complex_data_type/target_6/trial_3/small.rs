#[feature(const_hash)]

fn main() {
    let mut a =  std::collections::hash_map::DefaultHasher::new();

    fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
        let aa = [0];
        let ad = [0; 3];
        let (mut ae0, mut ae1, mut ae2, mut ae3) = (0, 0, ad, 0);
        let q = (0, 0, ad, 0, 0);

        b(&z, &z, 0, 0);

        
        q.hash(&mut a);
        ae0.hash(&mut a);
        ae1.hash(&mut a);
        ae2.hash(&mut a);
        ae3.hash(&mut a);
        
        let n = &mut ae3;

        let mut t0 = std::ptr::null();
        let mut t1 = (0, 0);
        let mut t2 = ('a', 0, (0, 0, 0), 0);
        let mut t3 = 'a';
        let mut t4 = ((0.0, 0, 0), 0.0, (0, 0), 0, (0, 0), 0.0);
        let mut t5 = std::ptr::null();
        
        loop {
            
            ae3 = n.clone();
            let ae = 0;
            
            t0 = std::ptr::addr_of!(t1.0);

            t4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

            b(0, 0, n, 0);

            match t4.0.2 {
                9 => {
                    b(&ae3, ae, 0, s);
                    b(&z, &p, n, r);
                    return [13, 13];
                },
                v => unsafe { *_ag = 88_isize; },
            }
        }    
    }
    
    fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) {
        let mut t0 = std::ptr::null();
        let mut t1 = (0, 0);
        let mut t2 = ('a', 0, (0,), 0);
        let mut t3 = 'a';
        let mut t4 = ((0.0, 0, 0), 0.0, (0, 0), 0, (0, 0), 0.0);
        let mut t5 = std::ptr::null();
        
        loop {
            af = n.clone();
            let ae = 0;
            t0 = std::ptr::addr_of!(t1.0);
            
            t4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
            b(0, 0, n, 0);
            
            match t4.0.2 {
                9 => {
                    b(&af, ae, 0, s);
                    b(&z, &p, n, r);
                    return;
                }
                v => unsafe { *_ag = 88_isize; },
            }
        }
    }
    
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
    
    unsafe {
        println!("hash: {}", a.finish());
    }
}
