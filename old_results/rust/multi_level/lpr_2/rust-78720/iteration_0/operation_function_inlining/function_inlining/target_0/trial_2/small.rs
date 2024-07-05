trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}

fn c<e>(g: e) {}

// Inlined function `a`
{
    c({}).d(|| "")
}