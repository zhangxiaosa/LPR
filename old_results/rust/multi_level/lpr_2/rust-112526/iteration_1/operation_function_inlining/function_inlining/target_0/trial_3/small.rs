extern crate core;
use core::ptr;

fn main() {
    let mut _16;
    let mut isize_min;
    let mut _46;

    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();

    let _177 = ptr::null_mut();
    
    let mut _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    
    isize_min = isize::MIN;
    
    loop {
        let _31 = ptr::addr_of_mut!((*ptr::addr_of_mut!(tup)).0 .0 .2);
        _16 = 18215089233857363959_usize;
        let _90 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        let _31 = _90.wrapping_offset(isize::MIN);
        
        loop {            
            *ptr::addr_of_mut!(tup) = (_44, Default::default());
            isize_min = 0;
            let _47 = *_31;
            
            match _16 {
                18215089233857363959 => {
                    _16 = 0;
                    _31 = ptr::addr_of_mut!(_46);
                    
                    match _46 {
                        42 => {
                            // println!("{_47}");  // Commented out since it's no longer needed
                        },
                        _ => continue,
                    }
                },
                0 => continue,
                _ => continue,
            }
        }
    }
}