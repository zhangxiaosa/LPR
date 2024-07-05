fn main() {              
    let mut d = {              
        let mut generator = {              
            || {              
                let c = yield "What is your name?";              
                yield "How are you feeling?";              
            }              
        };              
        Box::pin(move |_| generator.resume(()))              
    };              
                  
    let e = String::new();              
    match d.as_mut().resume(e) {              
        _ => {}              
    }              
                  
    let e = String::new();              
    match d.as_mut().resume(e) {              
        _ => {}              
    }              
}