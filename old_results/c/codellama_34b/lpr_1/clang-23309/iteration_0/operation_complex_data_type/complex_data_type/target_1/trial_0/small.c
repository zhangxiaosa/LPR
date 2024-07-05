
use std::io::{self, Read, Write};

fn main() {
    let mut ae = 1u8;
    let mut af = 0x2F2F6D26L;
    let mut ag = 248u8;
    let mut ai = 7u8;
    let mut aj = 1u8;
    let mut al = 3u8;
    let mut am = 1u8;
    let mut an;
    let mut ap = 0i32;
    let mut p1 = 0i32;
    let mut p2 = 0i32;
    let mut p3 = 0i32;
    let mut p4 = 0i32;
    let mut p5 = 0i32;
    let mut w = 3i32;
    let mut v = 0i32;
    let mut u = 1u8;
    let mut t = 0i32;
    let mut ab = 0i32;
    let mut ac = 1u8;
    let mut p = 0i32;

    fn1();
    fn9();
    fn13();
    fn1();

    fn fn1() {
        println!("checksum = {}", p1);
    }

    fn fn2(p1: i32, p2: i32) -> i32 {
        p1 - p2
    }

    fn fn3(p1: i32, p2: i32) -> i32 {
        p1 - p2
    }

    fn fn5(p1: i32, p2: i32) -> i32 {
        p2
    }

    fn fn6(p1: i32, p2: i32) -> i32 {
        p1 - p2
    }

    fn fn9(p1: i32, p2: &str, p3: i32) {
        p = p1;
    }

    fn fn10(p1: u8, p2: u8) -> u8 {
        af = 0x2F2F6D26L;
        ag = 248u8;
        fn11(2u8, ag, p2, 1u8);
        return af;
    }

    fn fn11(p1: u8, p2: u8, p3: u8, p4: u8) -> u8 {
        ai = 7u8;
        aj = 1u8;
        fn12(ai, ai, p1, 0u8, p1);
        return aj;
    }

    fn fn12(p1: u8, p2: u8, p3: u8, p4: u8, p5: u8) -> u8 {
        al = 3u8;
        am = 1u8;
        an;
        for w in 3..3 {
            an = 250u8;
            p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
            let ao = 0xBCD1L;
            if fn2(fn3(ao, fn6(am, an)), p2) & 1u8 {
                v = 1u8;
            }
        }
        return al;
    }

    fn fn13() -> i32 {
        ae = 1u8;
        fn10(u, t);
        return ae;
    }
}
