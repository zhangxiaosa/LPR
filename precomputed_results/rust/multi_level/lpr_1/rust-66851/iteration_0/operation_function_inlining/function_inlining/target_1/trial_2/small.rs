use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    type g = [i32];
    type h = [bool];
    type x = [[i32; 2]; 16];
    enum j {
        k(u64),
        l(i32),
        m,
    }

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;
    
    let aa = e;
    let o_ref = &o;
    let p = f;
    let q = f;
    let mut ab = 0;
    let mut ac_ref = &mut ac;
    let mut ad_ref = &mut ad;

    if ab == aa {
        let mut ae = String::new();
        for i in (0..ab).rev() {
            ae += &ad[1 << i].to_string();
        }
        let r = ae.parse();
        return if let Ok(r) = r {
            Some(j::k(r))
        } else {
            Some(j::m)
        };
    }
    
    let mut t = 0;
    let y = q;
    
    for i in 0..ab {
        t = t.max(o_ref[a! {i, usize} + 1][1] - o_ref[a! {i, usize} + 1][0]);
    }
    
    let mut u = t;
    
    while u < y {
        let mut af = true;
        let ag = 1 << ab;
        let mut ah = 0;
        
        for i in 0..ag {
            let s = ad_ref[i] + u;
            if ac_ref[a! {s, usize}] {
                af = false;
                break;
            }
            ad_ref[ag + i] = s;
            ac_ref[a! {s, usize}] = true;
            ah += 1;
        }
        
        if af {
            let mut z: x = Default::default();
            z[a! {ab, usize} + 2][0] = std::i32::MAX;
            
            for i in 1..ab + 2 {
                z[a! {i, usize}][0] = o_ref[a! {i, usize}][0].min(u + o_ref[a! {i, usize} - 1][0]);
                z[a! {i, usize}][1] = o_ref[a! {i, usize}][1].max(u + o_ref[a! {i, usize} - 1][1]);
            }
            
            let af = {
                let aa = aa;
                let mut ac_ref = ac_ref;
                let mut ad_ref = ad_ref;
                n(aa, &z, p, u, ab + 1, &mut ac_ref, &mut ad_ref)
            };
            
            match af {
                j::k(_) | j::m => return Some(af),
                j::l(v) => {}
            }
        }
        
        for i in 0..ah {
            ac_ref[a! {ad[ag + a!{i, usize}], usize}] = false;
        }
        u += 1;
    }
    
    Some(j::l(p))
}

fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut h, ad: &mut g) -> j {
    // Same code as before, but with variables replaced by references
    // and function calls inlined.
}