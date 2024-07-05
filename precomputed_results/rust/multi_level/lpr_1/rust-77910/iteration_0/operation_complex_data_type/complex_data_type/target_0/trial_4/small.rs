static mut a: i32 = 0;

fn a() -> i32 {
    let c;
    c
}

fn d() {
    let e;
    unsafe {
        assert_eq!(a(), e);
    }
}