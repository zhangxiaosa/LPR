fn d() -> u64 {    
    enum j {    
        k(u64),    
        l(i32),    
        m,    
    }    
    
    fn n(o: &[[i32; 2]; 16], ab: i32, q: i32, ac: &mut [bool], ad: &mut [i32]) -> j {    
        if ab == 7 {    
            let mut ae = String::new();    
                
            ae += &ad[128].to_string();    
            ae += &ad[64].to_string();    
            ae += &ad[32].to_string();    
            ae += &ad[16].to_string();    
            ae += &ad[8].to_string();    
            ae += &ad[4].to_string();    
            ae += &ad[2].to_string();    
            ae += &ad[1].to_string();        
            return if let Ok(r) = ae.parse() {    
                j::k(r)    
            } else {    
                j::m    
            };    
        }    
            
        // Rest of the function remains unchanged    
        // ...    
    }    
    
    let mut ac = [false; 8192];    
    let mut ad = [0i32; 128];        
    match n(&Default::default(), 0, 4096, &mut ac, &mut ad) {    
        j::k(ad_i_u) => ad_i_u,    
        _ => 0,    
    }    
}    
    
fn main() {    
    assert_eq!(d(), 20_313_839_404_245);    
}