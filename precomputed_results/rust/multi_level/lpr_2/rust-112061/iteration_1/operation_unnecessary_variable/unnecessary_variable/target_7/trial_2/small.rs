unsafe fn b() -> (u128, *mut i8, *mut bool) {    
    let mut v8;    
    let mut v9 = 0;    
    let mut v12;    
    let mut d;    
    let mut v20: [u8; 8] = Default::default();    
    let mut e;    
    let mut f: (bool, u8) = Default::default();    
    let mut v33_2;    
    let mut ret = (0, std::ptr::null_mut(), std::ptr::null_mut());    
    ret.2 = &mut false;    
    'l0: loop {        
        v12 = &mut v20[v9] as *mut u8;        
        v20 = [197_u8; 8];        
        v9 = 2_usize;        
        loop {            
            match *v12 {                
                197 => {                    
                    v8 = 13978819448286864680_u64;                    
                    v33_2 = ret.2;                    
                    'l2: loop {                        
                        *v12 = 22;                        
                        loop {                            
                            e = v20;                            
                            match v8 {                                
                                13978819448286864680 => {                                    
                                    v8 = 13152832795211590855_u64;                                    
                                    d = v33_2;                                    
                                    v33_2 = &mut f.0;                                    
                                    f.1 = *v12;                                    
                                    *d = true;                                    
                                    v20 = e;                                    
                                    println!("{:?}", f);                            
                                }                                
                                _ => continue 'l0,                            
                            }                        
                        }                    
                }                
                4 => {                    
                    v12 = &mut v20[v9];                
                }                
                _ => return ret,            
            }        
        }    
}    }

fn main() {
    unsafe {
        b();
    }
}