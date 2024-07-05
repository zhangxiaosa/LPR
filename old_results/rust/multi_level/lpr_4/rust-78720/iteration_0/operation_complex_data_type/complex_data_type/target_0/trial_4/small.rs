fn a() -> impl b {
    let var1 = String::new();
    var1.d(String::new())
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}
