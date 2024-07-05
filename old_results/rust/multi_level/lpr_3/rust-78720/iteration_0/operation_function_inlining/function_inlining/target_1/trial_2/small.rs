fn a() -> impl b {            
    {            
        // Inlined body of function c            
    }            
    .d(|| "")            
}            
            
trait b {            
    fn d<e>(self, e) -> f<e>;            
}            
            
struct f<c> {            
    h: e,            
}            
            
impl<e> b for e {}            
            
fn main() {            
    let result = {            
        // Inlined body of function c            
    }            
    .d(|| "");            
    println!("{:?}", result);            
}