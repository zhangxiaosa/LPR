fn a() -> impl b {
    let receiver: String = String::new();
    
    receiver.d(|| {
        let closure_result: String = String::new();
        closure_result
    })
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}
