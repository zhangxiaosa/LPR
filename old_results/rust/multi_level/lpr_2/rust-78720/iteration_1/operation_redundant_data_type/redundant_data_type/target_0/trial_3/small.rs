fn a() -> f<c> {
    let instance = f::<c> { h: e };
    instance.d(|| "")
}

trait b {
    fn d<e>(self, e) -> f<c> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}