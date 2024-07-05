fn a() -> impl b {
    let empty_block = ();
    let closure_arg = "";
    empty_block.d(closure_arg)
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: c,
}

impl<e> b for e {}
