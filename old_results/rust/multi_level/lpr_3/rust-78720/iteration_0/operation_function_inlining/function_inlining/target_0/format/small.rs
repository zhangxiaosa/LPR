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

// fn c<e>(g: e) {}
