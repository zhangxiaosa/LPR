unsafe fn a() -> *const *mut i64 {
    // ... (previous unchanged code) ...
    'bb65: loop {
        let tup_ptr = std::ptr::addr_of_mut!(tup);
        // ... (unrolled code omitted for brevity) ...
    }
}

fn main() {
    unsafe {
        a();
    }
}
